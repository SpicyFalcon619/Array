// WAP that will take n alphabets into an array, and then count number of vowels in that array

#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    char a[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}