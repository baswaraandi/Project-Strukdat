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
    std::cout << "Daftar Kurma\n1. Kurma Ajwa\n2. Kurma Sukari Al-Qassim\n3. Kurma Sukari Deluxe" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
    std::cout << "Daftar Menu\n1. Edit Data Kurma\n2. Cek Stock Kurma\n3. Penjualan Kurma\n4. Exit" << std::endl;
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

void tampilan_cek_stock() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t   Stock Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Stock" << std::endl;
    std::cout << "1. Kurma Ajwa\n2. Kurma Sukari Al-Qassim\n3. Kurma Sukari Deluxe\n4. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void tampilan_edit_stock1 (Stack1& stock_kurma) {
    int banyak, opsi, cek_stock;
    do {
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
        std::cout << "\t\t Edit Stock Kurma" << std::endl;
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
        std::cout << "Stok Kurma : " << peek1(stock_kurma) << " Kg" << '\n';
        std::cout << "Daftar Edit" << std::endl;
        std::cout << "1. Tambah Stock\n2. Kurang Stock\n3. Undo\n4. Kembali" << std::endl;
        std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
        std::cout << "Opsi\t\t\t: "; std::cin >> opsi;
        switch (opsi){
            case 1:
            std::cout << "Tambahkan berapa ?\t: ";
            std::cin >> banyak;
            std::cout << "\n";
            stock_kurma = push1(stock_kurma, new_element1(peek1(stock_kurma) + banyak));
            system("pause");
            system("cls");
            break;

            case 2:
            std::cout << "Kurangi berapa ?\t: ";
            std::cin >> banyak;
            std::cout << "\n";
            cek_stock = peek1(stock_kurma) - banyak;
            if (cek_stock < 0)
            cek_stock = 0;
            stock_kurma = push1(stock_kurma, new_element1(cek_stock));
            system("pause");
            system("cls");
            break;

            case 3:
            pop1(stock_kurma);
            system("cls");
            break;

            case 4:
            system("cls");
            break;

            default:
            system("cls");
            std::cout << "Input Salah!\n\n";
            system("pause");
            system("cls");
            break;
        }
    } while (opsi != 4);
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