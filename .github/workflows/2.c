// WAP that will take n integer numbers into an array, and then sum up all the integers in that array

#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}