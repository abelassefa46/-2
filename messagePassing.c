
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define READ 0
#define WRITE 1

void main(){
	char buf[1024] ;
	int fd[2];
	pipe(fd);
	
	
	if
	(fork() == 0)
	
	{
		char *message = "passed message" ;
		write(fd[WRITE], message, strlen(message)+1);
	} 
	
	else
	
	{

		read(fd[READ], buf, 1024);
		printf("message passed", buf);
	}
}
