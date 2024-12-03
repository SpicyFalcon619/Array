// WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”

#include <stdio.h>

int main(){
    int n, count = 0, s;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if(a[i] == s){
            if (count == 0) printf("FOUND at index position: ");
            else printf(", ");
            printf("%d", i);
            count++;
        }
    }
    if(count == 0){
        printf("NOT FOUND");
    }

    return 0;
}