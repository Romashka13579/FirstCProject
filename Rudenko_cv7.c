#include <stdio.h>

void clearbuffer()
{
    while ((getchar()) != '\n');
}

char *sifruj(char *sprava, char *heslo)
{
    int j = 0;
    char vysledok[100];
    for(int i = 0; sprava[i]!='\0'; i++){
        int a = sprava[i] - 'A' + 1;
        j = heslo[i-j]!='\0'? j : i;
        int b = heslo[i-j] - 'A' + 1;
        char c = ((a + b) + 'A' - 1);
        printf("%c", c);
    }
}

int cv7_prve()
{
    char sprava[100];
    char heslo[100];
    printf("Zadajte text na sifrovanie: ");
    scanf("%s", &sprava);
    printf("Zadajte sifru heslo: ");
    scanf("%s", &heslo);
    printf("Vystup sifrovanie: ");
    sifruj(sprava, heslo);
}

int main()
{
    /*cv6_prve();
    clearbuffer();*/
    cv7_prve();
    clearbuffer();
    return 0;
}
