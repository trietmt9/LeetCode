#include <iostream>
using namespace std;
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

int Rom2Int(char *s)
{
    int i, num = Rom2IntCheck(s[0]);
    for (i = 0; i != '\0';i++)
    {
        int pre_num = s[i - 1];
        int cur_num = s[i];
        if(pre_num < cur_num) num = cur_num - pre_num;
        else num += cur_num;
    }
    return num;
}

int main()
{
    char *str = "XX";
    cout << "The Roman number: " << str << endl;
    cout << "Interger number: " << Rom2Int(str);
}