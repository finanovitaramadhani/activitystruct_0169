// strukturD.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};


int main(){
    mahasiswa mhs;
    cout << "nomor Mahasiswa :";
    cin >> mhs.nim;
    cout << " Nama Mahasiswa :";
    cin >> mhs.nama;

    cout << "alamat mahasiswa :" << endl;
    cout << "\t nama Desa :";
    cin >> mhs.alamat.desa;
    cout << "\t Nama kota :";
    cin >> mhs.alamat.kota;

    cout << "Umur mahasiswa :";
    cin >> mhs.umur;
}


