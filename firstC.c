* Rudenko Roman 9.19.2023*/
/* Cvicenie 1*/
/* 16.02.2020*/

#include <stdio.h>

int cv1_uvodny()
{
    printf("Ahoj studenti ALPRE!\n");
}

int cv1_prvy()
{
    printf("Su vsetky tieto [%c,%c,%c,%c,%c,%c,%c]\n", '*', '&', '/', '\\', '$', '%', '`' );
    return 0;
}

int cv1_druhy()
{
    int a = 3, b = 2, c = 1;
    printf("Zadaj 3 cele cisla: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Objem %d %d %d je %d\n", a, b, c, a*b*c);
    printf("Povrch %d %d %d je %d\n", a, b, c, 2*a*b + 2*a*c + 2*b*c);
    return 0;
}

int cv1_treti()
{
    float r;
    printf("Zadaj polomer kruhu (realne cislo): ");
    scanf("%f", &r);
    float o = 2*3.14*r;
    float s = 3.14*r*r;
    printf("Kruh s polomerom %.2f: obvod = %g obsah = %g\n", r, o, s);
    return 0;
}

int cv1_hlbkovepre_cvicenie_1()
{
    float num1, num2, num3;
    printf("Zadaj 3 realne cisla: ");
    scanf("%g %g %g", &num1, &num2, &num3);
    printf("Priemer cisel %g %g %g %g\n", num1, num2, num3, (num1+num2+num3)/3);
    return 0;
}

int cv1_hlbkovepre_cvicenie_2()
{
    float cislo1;
    printf("Zadaj cislo: ");
    scanf("%g", &cislo1);
    printf("Cena bez dane: %g\n", cislo1);
    printf("Predajna cena s danou 20%%: %g\n", (cislo1+(cislo1*0.2)));
    return 0;
}

int cv1_hlbkovepre_cvicenie_3()
{

    float vyshka, hmotnost;
    printf("Zadaj vysku v centimetroch: ");
    scanf("%g", &vyshka);
    printf("Zadaj hmotnost v kilogramoch: ");
    scanf("%g", &hmotnost);
    printf("BMI: %g\n", (hmotnost/((vyshka/100)*(vyshka/100))));
    return 0;
}

int cv1_hlbkovepre_cvicenie_4()
{
    float cislo;
    printf("Zadaj cislo: ");
    scanf("%g", &cislo);
    printf("%.0f\n", cislo);
    printf("%.1f\n", cislo);
    printf("%.2f\n", cislo);
    printf("%.3f\n", cislo);
    return 0;
}

int main()
{
    cv1_uvodny();
    cv1_prvy();
    cv1_druhy();
    cv1_treti();
    cv1_hlbkovepre_cvicenie_1();
    cv1_hlbkovepre_cvicenie_2();
    cv1_hlbkovepre_cvicenie_3();
    cv1_hlbkovepre_cvicenie_4();
    return 0;
}
