#include <stdio.h>
int main()
{
    int n, tmp, input;
    printf("Insert a number: ");
    scanf("%d", &n);
    int res = 0;
    input = n; 
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    if(res == input) printf("True ");
    else printf("False ");
}
