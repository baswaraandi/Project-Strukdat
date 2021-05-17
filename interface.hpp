#include "functions.hpp"

// MENU UMUM

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

void tampilan_exit_program() {
    system("cls");
    std::cout << " = Dadah! Semoga Harimu Menyenangkan! = \n\n";     
    std::cout << "              __  __    \n";
    std::cout << "             /  \\/  \\ \n";
    std::cout << "             \\      /  \n";
    std::cout << "              \\    /   \n";
    std::cout << "               \\  /    \n";
    std::cout << "                \\/     \n\n\n";
}

void tampilan_input_salah() {
    system("cls");
    std::cout << "Input Salah!\n\n";
    system("pause");
    system("cls");
}

void tampilan_kualitas_kurma() {
    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << "\n";
    std::cout << "\t     Kualitas Kurma\n\n";
    std::cout << "1 - Standard\n2 - Premium\n3 - Star\n";
    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << "\n\n";
}

void tampilan_judul_submenu(std::string judul_submenu){
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t\t " << judul_submenu << "\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
}

// MENU AWAL

void tampilan_awal() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t TOKO KURMA BAROKAH AL-SWAGGIYAH\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "Daftar Menu\n1. Cek Data Kurma\n2. Cek Stock Kurma\n3. Penjualan Kurma\n4. Keluar Program\n";
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << "\n";
}

// MENU CEK DATA KURMA

void tampilan_cek_data() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t\t Cek Data Kurma\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "Daftar Edit\n";
    std::cout << "1. Daftar Kurma\n2. Cari Kurma\n3. Tambah Data Kurma\n4. Hapus Data Kurma\n5. Jumlah Data Kurma\n6. Kembali\n";
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << "\n";
}

// MENU CEK STOCK KURMA

void tampilan_cek_stock() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t\t Cek Stock Kurma\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "Daftar Stock\n";
    std::cout << "1. Kurma Ajwa\n2. Kurma Sukari Al-Qassim\n3. Kurma Sukari Deluxe\n4. Kembali\n";
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << "\n";
}

void tampilan_edit_stock (Stack& stock_kurma, std::string tampilan_nama_kurma, int tampilan_spasi) {
    int banyak, opsi, cek_stock;
    do {
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
        std::cout << ' ' << std::setw(tampilan_spasi) << std::setfill(' ') << ' ';
        std::cout << "Edit Stock Kurma - " << tampilan_nama_kurma << "\n";
        std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
        std::cout << "Stok Kurma : " << peek(stock_kurma) << " Kg" << '\n';
        std::cout << "Daftar Edit\n";
        std::cout << "1. Tambah Stock\n2. Kurang Stock\n3. Undo\n4. Kembali\n";
        std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << "\n";
        std::cout << "Pilih Menu\t: "; std::cin >> opsi;
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

// MENU PENJUALAN KURMA

void tampilan_penjualan() {
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "\t\t Penjualan Kurma\n";
    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << "\n";
    std::cout << "Daftar Menu\n";
    std::cout << "1. Input Data Kurma\n2. Prioritas Penjualan Kurma\n3. Hapus Data Prioritas Paling Utama\n4. Kembali\n";
    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << "\n";
}