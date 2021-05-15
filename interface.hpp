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
        Sleep(20);
    }
    system("cls");
}

void tampilan_awal() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t TOKO KURMA BAROKAH AL-SWAGGIYAH" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Menu\n1. Cek Data Kurma\n2. Cek Stock Kurma\n3. Penjualan Kurma\n4. Exit" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}


void tampilan_cek_data() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Cek Data Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Edit" << std::endl;
    std::cout << "1. Daftar Kurma\n2. Cari Kurma\n3. Jumlah Data Kurma\n4. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void tampilan_cek_stock() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Cek Stock Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Stock" << std::endl;
    std::cout << "1. Kurma Ajwa\n2. Kurma Sukari Al-Qassim\n3. Kurma Sukari Deluxe\n4. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}

void tampilan_edit_stock (Stack& stock_kurma, std::string tampilan_nama_kurma, int tampilan_spasi) {
    int banyak, opsi, cek_stock;
    do {
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
        std::cout << ' ' << std::setw(tampilan_spasi) << std::setfill(' ') << ' ';
        std::cout << "Edit Stock Kurma - " << tampilan_nama_kurma << std::endl;
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
        std::cout << "Stok Kurma : " << peek(stock_kurma) << " Kg" << '\n';
        std::cout << "Daftar Edit" << std::endl;
        std::cout << "1. Tambah Stock\n2. Kurang Stock\n3. Undo\n4. Kembali" << std::endl;
        std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
        std::cout << "Opsi\t: "; std::cin >> opsi;
        switch (opsi){
            case 1:
            system("cls");
            std::cout << "Tambahkan berapa ?\t: ";
            std::cin >> banyak;
            std::cout << "\n";
            stock_kurma = push(stock_kurma, new_element(peek(stock_kurma) + banyak));
            loading();
            break;

            case 2:
            system("cls");
            std::cout << "Kurangi berapa ?\t: ";
            std::cin >> banyak;
            std::cout << "\n";
            cek_stock = peek(stock_kurma) - banyak;
            if (cek_stock < 0)
            cek_stock = 0;
            stock_kurma = push(stock_kurma, new_element(cek_stock));
            loading();
            break;

            case 3:
            pop(stock_kurma);
            loading();
            break;

            case 4:
            system("cls");
            break;

            default:
            system("cls");
            std::cout << "Input Salah!\n\n";
            system("pause");
            loading();
            break;
        }
    } while (opsi != 4);
}

void tampilan_penjualan() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "\t\t Penjualan Kurma" << std::endl;
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
    std::cout << "Daftar Menu" << std::endl;
    std::cout << "1. Input Data Kurma\n2. Prioritas Penjualan Kurma\n3. Kembali" << std::endl;
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}