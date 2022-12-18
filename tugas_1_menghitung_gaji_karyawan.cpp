#include <iostream>

using namespace std;

int gajiPokok(int);
int gajiLembur(int);
int uangMakan(int);
int uangTransport(int);

int main(){
    int jamKerja = 0,
    nip,
    printGaji = 0,
    printMakan = 0,
    printTransport = 0,
    printLembur = 0;
    string nama;

    cout << "\nSelamat datang di sistem perhitungan gaji PT. XYZ" << endl;
    cout << "==================================================" << endl;

    cout << "Masukan nip: ";
    cin >> nip;
    cout << "Masukan nama: ";
    cin >> nama;
    cout << "Masukan jumlah jam kerja: ";
    cin >> jamKerja;

    printGaji = gajiPokok(jamKerja);

    if(jamKerja > 8){
      printLembur = gajiLembur(jamKerja);
    }if(jamKerja >= 9){
      printMakan = uangMakan(jamKerja);
    }if(jamKerja >= 10){
      printTransport = uangTransport(jamKerja);
    }

    cout << "\nPegawai dengan identitas : " << endl;
    cout << "==================================================" << endl;
    cout << "NIP                : " << nip << endl;
    cout << "NAMA               : " << nama << endl;
    cout << "JUMLAH JAM KERJA   : " << jamKerja << endl;
    cout << "==================================================" << endl;
    cout << "Gaji Pokok         : Rp. " << printGaji << endl;
    cout << "Uang Lembur        : Rp. " << printLembur << endl;
    cout << "Uang Makan         : Rp. " << printMakan << endl;
    cout << "Uang Transport     : Rp. " << printTransport << endl;

    return 0;    
}

int gajiPokok(int jamKerja){
  int hasil = jamKerja * 7500;
  return hasil;
}

int gajiLembur(int jamKerja){
  int hasil = (jamKerja - 8) * 11250;
  return hasil;
}

int uangMakan(int jamKerja){
  int hasil = jamKerja * 10000;
  return hasil;
}

int uangTransport(int jamKerja){
  int hasil = jamKerja * 13000;
  return hasil;
}