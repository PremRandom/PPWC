#include  <stdio.h>
#include  <unistd.h>
#include  <stdlib.h>
#include  <sys/types.h>


int main()
{	
	pid_t id;
	printf("parent process : %p", getpid());
	
	id = fork();
	if (id>0){
		printf("Parent exit ");
		exit(0);
	
	}
	else
		sleep(30);
	return 0;

}
