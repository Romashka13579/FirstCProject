#include <stdio.h>

void clearbuffer()
{
    while ((getchar()) != '\n');
}

int cv6_prve()
{
    /*char otoc(char *vstup)
    {
        int i = 0;
        while(char c = vstup[0]){
            int sprintf(vystup, "%c", c);
        }
        return vystup;
    }
    printf("%s\n", otoc("afnaf"));*/
}

int ciselne_znaky(char *str)
{
    int k = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){str[i] = '*'; k++;}
        else{printf("%c", str[i]);}
    }
    printf("%d", k);
}

int main()
{
    /*cv6_prve();
    clearbuffer();*/
    ciselne_znaky("adads3ddd44");
    clearbuffer();
    return 0;
}
