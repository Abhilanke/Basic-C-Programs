#include <stdio.h>
#include <unistd.h>          //not runnnnn

int main()
{
    pid_t p;
    printf("pid of main program: %d\n", getpid());
    p = fork();

    if (p == 0)
    {
        printf("In child process, pid-%d, ppid-%d\n", getpid(), getppid());
    }
    else if (p > 0)
    {
        printf("In parent, pid: %d, fork returned: %d\n", getpid(), p);
    }
    else
    {
        perror("Fork failed");
    }

    return 0;
}
