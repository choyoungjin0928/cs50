#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[1][1], names[2][2], names[3][3]);

    return 0;
}