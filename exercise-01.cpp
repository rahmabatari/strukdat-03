/*
Author	: Rahma Batari
NPM		: 140810180051
Deskripsi : Exercise-01
Tahun	: 2019
*/

#include <iostream>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
} segiempat;

void input (segiempat *s){
	cout<<"Input Panjang : "; cin>>s->panjang;
	cout<<"Input Lebar : "; cin>>s->lebar;
}

float keliling(segiempat s){
	return((2 * s.panjang) + (2 * s.lebar));
}

float luas(segiempat s){
	return(s.panjang * s.lebar);
}

float diagonal (segiempat s){
	return(sqrt(s.panjang^2 + s.lebar^2));
}

void print (segiempat s){
	cout<<"Keliling: " << keliling(s) <<endl;
	cout<<"Luas	   : " << luas(s) <<endl;
	cout<<"Diagonal: " << diagonal(s)<<endl;
}

int main(){
	segiempat* sg;
	sg = new segiempat;
	input (sg);
	print(*sg);
}
