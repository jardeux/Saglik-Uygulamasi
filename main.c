#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void BedenKutle()
{

	
	int tablo[2][4]={0,20,25,30,
				 20,25,30,40};
	int i,j;
	float boy,kilo,bedenkutleindeksi;
	printf("L�tfen ilk �nce boyunu (metre cinsinden aras�nda virg�l olacak �ekilde.) daha sonra kilonu (kg) gir.\n");
	scanf("%f", &boy); 
	scanf("%f", &kilo);
	bedenkutleindeksi=kilo/(boy*boy);
	printf("            Zay�f Aral�k        Normal Aral�k         Kilolu Aral�k         Obez Aral�k\n");
	for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	printf("%20d",tablo[i][j]);
	printf("\n\n\n\n");
}
	
	
	
	printf("Beden k�tle indeksin = %f\n\n\n\n", bedenkutleindeksi);
	if (bedenkutleindeksi<20)
	printf("Boyuna g�re uygun a��rl�kta olmad���n�, zay�f oldu�unu g�sterir. Zay�fl�k, baz� hastal�klar i�in risk olu�turan ve istenmeyen bir durumdur. Boyunuza uygun a��rl��a eri�meniz i�in yeterli ve dengeli beslenmeli, beslenme al��kanl�klar�n�z� geli�tirmeye �zen g�stermelisiniz.\n\n\n\n");
else if (bedenkutleindeksi>=20 && bedenkutleindeksi<25)
	printf("Boyunuza g�re uygun a��rl�kta oldu�unuzu g�sterir. Yeterli ve dengeli beslenerek ve d�zenli fiziksel aktivite yaparak bu a��rl���n�z� korumaya �zen g�steriniz.\n\n\n\n");
else if (bedenkutleindeksi>=25 && bedenkutleindeksi<30)
	printf("Boyunuza g�re v�cut a��rl���n�z�n fazla oldu�unu g�sterir. Fazla kilolu olma durumu gerekli �nlemler al�nmad��� takdirde pek �ok hastal�k i�in risk fakt�r� olan obeziteye (�i�manl�k) yol a�ar.\n\n\n\n");
else 
	printf("Boyunuza g�re v�cut a��rl���n�z�n fazla oldu�unu bir ba�ka deyi�le �i�man oldu�unuzun bir g�stergesidir. �i�manl�k, kalp-damar hastal�klar�, diyabet, hipertansiyon v.b. kronik hastal�klar i�in risk fakt�r�d�r. Bir sa�l�k kurulu�una ba�vurarak hekim / diyetisyen kontrol�nde zay�flayarak normal a��rl��a inmeniz sa�l���n�z a��s�ndan �ok �nemlidir. L�tfen, sa�l�k kurulu�una ba�vurunuz.\n\n\n\n");




}
void KaloriHesabi()
{
int alinankalori,saglikkalori;
while(1)
{	
	printf("L�tfen bug�n ald���n�z kalorileri giriniz.\n Sa�lik sonu�lar�n�z� g�rmek i�in (0) tu�lay�n�z.\nTekrar giri�e d�nmek i�in (1) tu�lay�n�z\n");
	scanf("%d",&alinankalori);
	saglikkalori+=alinankalori;	
if (alinankalori==0)
{
	printf("Bug�n ald���n�z kalori %d dir\n ",saglikkalori);
if (saglikkalori<=2000)
	printf("Bug�n ald���n�z kalori �ok d���k.\n");

else if(saglikkalori>2000 && saglikkalori<=3000)
	printf("Bug�n ald���n�z kalori gayet iyi harikas�n�z!\n");
else	
	printf("Bug�n ald���n�z kalori �ok y�ksek dikkatl� olun!\n");

}
else if(alinankalori==1)
break;
}	
}	
void KarsilamaMetni()
{
	printf("Yemek ve sa�l�k program�na ho� geldin!. L�tfen ad�n� gir.\n");
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
printf("Merhaba %s\n L�tfen genel yemeklerin kalorilerini g�rmek i�in (0)\n G�nl�k kalori hesab� i�in (1)\n Beden k�tle indeksi hesab� yapmak i�in (2)\n Programdan ��kmak i�in (3) tu�la\n", ad);
scanf("%d",&ilksecim);
if (ilksecim==0)
{
	printf(" Pilav = 1\n Mant� = 2\n K�fte = 3\n Pide = 4\n D�ner = 5\n Ana yeme�e bakmayaca��m. = 6\n");
	scanf("%d", &anayemek);	
	printf("L�tfen tatl�n�z� se�in.\n");
	printf(" H��merim = 7\n K�nefe = 8\n S�tla� = 9\n Tatl�ya bakmayaca��m. = 10\n");
	scanf("%d", &tatli);
	printf("L�tfen i�ece�inizi se�in.\n");
	printf(" Cola = 11\n Ayran = 12\n �algam = 13\n ��ece�e bakmayacag�m. = 14\n");
	scanf("%d", &icecek);	
if (anayemek==1)
{
	printf("Ana Yeme�i Pilav Se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[0], karbonhidratlar[0], sekerler[0]);
	anayemekkalori+=kaloriler[0];
	anayemekkarbonhidrat+=karbonhidratlar[0];
	anayemekseker+=sekerler[0];
}
else if(anayemek==2)
{
	printf("Ana Yeme�i Manti Se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[1], karbonhidratlar[1], sekerler[1]);
	anayemekkalori+=kaloriler[1];
	anayemekkarbonhidrat+=karbonhidratlar[1];
	anayemekseker+=sekerler[1];
}
else if (anayemek==3)
{
	printf("Ana Yeme�i Kofte Se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[2], karbonhidratlar[2], sekerler[2]);
	anayemekkalori+=kaloriler[2];
	anayemekkarbonhidrat+=karbonhidratlar[2];
	anayemekseker+=sekerler[2];
}
else if (anayemek==4)
{
	printf("Ana Yeme�i Pide Se�tin.\n Kalori = %.2f\n Karbonhidrat = %f\n �eker = %f\n", kaloriler[3], karbonhidratlar[3], sekerler[3]);
	anayemekkalori+=kaloriler[3];
	anayemekkarbonhidrat+=karbonhidratlar[3];
	anayemekseker+=sekerler[3];
}
else if (anayemek==5)
{
	printf("Ana Yeme�i Doner Se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[4], karbonhidratlar[4], sekerler[4]);	
	anayemekkalori+=kaloriler[4];
	anayemekkarbonhidrat+=karbonhidratlar[4];
	anayemekseker+=sekerler[4];
}

else if (anayemek==6)
	printf("Ana yemek se�ilmedi\n");
if (tatli==7)
{	
	printf("Tatl�y� ho�merim se�tin.\n Kalori %.2f\n Karbonhidrat = %.2f\n �eker = %f\n", kaloriler[5], karbonhidratlar[5], sekerler[5]);
	tatlikalori+=kaloriler[5];
	tatlikarbonhidrat+=karbonhidratlar[5];
	tatliseker+=sekerler[5];
}
else if (tatli==8)
{
	printf("Tatl�y� k�nefe se�tin.\n Kalori %.2f\n Karbonhidrat = %.2f\n �eker = %f\n", kaloriler[6], karbonhidratlar[6], sekerler[6]);
	tatlikalori+=kaloriler[6];
	tatlikarbonhidrat+=karbonhidratlar[6];
	tatliseker+=sekerler[6];
}
else if (tatli==9)
{
		
	printf("Tatl�y� s�tla� se�tin.\n Kalori %.2f\n Karbonhidrat = %.2f\n �eker = %f\n", kaloriler[7], karbonhidratlar[7], sekerler[7]);
	tatlikalori+=kaloriler[7];
	tatlikarbonhidrat+=karbonhidratlar[7];
	tatliseker+=sekerler[7];
}
else if(tatli==10)

{
	printf("Tatl� se�ilmedi\n");
}
if (icecek==11)
	
{	
	printf("��ece�i cola se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[8], karbonhidratlar[8], sekerler[8]);
	icecekkalori+=kaloriler[8];
	icecekkarbonhidrat+=karbonhidratlar[8];
	icecekseker+=sekerler[8];
}
else if (icecek==12)
{
	printf("��ece�i Ayran se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[9], karbonhidratlar[9], sekerler[9]);
	icecekkalori+=kaloriler[9];
	icecekkarbonhidrat+=karbonhidratlar[9];
	icecekseker+=sekerler[9];
}
else if (icecek==13)
{
	printf("��ece�i �algam se�tin.\n Kalori = %.2f\n Karbonhidrat = %.2f\n �eker = %.2f\n", kaloriler[10], karbonhidratlar[10], sekerler[10]);
	icecekkalori+=kaloriler[10];
	icecekkarbonhidrat+=karbonhidratlar[10];
	icecekseker+=sekerler[10];
}
else if(icecek==14)
	
	printf("��ecek se�ilmedi.\n");
	
	kaloritoplam=anayemekkalori+tatlikalori+icecekkalori;
	karbonhidrattoplam=anayemekkarbonhidrat+tatlikarbonhidrat+icecekkarbonhidrat;
	sekertoplam=anayemekseker+tatliseker+icecekseker;
	printf("Toplam ald�g�n�z kalori miktar� = %.2f\n",kaloritoplam);
	fprintf(dosya, " Al�nan toplam kalori = %.2f", kaloritoplam);

	printf("Toplam ald�g�n�z �eker miktar� %.2f\n", sekertoplam);
	fprintf(dosya, " Al�nan toplam �eker miktar� = %.2f", sekertoplam); 
	
	printf("Toplam ald�g�n�z karbonhidrat miktar� %.2f\n", karbonhidrattoplam);
	fprintf(dosya, " Al�nan toplam karbonhhidrat miktar� = %.2f", karbonhidrattoplam);
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
