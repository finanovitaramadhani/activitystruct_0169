// strukturD.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
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
    cout << "Nomor mahasiswa :";
    getline (cin, mhs.nim);
    cout << "Nama Mahasiswa :";
    getline (cin, mhs.nama);



}

