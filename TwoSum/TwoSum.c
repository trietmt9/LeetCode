#include <stdio.h>
int input;
int i,j;  
int num;
int input_Arr[10000];
int target;
int sum; 
int main()
{
    printf("Insert numbers you want to add: ");
    scanf("%d",&num);
    printf("Insert Target: ");
    scanf("%d", &target);
    for(int n = 0; n <= (num-1); n++)
    {
        printf("Insert input: ");
        scanf("%d",&input_Arr[n]);
    }
    for(i = 0; i < (num-1); ++i)
    {
        if(sum != target){
            for(j = 0; j < num; j++)
            {
                sum = input_Arr[i] + input_Arr[j];
                if(sum == target) 
                {
                        printf("input_Arr[%d] and input_Arr[%d] \n", i, j);
                        break;
                }     
            }
        }  
    } 
}
    
