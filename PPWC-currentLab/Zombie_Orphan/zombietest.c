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
		printf("Parent sleep 30s");
		sleep(30);
	
	}
	else
		exit(0);
	return 0;

}
