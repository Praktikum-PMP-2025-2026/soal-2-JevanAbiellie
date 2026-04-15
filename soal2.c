#include <stdio.h>

void rekursi(int n, int *total){
    if (n == 1){
        return;
    }
    else if (n != 1){
        if (n%2 == 0){
            n = n/2;
        }
        else if (n%2 == 1){
            n = 3*n +1;
        }   
    *total += 1;
    }
    rekursi(n, total);
}

int main(){
    int n,num,last;
    scanf("%d ", &n);
    int arr[n];
    for (int i = 0; i < n-1; i++){
        scanf("%d ", &num);
        int total = 0;
        rekursi(num, &total);
        arr[i] = total;
    }
    scanf("%d", &last);
    arr[n] = 0;
    rekursi(last, &arr[n]);
    for (int i = 0; i < n-1; i++){
        printf("LANGKAH %d ", arr[i]);
    }
    printf("LANGKAH %d", arr[n]);
}