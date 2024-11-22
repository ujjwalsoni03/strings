// ask the user to enter their firstname and print it back to them.

// also try this with their fullname.

#include <stdio.h>
int main()
{
    // char firstname[21];
    // printf("enter your first name - ");
    // scanf("%s", firstname);
    // printf("your first name is %s", firstname);

    char fullname[21];
    gets(fullname);
    puts(fullname);
    return 0;
}