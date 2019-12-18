#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

//getting the length of the string in order to allocate memory
int strlen_(char *str)
{
    int i = 0;
    while (str[i] && (str[i] >= 'a' && str[i] <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
    {
        i++;
    }
    return (i);
}

//converting all the strings to lower case in order to better compare the words
char *tolower_(char *str)
{
    int i = 0;
    int j = 0;

    //allocating memory of size strlen(str)
    // char *tmp = (char)malloc(sizeof(char) * strlen_(str));
    char tmp[100] = {0};
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            tmp[j] = str[i] + 32; //converting to lower case
            j++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            tmp[j] = str[i];
            j++;
        }
        i++;
    }
    tmp[j] = '\0';
    return (tmp);
}

//checking if the strings are similer arithmeticaly
int comp(char *str1, char *str2)
{
    int i, j;
    i = j = 0;

    while (str1[i])
        i++;
    while (str2[j])
        j++;
    if (j - i == 0)
        return (0);
    else
        return (-1);
    // return (j - i);
}

//using recursion to find the acurence of a substring in the haystack
void check(char *sub, char *str, int start, int end)
{
}

int main(int argc, char **argv)
{
    //checking arguments have been passed
    if (argc > 1)
    {
        printf("%s\n", tolower_(argv[1]));
    }
    else
    {
        printf("no argument(s)");
    }
    return 0;
}