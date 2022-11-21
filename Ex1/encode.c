
#include <string.h>
#include "codec.h"

int main(int argc, char *argv[]) {
    if(argc != 3)
    {
        printf("Usage : ./encode <codec> <message>");
    }
    else
    {
        int length = strlen(argv[2]);
        char *ouput = malloc(length * sizeof(char));

        char *codec = argv[1];

        if(strcmp(codec,"codec1")) codec1(argv[2],ouput,length);
        else if(strcmp(codec,"codec2")) codec2(argv[2],ouput,length);
        else
        {
            printf("Usage : ./encode <codec> <message>");
        }
    }

    return 0;
    
}