{
int brojDana=0;
cin >> brojDana;
int zadaciDan[brojDana];
zadaciDan[brojDana]= {0};
for(int i = 0; i < brojDana;i++){
	cin>>zadaciDan[i];
}

int ponedeljak=0;
int utorak=0;
int sreda=0;
int cetvrtak=0;
int petak=0;
int subota=0;
int nedelja=0;



if(brojDana >= 7){
	for(int i = 0;i < brojDana;i=i + 7){
		ponedeljak=zadaciDan[i] + ponedeljak;
	}
	for(int i = 1;i < brojDana;i=i + 7){
		utorak=zadaciDan[i] + utorak;
	}	
	for(int i = 2;i < brojDana;i=i + 7){
		sreda=zadaciDan[i] + sreda;
	}	
	for(int i = 3;i < brojDana;i=i + 7){
		cetvrtak=zadaciDan[i] + cetvrtak;
	}	
	for(int i = 4;i < brojDana;i=i + 7){
		petak=zadaciDan[i] + petak;
	}	
	for(int i = 5;i < brojDana;i=i + 7){
		subota=zadaciDan[i] + subota;
	}	
	for(int i = 6;i < brojDana;i=i + 7){
		nedelja=zadaciDan[i] + nedelja;
	}	
}

if((ponedeljak > utorak )&& (ponedeljak > sreda )&& (ponedeljak > cetvrtak)&& (ponedeljak > petak)&& (ponedeljak > subota)&&(ponedeljak > nedelja)){
	cout<<"ponedeljak";
}
if((utorak > ponedeljak )&& (utorak > sreda )&& (utorak > cetvrtak)&& (utorak > petak)&& (utorak > subota)&&(utorak > nedelja)){
	cout<<"utorak";
}
if((sreda > ponedeljak )&& (sreda > utorak )&& (sreda > cetvrtak)&& (sreda > petak)&& (sreda > subota)&&(sreda > nedelja)){
	cout<<"sreda";
}
if((cetvrtak > ponedeljak )&& (cetvrtak > utorak )&& (cetvrtak > sreda)&& (cetvrtak > petak)&& (cetvrtak > subota)&&(cetvrtak > nedelja)){
	cout<<"cetvrtak";
}
if((petak > ponedeljak )&& (petak > utorak )&& (petak > cetvrtak)&& (petak > sreda)&& (petak > subota)&&(petak > nedelja)){
	cout<<"petak";
}
if((subota > ponedeljak )&& (subota > utorak )&& (subota > cetvrtak)&& (subota > petak)&& (subota > sreda)&&(subota > nedelja)){
	cout<<"subota";
}
if((nedelja > ponedeljak )&& (nedelja > utorak )&& (nedelja > cetvrtak)&& (nedelja > petak)&& (nedelja > subota)&&(nedelja > sreda)){
	cout<<"nedelja";
}
}
