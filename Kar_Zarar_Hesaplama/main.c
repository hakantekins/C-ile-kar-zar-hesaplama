#include <stdio.h>
int main()
{
   float  maliyet, satis_bedeli, kar_zarar, toplam_kar_orani, toplam_zarar_orani;
   printf("maliyet giriniz:");
   scanf("%f", &maliyet);
   printf("satis_bedeli giriniz:");
   scanf("%f", &satis_bedeli);
   kar_zarar = satis_bedeli - maliyet;
   if(kar_zarar > 0){
        toplam_kar_orani = (maliyet*-100/satis_bedeli)+100;
        printf("toplam kariniz %.2f oraninda ve %.1f TL tutarindadir.",toplam_kar_orani, kar_zarar);
   }else if(kar_zarar == 0){
        printf("kar veya zarar etmediniz.");
   }else{
        toplam_zarar_orani = (satis_bedeli*-100/maliyet)+100;
        printf("toplam zarariniz %.2f oraninda ve %.1f TL tutarindadir.",toplam_zarar_orani, -kar_zarar);
   }
return 0;
}
