#include <stdio.h>
#include <stdlib.h>

float FtoC(float f) { return (f - 32.0) * 5.0 / 9.0; }
float FtoK(float f) { return (f + 459.67) * 5.0 / 9.0; }
float CtoF(float c) { return (c * 9.0) / 5.0 + 32.0; }
float CtoK(float c) { return c + 273.15; }
float KtoC(float k) { return k - 273.15; }
float KtoF(float k) { return (k * 9.0) / 5.0 - 459.67; }

void getValues(char label, float *a) {
    printf("podaj %c:", label);
    scanf("%f", a);
    while (getchar() != '\n'){}
}
int sprawdz(float temp, char stopnie) {
    if ((temp < 0 && stopnie == 'K') || (temp < -273.15 && stopnie == 'C') ||
        (temp < -469.67 && stopnie == 'F')) {
        printf("Nie ma takiej temperatury.");
        return -1;
    }
    printf("%c: %f\n", stopnie, temp);
    return 0;
}
void initMenu() {
    int br = 0;
    while (br == 0) {
        printf("\n1 - Przelicz F na C\n");
        printf("2 - Przelicz F na K\n");
        printf("3 - Przelicz C na F\n");
        printf("4 - Przelicz C na K\n");
        printf("5 - Przelicz K na C\n");
        printf("6 - Przelicz K na F\n");
        printf("7 - Zakoncz program\n");
        printf("Podaj typ konwertera [1-7]:");
        char input = '0';
        int x = 0;
        fflush(stdin);
        scanf("%c", &input);
        x = atoi(&input);
        float a = 0;
        switch (x) {
            case 1:
                getValues('F', &a);
                sprawdz(FtoC(a), 'C');
                break;
            case 2:
                getValues('F', &a);
                sprawdz(FtoK(a), 'K');
                break;
            case 3:
                getValues('C', &a);
                sprawdz(CtoF(a), 'F');
                break;
            case 4:
                getValues('C', &a);
                sprawdz(CtoK(a), 'K');
                break;
            case 5:
                getValues('K', &a);
                sprawdz(KtoC(a), 'C');
                break;
            case 6:
                getValues('K', &a);
                sprawdz(KtoF(a), 'F');
                break;
            case 7:
                br = 1;
            default:
                printf("\nZły numer konwertera\n");
                while (getchar() != '\n'){}
        }
    }
}
int main() {
    initMenu();
    return 0;
}