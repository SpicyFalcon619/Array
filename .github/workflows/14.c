// WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array A and B. Finally show all elements of both array A and B

#include <stdio.h>
int main(){
    int n, m;
    scanf("%d", &n);
    int a[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = temp[i];
    }
    printf("Array A: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}