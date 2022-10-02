#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char first[255], last[255];

    printf("Enter your name: ");
    fgets(first, 255, stdin);
    first[strlen(first) - 1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello, %s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello, %s!\n", first, last);
>>>>>>> a14e06f3e93bd6108eb3e221b6a6527e90abe920
    return 0;
}