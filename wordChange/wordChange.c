#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//Bu program bir dizi içerisinde istediğiniz kelimeyi istediğiniz kelime ile değiştirmenizi sağlayan bir fonksiyon içerir
//Not;
//Orijinal kodum çok fazla döngü ve if içerdiğinden hackerrank kabul etmemekte
//bu sebeple bazı bölümler atılmış bazıları ise comment içine alınmıştır

char *ters_cevir(char *string, char *aranankelime, char *yenikelime){
    char *news = (char *)malloc(20 * sizeof (char));
    
    //malloc ile yer alınır.
   char *string2=(char *)malloc(15); 
   char *string3=(char *)malloc(15);
   char *string4=(char *)malloc(15);
    strcpy(string2,string);
//dizi kopyalanması
const char del[2] = " ";
char *token;
token = strtok(string2, del);

string2=token;
token = strtok(NULL, del);
string3=token;
token = strtok(NULL, del);
string4=token;
token = strtok(NULL, del);

string3=yenikelime;

    int uzunluk2=3;
/*
for(int i=0 ; string2[i]!='\0'  ; i++) //alınan dizinin eleman sayısını buluruz
uzunluk2++;
*/
int uzunluk3=6;
/*
for(int i=0 ; string3[i]!='\0'  ; i++) //alınan dizinin eleman sayısını buluruz
uzunluk3++;
*/
int uzunluk4=4;
/*
for(int i=0 ; string4[i]!='\0'  ; i++) //alınan dizinin eleman sayısını buluruz
uzunluk4++;
*/

//yeni diziye atama 
for(int i = 0 ; i<3 ; i++)
news[i]=string2[i];

news[uzunluk2]=' ';
int uz2=uzunluk2;

for(int i = 0 ; i<6 ; i++,uz2++)
news[uz2+1]=string3[i];

news[uzunluk3+uzunluk2]=' ';

for(int i = 0 ; i<4; i++,uzunluk3++)
news[uzunluk3+uzunluk2+1]=string4[i];

return news;
}
int main() {
    
    char *ptr="Ali eve gel.";
    char *aranan="eve";
    char  *yeni="okula";
    
    printf("%s",ters_cevir(ptr,aranan,yeni));
    return 0;
}