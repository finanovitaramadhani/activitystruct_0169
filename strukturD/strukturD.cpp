// strukturD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main(){
    mahasiswa mhs;
    cout << "nomor Mahasiswa :";
    cin >> mhs.nim;
    cout << " Nama Mahasiswa :";
    cin >> mhs.nama;
    cout << "alamat mahasiswa :";
    cin >> mhs.alamat;
    cout << "Umur mahasiswa :";
    cin >> mhs.umur;
}

