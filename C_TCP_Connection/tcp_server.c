/* source: http://www.linuxhowtos.org/C_C++/socket.htm
 * source: http://www.linuxhowtos.org/data/6/server.c

 A simple server in the internet domain using TCP The port number is passed as an argument */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error(const char *msg)
{
	perror(msg);
	exit(1);
}

int main(int argc, char *argv[])
{
	//definitions
	int port = 3000;
	int sockfd;
	int newsockfd;
	socklen_t clilen;
	char buffer[256];
	struct sockaddr_in serv_addr, cli_addr;
	int n;

	printf("TCPServer listen on port %d\n", port);

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0) {
		error("ERROR opening socket");
	}
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY; //listen for any IP addresses 
	serv_addr.sin_port = htons(port); //select listen port
	if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
		error("ERROR on binding");
	}
	listen(sockfd, 5);
	clilen = sizeof(cli_addr);
	newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen); // blocking call (wait for incoming connection)
	if (newsockfd < 0) {
		error("ERROR on accept");
	}
	bzero(buffer, 256);
	n = read(newsockfd, buffer, 255);
	if (n < 0) {
		error("ERROR reading from socket");
	}

	printf("Here is the message: %s\n", buffer);
	n = write(newsockfd, "I got your message", 18);
	if (n < 0) {
		error("ERROR writing to socket");
	}

	close(newsockfd);
	close(sockfd);
	return 0;
}
