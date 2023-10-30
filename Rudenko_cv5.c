#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

int cv5_prve(){
    FILE *ffile;
    char c;
    int c1 = 0;
    ffile = fopen("vystup.txt", "w");
    while((c = getchar()) != '\n'){
        if(c == '.') c1 = 1;
        if(c1 == 0) fprintf(ffile, "%c", ((c>='A' && c<='Z') ? (c - 'A' + 'a') : (c>='a' && c<='z') ? '.' : (c>='0' && c<='9') ? '-' : (c == '\n') ? '\n' : '*'));
    }
    fclose(ffile);
}

int cv5_druhe(){
    FILE *ffile;
    char c;
    ffile = fopen("cisla.txt", "r");
    while(c = getc(ffile) != EOF){
            printf("%s ", c);
    }
    fclose(ffile);
}

int main()
{
    /*cv5_prve();
    clearbuffer();*/
    cv5_druhe();
    clearbuffer();
    return 0;
}
