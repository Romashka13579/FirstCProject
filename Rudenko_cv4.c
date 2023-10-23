#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

int cv4_prve(){
    FILE *fw;
    int N, c = 1;
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 10: ");
    scanf("%d", &N);

    fw = fopen("floyd.txt", "w");
    if(N >= 1 && N <= 10){
        printf("Vznikne supor floyd.txt a bude obsahovat %d riadkov:\n", N);
        for(int i = 1; i<=N; i++){
            for(int j = 1; j<=i; j++){
                fprintf(fw, "%d ", c);
                printf("%d ", c);
                c+=1;
            }
            fprintf(fw, "\n");
            printf("\n");

        }
    }
    else{printf("Nespravny vstup");}
    fclose(fw);
}

int cv4_druhe(){
    FILE *ffile;
    int a, b;

    ffile = fopen("rozmery.txt", "r");
    if(fscanf(ffile, "%d %d\n", &a, &b) == 2){
        for(int i = 1; i<=a; i++){
            printf("%d: ", i);
            for(int j = i; j<=b; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_tretie (){
    FILE *ffile;
    int n;

    ffile = fopen("tretia.txt", "w");
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 15: ");
    scanf("%d", &n);
    if(n>=1 && n<=15){
        fprintf(ffile, "Ukazkovy vstup:\n");
        for(int i = 0; i<n; i++){
            for(int j = 1; j<=n-i; j++){
                fprintf(ffile, "%d ", j);
            }
            fprintf(ffile, "\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_stvrte(){
    FILE *ffile;
    int n;

    ffile = fopen("stvrta.txt", "w");
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 15: ");
    scanf("%d", &n);
    if(n>=1 && n<=15){
        fprintf(ffile, "Ukazkovy vstup:\n");
        for(int i = 0; i<n; i++){
            for(int j = n-i; j>0; j--){
                fprintf(ffile, "%d ", j);
            }
            fprintf(ffile, "\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_piate(){
    int n, sum = 0, sum0;

    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        sum = sum+i;
        if(sum%3 == 0){sum0 = sum;}
    }
    printf("%d", sum0)
}

int main(){
    /*cv4_prve();
    clearbuffer();
    cv4_druhe();
    clearbuffer();
    cv4_tretie();
    clearbuffer();
    cv4_stvrte();
    clearbuffer();*/
    return 0;
}
