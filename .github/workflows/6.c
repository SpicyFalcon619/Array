// Wap that will take n integer numbers in an array, n different integer numbers in a second array and put the sum of the same indexed numbers from the two arrays in a third array

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i] + b[i]);
    }

    return 0;
}