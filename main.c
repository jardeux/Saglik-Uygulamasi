#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void BedenKutle()
{

	
	int tablo[2][4]={0,20,25,30,
				 20,25,30,40};
	int i,j;
	float boy,kilo,bedenkutleindeksi;
	printf("Lütfen ilk önce boyunu (metre cinsinden arasýnda virgül olacak þekilde.) daha sonra kilonu (kg) gir.\n");
	scanf("%f", &boy); 
	scanf("%f", &kilo);
	bedenkutleindeksi=kilo/(boy*boy);
	printf("            Zayýf Aralýk        Normal Aralýk         Kilolu Aralýk         Obez Aralýk\n");
	for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	printf("%20d",tablo[i][j]);
	printf("\n\n\n\n");
}
	
	
	
	printf("Beden kütle indeksin = %f\n\n\n\n", bedenkutleindeksi);
	if (bedenkutleindeksi<20)
	printf("Boyuna göre uygun aðýrlýkta olmadýðýný, zayýf olduðunu gösterir. Zayýflýk, bazý hastalýklar için risk oluþturan ve istenmeyen bir durumdur. Boyunuza uygun aðýrlýða eriþmeniz için yeterli ve dengeli beslenmeli, beslenme alýþkanlýklarýnýzý geliþtirmeye özen göstermelisiniz.\n\n\n\n");
else if (bedenkutleindeksi>=20 && bedenkutleindeksi<25)
	printf("Boyunuza göre uygun aðýrlýkta olduðunuzu gösterir. Yeterli ve dengeli beslenerek ve düzenli fiziksel aktivite yaparak bu aðýrlýðýnýzý korumaya özen gösteriniz.\n\n\n\n");
else if (bedenkutleindeksi>=25 && bedenkutleindeksi<30)
	printf("Boyunuza göre vücut aðýrlýðýnýzýn fazla olduðunu gösterir. Fazla kilolu olma durumu gerekli önlemler alýnmadýðý takdirde pek çok hastalýk için risk faktörü olan obeziteye (þiþmanlýk) yol açar.\n\n\n\n");
else 
	printf("Boyunuza göre vücut aðýrlýðýnýzýn fazla olduðunu bir baþka deyiþle þiþman olduðunuzun bir göstergesidir. Þiþmanlýk, kalp-damar hastalýklarý, diyabet, hipertansiyon v.b. kronik hastalýklar için risk faktörüdür. Bir saðlýk kuruluþuna baþvurarak hekim / diyetisyen kontrolünde zayýflayarak normal aðýrlýða inmeniz saðlýðýnýz açýsýndan çok önemlidir. Lütfen, saðlýk kuruluþuna baþvurunuz.\n\n\n\n");




}
void KaloriHesabi()
{
int alinankalori,saglikkalori;
while(1)
{	
	printf("Lütfen bugün aldýðýnýz kalorileri giriniz.\n Saðlik sonuçlarýnýzý görmek için (0) tuþlayýnýz.\nTekrar giriþe dönmek için (1) tuþlayýnýz\n");
	scanf("%d",&alinankalori);
	saglikkalori+=alinankalori;	
if (alinankalori==0)
{
	printf("Bugün aldýðýnýz kalori %d dir\n ",saglikkalori);
if (saglikkalori<=2000)
	printf("Bugün aldýðýnýz kalori çok düþük.\n");

else if(saglikkalori>2000 && saglikkalori<=3000)
	printf("Bugün aldýðýnýz kalori gayet iyi harikasýnýz!\n");
else	
	printf("Bugün aldýðýnýz kalori çok yüksek dikkatlý olun!\n");

}
else if(alinankalori==1)
break;
}	
}	
void KarsilamaMetni()
{
	printf("Yemek ve saðlýk programýna hoþ geldin!. Lütfen adýný gir.\n");
}


int main() 
{
setlocale(LC_ALL, "Turkish");

float kaloriler[11]={359.12,254,196,275,309,285,350,230,35,40,10};
float karbonhidratlar[11]={76,14,8,56,22.5,114,120,60,10,4.8,20};
float sekerler[11]={1.5,3.7,1.3,2,1,20,15,12,9,0.005,2}; 
int anayemek,tatli,icecek,ilksecim,kalorihesaplama,alinankalori,saglikkalori;		
float kaloritoplam=0, sekertoplam=0, karbonhidrattoplam=0, anayemekkalori=0, tatlikalori=0, icecekkalori=0, icecekseker=0, anayemekseker=0, anayemekkarbonhidrat=0, tatliseker=0, tatlikarbonhidrat=0,icecekkarbonhidrat=0;
char ad[50];
FILE *dosya;
dosya=fopen("kayitdefteri.txt", "a");
KarsilamaMetni();
gets(ad);
fprintf(dosya, "%s", ad);


while(1)
{
printf("Merhaba %s\n Lütfen genel yemeklerin kalorilerini görmek için (0)\n Günlük kalori hesabý için (1)\n Beden kütle indeksi hesabý yapmak için (2)\n Programdan çýkmak için (3) tuþla\n", ad);
scanf("%d",&ilksecim);
if (ilksecim==0)
{
	printf(" Pilav = 1\n Mantý = 2\n Köfte = 3\n Pide = 4\n Döner = 5\n Ana yemeðe bakmayacaðým. = 6\n");
	scanf("%d", &anayemek);	
	printf("Lütfen tatlýnýzý seçin.\n");
	printf(" Höþmerim = 7\n Künefe = 8\n Sütlaç = 9\n Tatlýya bakmayacaðým. = 10\n");
	scanf("%d", &tatli);
	printf("Lütfen içeceðinizi seçin.\n");
	printf(" Cola = 11\n Ayran = 12\n Þalgam = 13\n Ýçeceðe bakmayacagým. = 14\n");
	scanf("%d", &icecek);	
if (anayemek==1)
{
	printf("Ana Yemeði Pilav Seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[0], karbonhidratlar[0], sekerler[0]);
	anayemekkalori+=kaloriler[0];
	anayemekkarbonhidrat+=karbonhidratlar[0];
	anayemekseker+=sekerler[0];
}
else if(anayemek==2)
{
	printf("Ana Yemeði Manti Seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[1], karbonhidratlar[1], sekerler[1]);
	anayemekkalori+=kaloriler[1];
	anayemekkarbonhidrat+=karbonhidratlar[1];
	anayemekseker+=sekerler[1];
}
else if (anayemek==3)
{
	printf("Ana Yemeði Kofte Seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[2], karbonhidratlar[2], sekerler[2]);
	anayemekkalori+=kaloriler[2];
	anayemekkarbonhidrat+=karbonhidratlar[2];
	anayemekseker+=sekerler[2];
}
else if (anayemek==4)
{
	printf("Ana Yemeði Pide Seçtin.\n Kalori = %.2f\n Karbonhidrat = %f\n Þeker = %f\n", kaloriler[3], karbonhidratlar[3], sekerler[3]);
	anayemekkalori+=kaloriler[3];
	anayemekkarbonhidrat+=karbonhidratlar[3];
	anayemekseker+=sekerler[3];
}
else if (anayemek==5)
{
	printf("Ana Yemeði Doner Seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[4], karbonhidratlar[4], sekerler[4]);	
	anayemekkalori+=kaloriler[4];
	anayemekkarbonhidrat+=karbonhidratlar[4];
	anayemekseker+=sekerler[4];
}

else if (anayemek==6)
	printf("Ana yemek seçilmedi\n");
if (tatli==7)
{	
	printf("Tatlýyý hoþmerim seçtin.\n Kalori %.2f\n Karbonhidrat = %.2f\n Þeker = %f\n", kaloriler[5], karbonhidratlar[5], sekerler[5]);
	tatlikalori+=kaloriler[5];
	tatlikarbonhidrat+=karbonhidratlar[5];
	tatliseker+=sekerler[5];
}
else if (tatli==8)
{
	printf("Tatlýyý künefe seçtin.\n Kalori %.2f\n Karbonhidrat = %.2f\n Þeker = %f\n", kaloriler[6], karbonhidratlar[6], sekerler[6]);
	tatlikalori+=kaloriler[6];
	tatlikarbonhidrat+=karbonhidratlar[6];
	tatliseker+=sekerler[6];
}
else if (tatli==9)
{
		
	printf("Tatlýyý sütlaç seçtin.\n Kalori %.2f\n Karbonhidrat = %.2f\n Þeker = %f\n", kaloriler[7], karbonhidratlar[7], sekerler[7]);
	tatlikalori+=kaloriler[7];
	tatlikarbonhidrat+=karbonhidratlar[7];
	tatliseker+=sekerler[7];
}
else if(tatli==10)

{
	printf("Tatlý seçilmedi\n");
}
if (icecek==11)
	
{	
	printf("Ýçeceði cola seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[8], karbonhidratlar[8], sekerler[8]);
	icecekkalori+=kaloriler[8];
	icecekkarbonhidrat+=karbonhidratlar[8];
	icecekseker+=sekerler[8];
}
else if (icecek==12)
{
	printf("Ýçeceði Ayran seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[9], karbonhidratlar[9], sekerler[9]);
	icecekkalori+=kaloriler[9];
	icecekkarbonhidrat+=karbonhidratlar[9];
	icecekseker+=sekerler[9];
}
else if (icecek==13)
{
	printf("Ýçeceði Þalgam seçtin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n Þeker = %.2f\n", kaloriler[10], karbonhidratlar[10], sekerler[10]);
	icecekkalori+=kaloriler[10];
	icecekkarbonhidrat+=karbonhidratlar[10];
	icecekseker+=sekerler[10];
}
else if(icecek==14)
	
	printf("Ýçecek seçilmedi.\n");
	
	kaloritoplam=anayemekkalori+tatlikalori+icecekkalori;
	karbonhidrattoplam=anayemekkarbonhidrat+tatlikarbonhidrat+icecekkarbonhidrat;
	sekertoplam=anayemekseker+tatliseker+icecekseker;
	printf("Toplam aldýgýnýz kalori miktarý = %.2f\n",kaloritoplam);
	fprintf(dosya, " Alýnan toplam kalori = %.2f", kaloritoplam);

	printf("Toplam aldýgýnýz þeker miktarý %.2f\n", sekertoplam);
	fprintf(dosya, " Alýnan toplam þeker miktarý = %.2f", sekertoplam); 
	
	printf("Toplam aldýgýnýz karbonhidrat miktarý %.2f\n", karbonhidrattoplam);
	fprintf(dosya, " Alýnan toplam karbonhhidrat miktarý = %.2f", karbonhidrattoplam);
}
else if(ilksecim==1)

KaloriHesabi();

else if(ilksecim==2)

BedenKutle();

else if(ilksecim==3)
break;			
}
	
	return 0;
}
