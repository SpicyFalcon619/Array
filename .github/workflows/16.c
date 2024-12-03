// WAP that will take n positive integers into an array A. Now find all the integers that have an odd index and replace them by 0 in array A. Finally show all elements of array A

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i % 2 != 0){
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}