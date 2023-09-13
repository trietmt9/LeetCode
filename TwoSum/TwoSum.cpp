#include <iostream>
using namespace std;
int sum;
int n, i, j;
int input_Arr[30];
int target; 

int main()
{
    cout << "Insert amount of number in the array: ";
    cin >> n;
    cout << "Insert target of the sum: ";
    cin >> target;
    for(int num = 0; num < n; num++)
    {
       cout << "Insert number: ";
        cin >> input_Arr[num]; 
    }

    for (i = -1; i < n; ++i)
    {
        if(sum != target)
        {
            for(j = 0;j < n; ++j)
            {
                sum = input_Arr[i] + input_Arr[j];
                if(sum == target) cout<<"Input_Array["<< i << "] and Input_Array["<< j << "] " <<endl; break;
            }
        }
    }
}