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
    printf("\n%s\n",ttt);
    return (EXIT_SUCCESS);
}

