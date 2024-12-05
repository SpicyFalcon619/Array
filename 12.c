// WAP that will take n integer numbers as input in an array and then insert a number in a position specified by the user in the array

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    n++;
    int u, p;
    printf("number: ");
    scanf("%d", &u);
    printf("position: ");
    scanf("%d", &p);
    for (int i = n; i > p; i--)
    {
        a[i] = a[i-1];
    }
    a[p] = u;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}