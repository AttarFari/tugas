#include <iostream>
using namespace std;

int main() {
    
    int pilihan, jumlahBeli;
    double harga, total, diskon, ppn, jumlahAkhir, bayar, kembalian, jumlahSetelahDiskon;
    string namaMenu;

    cout << "=================" << endl;
    cout << "Selamat Datang" << endl;
    cout << "Es Teler 88" << endl;
    cout << "Jl. Gatot Subroto No. 100" << endl;
    cout << "Medan" << endl;
    cout << "==================" << endl;

    cout << "Menu\n";
    cout << "-------\n";
    cout << "1. Es Teler (Rp. 27000)\n";
    cout << "2. Es Alpukat (Rp. 19000)\n";
    cout << "3. Es Nangka (Rp. 20000)\n";
    cout << "4. Es Teh Lemon (Rp. 13000)\n";
    cout << "5. Soda Gembira (Rp. 14000)\n";

    cout << "Pilihan yang dibeli : ";
    cin >> pilihan;
    cout << "Jumlah Beli : ";
    cin >> jumlahBeli;

    switch (pilihan) {
        case 1:
            namaMenu = "Es Teler";
            harga = 27000;
            break;
        case 2:
            namaMenu = "Es Alpukat";
            harga = 19000;
            break;
        case 3:
            namaMenu = "Es Nangka";
            harga = 20000;
            break;
        case 4:
            namaMenu = "Es Teh Lemon";
            harga = 13000;
            break;
        case 5:
            namaMenu = "Soda Gembira";
            harga = 14000;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }


    total = harga * jumlahBeli;

    if (jumlahBeli >= 5) {
        diskon = 0.20 * total; 
    } else if (jumlahBeli >= 3) {
        diskon = 0.10 * total; 
    } else {
        diskon = 0.0; 
    }

    jumlahSetelahDiskon = total - diskon;

    ppn = 0.10 * jumlahSetelahDiskon;
    jumlahAkhir = jumlahSetelahDiskon + ppn;

    cout << "=================\n";
    cout << "Es Teler 88\n";
    cout << "Jl. Gatot Subroto No. 100\n";
    cout << "Medan\n";
    cout << "==================\n";
    cout << "Pilihan yang dibeli : " << namaMenu << endl;
    cout << "Jumlah Beli : " << jumlahBeli << endl;
    cout << "Harga : Rp. " << harga * jumlahBeli << endl;
    cout << "Diskon : Rp. "  << diskon << endl;
    cout << "Jumlah Setelah Diskon : Rp. "  << jumlahSetelahDiskon << endl;
    cout << "PPN (10%) : Rp. "  << ppn << endl;
    cout << "Total : Rp. "  << jumlahAkhir << endl;
    cout << "Bayar : Rp. ";
    cin >> bayar;

    kembalian = bayar - jumlahAkhir;

    cout << "Kembalian : Rp. " << kembalian << endl;

    return 0;
}

