// WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], index_max = 0;
    int min = a[0], index_min = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max){
            max = a[i];
            index_max = i;
        }
        if(a[i] < min){
            min = a[i];
            index_min = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, index_max);
    printf("Min: %d, Index: %d", min, index_min);

    return 0;
}