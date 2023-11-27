#include <stdio.h>

void clearbuffer()
{
    while ((getchar()) != '\n');
}

int NacitajMaticu(char *subor, int matica[10][10])
{
    FILE *ffile;
    ffile = fopen(subor, "r");
    for(int i = 0; i<100; i++){
        char c;
        fscanf(ffile, "%d", c);
        printf("%d", c);
    }
    fclose(ffile);
}

int main()
{
    int matica[10][10];
    NacitajMaticu("test.txt", matica);
    return 0;
}
