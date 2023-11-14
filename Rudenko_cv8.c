#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

int NacitajMaticu(char *subor, int matica[10][10]){
    FILE *ffile;
    char c;
    ffile = fopen(subor, "r");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            int c = 0;
            fscanf(ffile, "%d", &c);
            matica[i][j] = c!= ' '?  c: 0;
            printf("%d ", matica[i][j]);
        }
        printf("\n");
    }
    fclose(ffile);
    return "0";
}

int main()
{
    int matica[10][10];
    char a = NacitajMaticu("test.txt", matica);
    printf("%c", a);
    return 0;
}
