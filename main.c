#include <stdio.h>
#include <stdlib.h>

void sayac(int dizi[][7])
{
 int sum=0;
 for(int i=0;i<7;i++)
 {
     for(int j=0;j<7;j++)
     {
         if(dizi[i][j]==1)
         {
             sum+=dizi[i][j];

         }
     }
 }
printf("\nKALAN 1 SAYISI : %d\n",sum);
}
void move(int dizi[7][7])
{
    int x,y;

    printf("OYNAMAK ISTEDIGINIZ SATIRI GIRINIZ : ");
    scanf("%d",&x);
    printf("OYNAMAK ISTEDIGINIZ SUTUNU GIRINIZ : ");
    scanf("%d",&y);

    if(dizi[x-1][y-1]==1 && dizi[x-1][y]==1 && dizi[x-1][y+1]==0) //Saga Oynat
    {
        dizi[x-1][y-1]=0;
        dizi[x-1][y]=0;
        dizi[x-1][y+1]=1;
    }
    else if(dizi[x-1][y-1]==1 && dizi[x-1][y-2]==1 && dizi[x-1][y-3]==0) //Sola Oynat
    {
        dizi[x-1][y-1]=0;
        dizi[x-1][y-2]=0;
        dizi[x-1][y-3]=1;
    }
    else if(dizi[x-1][y-1]==1 && dizi[x][y-1]==1 && dizi[x+1][y-1]==0) //Yukari Oynat
    {
        dizi[x-1][y-1]=0;
        dizi[x][y-1]=0;
        dizi[x+1][y-1]=1;
    }
    else if(dizi[x-1][y-1]==1 && dizi[x-2][y-1]==1 && dizi[x-3][y-1]==0) //Asaği Oynat
    {
        dizi[x-1][y-1]=0;
        dizi[x-2][y-1]=0;
        dizi[x-3][y-1]=1;
    }

}

int main()
{
int dizi[7][7]={{2,2,1,1,1,2,2},{2,2,1,1,1,2,2},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1,},{1,1,1,1,1,1,1},{2,2,1,1,1,2,2},{2,2,1,1,1,2,2}};
int sutunDizi[7]={1,2,3,4,5,6,7};
int islem,islem2,islem3;
system("color F1");
printf("\t\t\t\t\t*****HOSGELDINIZ*****");
printf("\n");
printf("\t\t\t  *****LUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ*****");
printf("\n\n\n");
printf("\t\t\t  1.HEMEN OYNA");
printf("\n\n");
printf("\t\t\t  2.SIKCA SORULAN SORULAR(SSS)");
printf("\n\n");
scanf("%d",&islem);

system("cls");

switch(islem){

case 1:
for(;;)
{

printf("\t\t***SOLO TEST OYUNUNA HOSGELDINIZ***");
printf("\n\n");

printf("           ");
for(int i=0;i<7;i++)
{

printf("    %d",sutunDizi[i]);
}
printf("\n\n\n");
  for(int i=0;i<7;i++)
{
    printf("\t");
    printf("%d   ",sutunDizi[i]);

for(int j=0;j<7;j++)
{
    if(dizi[i][j]!=2)
    {
    printf("   %d ",dizi[i][j]);
    system("COLOR F1");
    }
    else
    printf("     ");

}
printf("\n");
printf("\n\n");
}
sayac(dizi);
move(dizi);
system("cls");
//system("color F1");
}
break ;

case 2:
    system("color F1");
    printf("\t\t\t  *****LUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ*****");
    printf("\n\n\n");
    printf("\t\t\t  1.OYUNUN AMACI NEDIR?");
    printf("\n\n");
    printf("\t\t\t  2.NASIL OYNANIR?");
    printf("\n\n");
    scanf("%d",&islem2);
    system("cls");

    switch(islem2){

    case 1:

    printf("\t\t\t\t      *****OYUNUN AMACI NEDIR?*****");
    printf("\n\n");
    printf("\tOYUNUN AMACI,OYUN EKRANINDA MUMKUN OLAN EN AZ SAYIDA 1(BIR) I BIRAKABILMEKTIR.");
    printf("\n\n\n");
    printf("\tNASIL OYNANDIGINI GORMEK ICIN HEMEN 1 E BASINIZ...");
    scanf("%d",&islem3);
    system("cls");

    case 2:
    printf("\t\t\t\t\t*****NASIL OYNANIR?*****");
    printf("\n\n");
    printf("\tOYUN EKRANINDA 32 ADET 1(BIR) VE 1 ADET 0(SIFIR) BULUNMAKTADIR.\n\tOYUNDAKI HAREKET ALANINIZ YUKARI,ASAGI,SAGA VE SOLADIR.\n\tCAPRAZ HAREKET EDEMEZSINIZ!!!\n\tOYUNDAKI BIRLERI BIRER PIYON OLARAK DUSUNURSEK,PIYON DIGER BIR PIYONUN UZERINDEN ATLAR VE SONRAKI BOSLUGA GIRER.\n\tUZERINDEN ATLANILAN PIYON YOK OLUR VE BU SEKILDE UZERINDEN ATLAYABILECEGINIZ PIYON KALMAYINCA OYUN BITER.\n\tKALAN PIYON ADEDI OYUN SONUNDA GOSTERILIR...");
    printf("\n\n");
    printf("\t\t\t\t*****KALAN 1 SAYISINA GORE DERECENIZ*****");
    printf("\n\n");
    printf("\t1-DAHI   2-ZEKI   3-BASARILI   4-TECRUBESIZ   5-APTAL   6-BEYINSIZ");
    printf("\n\n");
    printf("\tOYUNU HEMEN OYNAMAK ICIN 1 E ONCEKI MENUYE DONMEK ICIN LUTFEN 2 YE BASINIZ...");
    scanf("%d",&islem3);
    system("cls");
    switch(islem3){

    case 1:

    for(;;)
{

printf("\t\t***SOLO TEST OYUNUNA HOSGELDINIZ***");
printf("\n\n");

printf("           ");
for(int i=0;i<7;i++)
{

printf("    %d",sutunDizi[i]);
}
printf("\n\n\n");
  for(int i=0;i<7;i++)
{
    printf("\t");
    printf("%d   ",sutunDizi[i]);

for(int j=0;j<7;j++)
{
    if(dizi[i][j]!=2)
    {
    printf("   %d ",dizi[i][j]);
    system("COLOR F1");
    }
    else
    printf("     ");

}
printf("\n");
printf("\n\n");
}
sayac(dizi);
move(dizi);
system("cls");
}


}

    switch(islem3){

    case 1:

    for(;;)
{

printf("\t\t***SOLO TEST OYUNUNA HOSGELDINIZ***");
printf("\n\n");

printf("           ");
for(int i=0;i<7;i++)
{

printf("    %d",sutunDizi[i]);
}
printf("\n\n\n");
  for(int i=0;i<7;i++)
{
    printf("\t");
    printf("%d   ",sutunDizi[i]);

for(int j=0;j<7;j++)
{
    if(dizi[i][j]!=2)
    {
    printf("   %d ",dizi[i][j]);
    system("COLOR F1");
    }
    else
    printf("     ");

}
printf("\n");
printf("\n\n");
}
sayac(dizi);
move(dizi);
system("cls");
}
break;

    case 2:
    printf("\t\t\t  *****LUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ*****");
    printf("\n\n\n");
    printf("\t\t\t  1.OYUNUN AMACI NEDIR?");
    printf("\n\n");
    printf("\t\t\t  2.NASIL OYNANIR?");
    printf("\n\n");
    scanf("%d",&islem2);
    system("cls");

    switch(islem2){

    case 1:

    printf("\t\t\t\t      *****OYUNUN AMACI NEDIR?*****");
    printf("\n\n");
    printf("\tOYUNUN AMACI,OYUN EKRANINDA MUMKUN OLAN EN AZ SAYIDA 1(BIR) I BIRAKABILMEKTIR.");
    printf("\n\n\n");
    printf("\tOYUNU HEMEN OYNAMAK ICIN 1 E ONCEKI MENUYE DONMEK ICIN 2 YE BASINIZ...");
    scanf("%d",&islem3);
    system("cls");
    switch(islem3){

    case 1:

    for(;;)
{

printf("\t\t***SOLO TEST OYUNUNA HOSGELDINIZ***");
printf("\n\n");

printf("           ");
for(int i=0;i<7;i++)
{

printf("    %d",sutunDizi[i]);
}
printf("\n\n\n");
  for(int i=0;i<7;i++)
{
    printf("\t");
    printf("%d   ",sutunDizi[i]);

for(int j=0;j<7;j++)
{
    if(dizi[i][j]!=2)
    {
    printf("   %d ",dizi[i][j]);
    system("COLOR F1");
    }
    else
    printf("     ");

}
printf("\n");
printf("\n\n");
}
sayac(dizi);
move(dizi);
system("cls");
}
break;


    }


    case 2:
    printf("\t\t\t\t\t*****NASIL OYNANIR?*****");
    printf("\n\n");
    printf("\tOYUN EKRANINDA 32 ADET 1(BIR) VE 1 ADET 0(SIFIR) BULUNMAKTADIR.\n\tOYUNDAKI HAREKET ALANINIZ YUKARI,ASAGI,SAGA VE SOLADIR.\n\tCAPRAZ HAREKET EDEMEZSINIZ!!!\n\tOYUNDAKI BIRLERI BIRER PIYON OLARAK DUSUNURSEK,PIYON DIGER BIR PIYONUN UZERINDEN ATLAR VE SONRAKI BOSLUGA GIRER.\n\tUZERINDEN ATLANILAN PIYON YOK OLUR VE BU SEKILDE UZERINDEN ATLAYABILECEGINIZ PIYON KALMAYINCA OYUN BITER.\n\tKALAN PIYON ADEDI OYUN SONUNDA GOSTERILIR...");
    printf("\n\n");
    printf("\t\t\t\t*****KALAN 1 SAYISINA GORE DERECENIZ*****");
    printf("\n\n");
    printf("\t1-DAHI   2-ZEKI   3-BASARILI   4-TECRUBESIZ   5-APTAL   6-BEYINSIZ");
    printf("\n\n");
    printf("\tOYUNU HEMEN OYNAMAK ICIN 1 E ONCEKI MENUYE DONMEK ICIN LUTFEN 2 YE BASINIZ...");
    scanf("%d",&islem3);
    system("cls");
    switch(islem3){

    case 1:

    for(;;)
{

printf("\t\t***SOLO TEST OYUNUNA HOSGELDINIZ***");
printf("\n\n");

printf("           ");
for(int i=0;i<7;i++)
{

printf("    %d",sutunDizi[i]);
}
printf("\n\n\n");
  for(int i=0;i<7;i++)
{
    printf("\t");
    printf("%d   ",sutunDizi[i]);

for(int j=0;j<7;j++)
{
    if(dizi[i][j]!=2)
    {
    printf("   %d ",dizi[i][j]);
    system("COLOR F1");
    }
    else
    printf("     ");

}
printf("\n");
printf("\n\n");
}
sayac(dizi);
move(dizi);
system("cls");
}


}
break;



}
}
}
}
}
