// ask the user to enter their firstname and print it back to them.

// also try this with their fullname.

#include <stdio.h>
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    puts(name);
    return 0;
}