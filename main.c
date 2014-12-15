#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>

key_t ftok(const char *pathname, int proj_id);
/*
 * 
 */
int main(int argc, char** argv) 
{
    //key_t ftok(const char *pathname, int proj_id);
    key_t ttt =ftok("C:\\cygwin\\home\\MDAAdvisors\\pa6\\pa6", 11);
    printf("\nreturn value: %i\n",ttt);
    // this line added at 10:30
    // this line added at 11:20
    return (EXIT_SUCCESS);
}

