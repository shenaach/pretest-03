
/*
Nama Program 	: Pretest 03
Nama 			: Sharashena Chairani
NPM 			: 140810180022
Kelas 			: B
Tanggal Buat 	: 13 Maret 2019
Deskripsi 		:
*/

#include <iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n);
void inputMhs(larikMhs& mhs, int n);
void cetakMhs(larikMhs mhs, int n);
void sortNama(larikMhs& mhs, int n);

int main(){

}

void banyakData (int& n){
    cout<<"Masukkan Data : ";cin>>n;
}

void inputMhs (larikMhs& mhs, int n){
    for (int i=0; i<n; i++){
        cout<<"Input Nama : "<<mhs.nama;
        cout<<"Input NPM : "<<mhs.npm;
        cout<<"Input IPK : "<<mhs.ipk;
    }
}
void sortingNama (larikMhs& mhs, int n){
    larikMhs temp;
    int i;
    for (int i=1; i<0; i++){
        temp = mhs[i];
    while (i>0 && mhs[i-1].nama>temp.nama){
        mhs[i]=mhs[i-1];
        i=i-1;
    }
    mhs[i]=temp;
    }
}

void sortingNpm (larikMhs& mhs, int n){
    larikMhs temp;
    int i;
    for (int i=1; i<0; i++){
        temp = mhs[i];
    while (i>0 && mhs[i-1].npm>temp.npm){
        mhs[i]=mhs[i-1];
        i=i-1;
    }
    mhs[i]=temp;
    }
}
void cetakMhs (larikMhs mhs, int n){
    for (int i=0; i<n; i++){

    }
}

