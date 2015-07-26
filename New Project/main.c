#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addi(int a, int b) {
    return a + b;
}

char *adds(char *a, char *b) {
    char *res = malloc(strlen(a) + strlen(b) + 1);
    strcpy(res, a);
    strcat(res, b);
    return res;
}

#define add(a,b) _Generic(a,int:addi,char*:adds)(a,b)


int main(int argc, char * argv[])
{
    int a = 1;
    int b = 3;
    char * c = "Hello";
    char * d = "World";
    
    printf("The addition was %d\n",add(a,b));
    printf("The concat was %s\n",add(c,d));

    return 0;
}

