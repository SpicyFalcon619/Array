// WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index

#include <stdio.h>

int main(){
    int n, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}