// WAP that will take n integer numbers as input in an array and then delete a number from a position specified by the user in the array

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int p;
    printf("position: ");
    scanf("%d", &p);
    for (int i = p; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}