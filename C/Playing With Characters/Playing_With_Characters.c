#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char c;
    char s[100],sen[100];
    scanf("%c",&c);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);
    
}
