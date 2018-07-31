#include <stdio.h>
/* Write a program which reads numbers from 'input.txt' file. Assume the numbers
 * have fixed length of 3.
 * Target: Sum the numbers from the file.
 * Streched: Enable program to accept a filename as a command line argument.
 */

int main()
{
    const char* file = "input.txt";
    const char* mode = "r";
    FILE* fd = fopen(file, mode);
    unsigned buff;

    if(fd)
    {
        printf("File %s opened correctly.\n", file);
        int sum = 0;

        while( fscanf(fd, "%d", &buff) != EOF )
        {
            printf("Read: %d.\n", buff);
            sum += buff;
        }

        printf("The sum is: %d\n", sum);

    }
    else
    {
        printf("There was an error during opening the file %s.\n", file);
    }

    printf("Closing file.\n");
    fclose(fd);
    return 0;
}
