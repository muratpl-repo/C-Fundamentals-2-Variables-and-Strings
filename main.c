#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int tamsayi = 6;
    double buyukyerkaplayankesirlisayi = 7.2;
    char karakter ='K';
    char karakterDizisi[5] = "Kaan";

    char karakterDizisiOrnegi[5] = {'K','A','A','N'};
    printf("%s\n",karakterDizisiOrnegi);

    float kesirliSayi = 9.2;

    printf("%d\n",tamsayi);
    printf("%d Ram'da %d byte yer kaplar.\n",tamsayi,sizeof(int));

    printf("%.2f\n",buyukyerkaplayankesirlisayi);
    printf("%.2f Ram'de %d byte yer kaplar.\n",buyukyerkaplayankesirlisayi,sizeof(double));

    printf("%c\n",karakter);
    printf("%c Ram'de %d byte yer kaplar.\n",karakter,sizeof(char));

    printf("%s\n",karakterDizisi);
    printf("%s Ram'de %d byte yer kaplar.\n",karakterDizisi,sizeof(karakter));

    printf("%.2f\n",kesirliSayi);
    printf("%.2f Ram'de %d byte kadar yer kaplar.\n",kesirliSayi,sizeof(float));



    return 0;
}
