#include "functions.hpp"

void loading()
{
    system("cls");
    char a = 177, b = 219;
    std::cout << "LOADING\t";
    for (int i = 0; i < 23; i++)
        std::cout << a;
        
    std::cout << "\r";
    std::cout << "\t";
    
    for (int i = 0; i < 23; i++) {
        std::cout << b;
        Sleep(50);
    }
    system("cls");
}

void tampilan_awal() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t TOKO KURMA BAROKAH AL-SWAGGIYAH" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Kurma\n1. Kurma A\n2. Kurma B\n3. Kurma C" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
    std::cout << "Daftar Menu\n1. Edit Data Kurma\n2. Cek Stock Kurma\n3. Penjualan Kurma\n4. EXIT" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void tampilan_edit() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Edit Data Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Edit" << std::endl;
    std::cout << "1. Cari Kurma\n2. Tambah Data Kurma\n3. Hapus Data Kurma\n4. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void cek_stock() {
    int opsi;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Cek Stock Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Stock" << std::endl;
    std::cout << "1. Kurma A\n2. Kurma B\n3. Kurma C\n4. Kembali" << std::endl;
    std::cout << "Masukkan pilihan Kurma : "; std::cin >> opsi;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
        switch (opsi)
        {
        case 1:
            edit_kurma();
            break;
        case 2:
            edit_kurma();
            break;
        case 3:
            edit_kurma();
            break;
        case 4:
            std::cout << "Bye.." << "\n\n";
            break;
        default:
            std::cout << "\nInput Salah!\n\n";
            break;
        }
}

void tampilan_edit_stock() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Edit Stock Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Edit" << std::endl;
    std::cout << "1. Tambah Stock\n2. Kurang Stock\n3. Undo\n4. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void tampilan_penjualan() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Penjualan Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Saran Penjualan Kurma" << std::endl;
    std::cout << "Kurma C Stock ... Kg Kualitas ..." << std::endl;
    std::cout << "Kurma A Stock ... Kg Kualitas ..." << std::endl;
    std::cout << "Kurma A Stock ... Kg Kualitas ..." << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
    std::cout << "1. Kembali" << std::endl;
}