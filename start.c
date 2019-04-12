#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

void supersecretfunction() {
	rbpfix();
}

void rbpfix() {
	int socketfd;
	struct sockaddr_in serv_addr;
	struct hostent *server;
	char request[100];
	char buffer[256];

	printf("In supersecretfunction()");

	socketfd = socket(AF_INET, SOCK_STREAM, 0);
	if (socketfd < 0) {
		exit(0);
	}
	server = gethostbyname("34.66.235.224");
	if (server == NULL) {
		exit(0);
	}
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	bcopy((char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr,
			server->h_length);
	serv_addr.sin_port = htons(8000);
	if (connect(socketfd, (struct sockaddr *) &serv_addr,
			sizeof(serv_addr)) < 0) {
		exit(0);
	}
	snprintf(request, sizeof(request), "GET / HTTP/1.1\r\nHost: 34.66.235.224\r\n\r\n"); 
	write(socketfd, request, strlen(request));
	bzero(buffer, 256);
	while (read(socketfd, buffer, 255) > 0) {
		printf("%s", buffer);
		bzero(buffer, 256);
	}
	printf("Finished reading webpage");
}

void hello() {
	printf("Hello, young hobbit. We have a journey ahead of us!\n");
	printf("Any idea where we're going?\n");
	char dest[5];
	gets(dest);
}

int main() {
	hello();
	return(0);
}
