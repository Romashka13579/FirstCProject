#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

void cv2_prva(){
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

void cv2_druha(){
    int c;
    printf("Zadaj jeden znak: ");
    c = getchar();
    if((c >='a') && (c <='z')){printf("na vstupe je: male pismeno\n");}
    else if((c >='A') && (c <='Z')){printf("na vstupe je: velke pismeno\n");}
    else if((c >= '0') && (c <= '9')){printf("na vstupe je: cislo\n");}
    else{printf("na vstupe je: ine pismeno\n");}
    return 0;
}

void cv2_tretia(){
    int c;
    printf("Zadaj jeden znak: ");
    c = getchar();
    int velke = (c>='a' && c<='z') ? c + 'A' - 'a' : c;
    if((c >='a') && (c <='z')){
        printf("Znak %c na vstupe ma ASCII hodnotu %d, alebo aj %x Hexa\n", c, c, c);
        printf("Male pismeno bolozmenene na velke %c.\n", velke);
        printf("ktore ma ASCII hodnotu %d, alebo aj %x Hexa\n", velke, velke);
    }
    else{
        printf("Znak %c na vstupe ma ASCII hodnotu %d, alebo aj %x Hexa\n", c, c, c);
    }
    return 0;
}

int main()
{
    cv2_prva();
    clearbuffer();
    cv2_druha();
    clearbuffer();
    cv2_tretia();
    return 0;
}
