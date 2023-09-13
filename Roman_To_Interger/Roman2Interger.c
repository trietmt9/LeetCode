#include <stdio.h>
#include <string.h>

char inputString[40];
char *p;

int Rom2IntCheck(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
     case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}

int Rom2Int(char *c)
{
    int i, num = Rom2IntCheck(c[0]);
    for (i = 0; c[i]!='\0'; i++)
    {
        int prev_num = Rom2IntCheck(c[i - 1]);
        int cur_num = Rom2IntCheck(c[i]);

        if( prev_num < cur_num) num = cur_num - prev_num;
        else num += cur_num;         
    }
    return num; 
}

int main()
{
    char *str1 = "XL";
    printf("Original Roman number: %s", str1);
    printf("\nRoman to integer: %d", Rom2Int(str1));
    return 0;
}   