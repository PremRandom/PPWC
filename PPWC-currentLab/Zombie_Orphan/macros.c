
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("CHild id = %d\n", getpid());
        getchar();
        return(5);
    }
    else{
        int status;
        
        while(!WIFSTOPPED(status));       
        waitpid(pid, &status, 0);

        if(WIFEXITED(status)){
            printf("CHild exited normally with status = %d \n", WEXITSTATUS(status));      
        }
        
        else if(WIFSIGNALED(status)){
            printf("Child killed with signal = %d  \n", WTERMSIG(status));
        }
        
        else if(WIFSTOPPED(status)){
            printf("Child stopped with signal = %d  \n", WSTOPSIG(status));
        }
        
   }   


    return 0;
}
