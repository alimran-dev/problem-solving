#include<stdio.h>

void fun(int *arr,int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *(arr+i));
    }
    
}
int main()
{
    int arr[5] = {10, 20, 40, 60, 50};
    fun(arr, 5);
    return 0;
}