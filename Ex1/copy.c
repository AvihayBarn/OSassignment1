#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

void Copy(char *src_path, char *dest_path, bool is_link , bool option)
{
    if(is_link)
    {
        int bufSize = 256;
        char *buf = malloc(bufSize * sizeof(char));
        int linkSize = readlink(argv[1], buf, bufSize);

        while (linkSize + 1 == bufSize)
         {
            free(buf);
            bufSize *= 2;
            buf = malloc(bufSize * sizeof(char));
            linkSize = readlink(argv[2], buf, bufSize);
         }
            
        buf[linkSize] = '\0';
        if(option)
        [
             if (symlink(buf, argv[3]) != 0) {
                    perror("symlink() error");
                    unlink(argv[3]);
                }
        ]
        else
        {

        }
    }
    else
    {

    }
}

bool IsLink(char *agrv[])
{
    starct stat path;
    lstat(argv[1],path)
    if(S_ISLNK(path.st_mode)) return true;
    else return false;
}
int main(int argc,char* argv[])
{
    bool is_link = IsLInk(agrv);
    if(argc == 3)
    {
       Copy(argv[1],argv[2],is_link,false);
    }
    else if(argc == 4)
    {
        char option = getopt(argc, argv, “:if:lrx”);
        if(option == 'l' || option == 'L')
        {
          Copy(argv[2],argv[3],is_link,true);
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