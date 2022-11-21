#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "codec.h"


void codec1(char *src_text , char *dest_text , int length)
{

    char ch;
    for(int i = 0; i < length; i++)
     {
            ch = src_text[i];
            if(isalpha(ch))
            {
                ch = isupper(ch) ? toupper(ch) : tolower(ch);
            }
            dest_text[i] = ch;
     }

     printf("\n%s\n",dest_text);
   
}
