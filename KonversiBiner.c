#include <stdio.h>
#include <string.h>

void biner(int n){
    char konversi;
    
    if(n == 0){
        return;
    }

    if(n % 2 == 0){
        konversi = '0';
    } 
    
    if(n % 2 != 0){
        konversi = '1';
    } 

    biner(n / 2);
    printf("%c", konversi);
}

int main(){
    unsigned long long angka1;

    scanf("%d", &angka1);
    printf("Biner dari %d = ", angka1);
    biner(angka1);

    printf("\n");


    return 0;
}
