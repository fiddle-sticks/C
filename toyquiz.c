#include <stdio.h>
#include <string.h>
#include "passwords.h"

int main (int argc, char*argv[])
{
    int access = 0;
    char password[8];

    printf("Please enter a password: ");
    scanf_s("%s", password,8);

    if (strncmp (password, adminpass, 8) == 0)
        access = 1;
    if (access >0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");
}