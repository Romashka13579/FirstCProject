#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

int cv2_prva(){
    int c1, c2, mensie, vacsie;
    printf("Zadaj dve cisla oddelene medzerou: ");
    scanf("%d %d", &c1, &c2);
    vacsie = c1>c2 ? c1:c2;
    printf("a) vacsie z cisiel %d a %d je: %d\n", c1, c2, vacsie);
    if(c1>c2){
        mensie = c2;
    }
    else{
        mensie = c1;
    }
    printf("b) mensie z cisiel %d a %d je: %d\n", c1, c2, mensie);
}

int cv2_druha(){
    int c;
    printf("Zadaj jeden znak: ");
    c = getchar();
    if ((c >='a') && (c <='z')) printf("na vstupe je: male pismeno\n");
    else if ((c >='A') && (c <='Z')) printf("na vstupe je: velke pismeno\n");
    else if ((c >= '0') && (c <= '9')) printf("na vstupe je: cislo\n");
    else printf("na vstupe je: ine pismeno\n");
    return 0;
}

int cv2_tretia(){
    int c;
    printf("Zadaj jeden znak: ");
    c = getchar();
    int velke = c;
    if((c >='a') && (c <='z')){
        velke += 'A' - 'a';
        printf("Znak %c na vstupe ma ASCII hodnotu %d, alebo aj %x Hexa\n", c, c, c);
        printf("Male pismeno bolozmenene na velke %c.\n", velke);
        printf("ktore ma ASCII hodnotu %d, alebo aj %x Hexa\n", velke, velke);
    }
    else{
        printf("Znak %c na vstupe ma ASCII hodnotu %d, alebo aj %x Hexa\n", c, c, c);
    }
    return 0;
}

int cv2_stvrta(){
    float f;
    printf("Zadajte teplotu F:");
    scanf("%g", &f);
    float c = (f - 32) * 5 / 9;
    printf("Teplota v stupnoch celzia: %.2f\n", c);
    if (c<0) printf("Mrzne");
    if (c>100) printf("Vrie");
    return 0;
}

int cv2_piata(){
    int c1, c2, c3;
    printf("Zadajte 3 cisla:");
    scanf("%d %d %d", &c1, &c2, &c3);
    printf("Najmensie cislo z %d %d %d je: %d\n", c1, c2, c3, (c1<=c2 && c1<=c2) ? c1: (c2<=c1 && c2<=c3) ? c2 : c3);
    return 0;
}

int cv2_siesta(){
    int c1, c2, c3;
    printf("Zadajte 3 cisla:");
    scanf("%d %d %d", &c1, &c2, &c3);
    printf("Usporiadany vysledok:");
    if(c1<c2){
        if(c2<c3){
            printf("%d %d %d", c1, c2, c3);
        }
        else if(c1>c3){
            printf("%d %d %d", c3, c1, c2);
        }
        else{
            printf("%d %d %d", c1, c3, c2);
        }
    }
    else{
        if(c1<c3){
            printf("%d %d %d", c2, c1, c3);
        }
        else if(c2>c3){
            printf("%d %d %d", c3, c2, c1);
        }
        else{
            printf("%d %d %d", c2, c3, c1);
        }
    }

    return 0;
}

int cv2_sedma(){

    return 0;
}

int main()
{
    /*cv2_prva();
    clearbuffer();
    cv2_druha();
    clearbuffer();
    cv2_tretia();
    clearbuffer();
    cv2_stvrta();
    clearbuffer();
    cv2_piata();
    clearbuffer();*/
    cv2_siesta();
    clearbuffer();
    return 0;
}

