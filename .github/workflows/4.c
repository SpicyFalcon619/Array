// WAP  that will take n floating point numbers into an array, and then find the average of those numbers

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%.2f", sum/n);

    return 0;
}