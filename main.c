#include <stdio.h>
#include <stdlib.h>

void zad1_1(int a, int b){
    if(a>b){
        printf("pierwsza");
    }else{
        printf("druga");
    }
}
int zad1_2(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
void zad2(unsigned int n){
    int count = 1;
    while (count <= n){
        if (n%count == 0){
            printf("%d\n", count);
        }
        count++;
    }
}
float suma(float a, float b){
    return a+b;
}
float mnozenie(float a, float b){
    return a*b;
}
float roznica(float a, float b){
    return a-b;
}
float dzielenie(float a, float b){
    if(b == 0){
        return 0;
    }
    return a/b;
}



void zadanie3(){
    int x = 0;
    while (x != 1){
        float a,b;
        char znak;
        printf("\npodaj liczbe a: ");
        scanf("%f", &a);
        printf("podaj liczbe b: ");
        scanf("%f", &b);
        printf("podaj rodzaj dzialania [*,-,/,+] lub wpisz cokolwiek by wyjsc: ");
        scanf("%s", &znak);
        switch (znak) {
            case '+':
                printf("%f", suma(a,b));
                break;
            case '-':
                printf("%f", roznica(a,b));
                break;
            case '*':
                printf("%f", mnozenie(a,b));
                break;
            case '/':
                if(b == 0){
                    printf("nie wolno dzielic przez 0");
                    break;
                }
                printf("%f", dzielenie(a,b));
                break;
            default:
                x = 1;
        }
    }
}
int zadanie4(unsigned int a, unsigned int b){
    if(b == 0) return 1;
    int res = 1;
    for(int i = b; i>0; i--){
        res *= a;
    }
    return res;
}
int zadanie5(unsigned int n){
    if(n < 2) return 1;
    int s=1;
    while(0 < n){
        s=s*n;
        n--;
    }
    return s;
}
int zadanie6(unsigned int n){
    return zadanie4(2, n);
}
int zadanie7(){
    unsigned int x;
    scanf("%d", &x);
    if(x>10){
        return 0;
    }
    srand(NULL);
    int count = 0;
    for(int i=0;i<10;i++){
        int wyn = (rand()%10)+1;
        if(wyn == x) count++;
    }
    return (count*100)/10;
}
float zadanie8_1(int n){
    return (float)n/2.0;
}
float zadanie8_2(int n){
    return ((float)n-1)/2.0;
}
void zadanie8(){
    for(int i = 0; i<100; i++){
        if(i%2 == 0) printf("%f \n",zadanie8_1(i));
        else printf("%f \n ",zadanie8_2(i));
    }
}

int main() {
    zadanie8();
}
