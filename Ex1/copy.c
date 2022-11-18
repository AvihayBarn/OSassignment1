#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc,char* argv[])
{
    if(argc == 3)
    {
        
    }
    else if(argc == 4)
    {
        char option = getopt(argc, argv, “:if:lrx”);
        if(option == 'l' || option == 'L')
        {

        }
        else
        {
            printf("Usage : copy <file1> <file2>");
        }
    }
    else
    {
        printf("Usage : copy <file1> <file2>");
    }



    return 0;
}