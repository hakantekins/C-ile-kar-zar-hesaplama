#include <stdio.h>
#include <math.h>
//aX^2+bX+c denkleminin köklerini bulma
int main()
{   int a,b,c;
    float diskriminant, imajiner, kok1, kok2;
    printf("aX^2+bX+c denklemindeki a sayisini giriniz:");
    scanf("%d",&a);
    printf("aX^2+bX+c denklemindeki b sayisini giriniz:");
    scanf("%d",&b);
    printf("aX^2+bX+c denklemindeki c sayisini giriniz:");
    scanf("%d",&c);
    diskriminant = (b*b) - (4*a*c);

    if(diskriminant>0){
        kok1 = -b + sqrt(diskriminant);
        kok2 = -b - sqrt(diskriminant);
        printf("iki adet gercel koku vardir \n birinci kok:%.2f \n ikinci kok:%.2f.",kok1,kok2);
    }else if(diskriminant==0){
        kok1 = kok2 = -b / (2*a);
        printf("iki adet gercel koku vardir bu gercel kokler esittir ve degeri:%.2f.",kok1);
    }else{
        kok1 = kok2 = -b / (2*a);
        imajiner = sqrt(-diskriminant) / (2*a);
    printf("iki adet karmasik kok bulunmaktadir:%.2f + i%.2f ve %.2f -i%.2f.",kok1,imajiner,kok2,imajiner);
    }
    return 0;
}
