// C program to illustrate
// read system Call
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void bsq(int nb, char **argv);

int check_syntax(int argc)
{
    if (argc <= 0)
    {
        return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (check_syntax(argc)) //Esto esta mal
    {
        bsq(argc - 1, argv);
    }
    else
    {
        write(1, "map error\n", 10);
    }
    return (0);
}