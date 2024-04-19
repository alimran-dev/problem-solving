#include<iostream>

int fun(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i]<<" ";
    }
    return *arr;
}
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin>> arr[i];
    }
    int a=fun(arr, n);
    std::cout << a;
    return 0;
}