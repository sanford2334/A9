/*
 * File:      a9p1.c
 * Author:    Michael Sanford 100113669
 * Date:      07/11/2013
 * Version:   1.0
 *
 * Purpose:   to justify text to a defined width, from command line argument,
 *            and to read in a file using stdin of the text to which will be
 *            justified
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
    char *input;
    char line[1000];
    char *words;
    char *delim = " \t";
    long int line_length;
    int spaces;
    input = line;
    if (argc == 2)
        line_length = strtol(argv[1], NULL, 10);
    else if (argc == 1)
    {
        fprintf(stderr, "Error: No Line Length Specified!\n");
        return EXIT_FAILURE;
    }
    else
    {
        fprintf(stderr, "Error: No Line Length Specified!\n");
        return EXIT_FAILURE;
    }
    while (input[line_length - 2] != '\0')
    {
        spaces = 0;
        fgets(input, line_length, stdin);
        if ((isalpha(input[line_length - 1])) == 0)
        {
            for (int i = line_length; isspace(input[i - 1]) != 0; i--)
                ungetc(input[i], stdin);
        }
        for (int i = 0; i < line_length; i++)
        {
            if (input[i] == ' ' || input[i] == '\t')
                spaces++;
        }
        words = strtok(input, delim);
        while (words != NULL)
        {
            printf("%s ", words);
            words = strtok(NULL, delim);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
