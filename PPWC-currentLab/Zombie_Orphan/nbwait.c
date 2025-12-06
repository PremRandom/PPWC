
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t pid = fork();
    int i = 0;
    if (pid == 0) {
    	

        while(i<500){
        	printf("c\n ");
        	i += 1;
        
        
        }
        printf("CHild\n");
        return(0);
    }
    else{
        int status;
        pid_t ret = waitpid(pid, &status, WNOHANG);
        if(ret == 0){
            printf("Parent: CHild is still running!\n");      
        }    
        printf("Parent doing other tasks\n");

        while(i<600){
        	printf("p\n ");
        	i += 1;
        
        
        }        
        waitpid(pid, &status, 0);
        printf("Parent Now collected child\n");    
  
    }


    return 0;
}

