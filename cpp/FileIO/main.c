#include <stdio.h>

int main()
{
    const char* file = "input.txt";
    const char* mode = "r";
    FILE* fd = fopen(file, mode);
    char buff[3];

    if(fd)
    {
        printf("File %s opened correctly.\n", file);
        int scan_res = 0;

        while( (scan_res = fscanf(fd, "%s", buff)) != EOF)
        {
            printf("Read: %s (%d args).\n", buff, scan_res);
        }

    }
    else
    {
        printf("There was an error during opening the file %s.\n", file);
    }

    printf("Closing file.\n");
    fclose(fd);
    return 0;
}
