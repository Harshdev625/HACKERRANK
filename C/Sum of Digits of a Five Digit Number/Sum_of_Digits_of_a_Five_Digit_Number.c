#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n){
        int i=n%10;
        sum+=i;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}