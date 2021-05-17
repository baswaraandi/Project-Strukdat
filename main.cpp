#include "interface.hpp"

int main() {
    // Linked List
    list first = nullptr;
    pointer pBantu;
    pointer p_delete;
    new_element(first, "Ajwa");
    insert_last(first, "Sukari Al-Qassim");
    insert_last(first, "Sukari Deluxe");
    std::string pil_edit_kurma1;
    std::string pil_edit_kurma2;
    std::string pil_edit_kurma3;

    // Stack
    Stack stock_kurma_A = nullptr;
    Stack stock_kurma_B = nullptr;
    Stack stock_kurma_C = nullptr;
    createStack(stock_kurma_A);
    createStack(stock_kurma_B);
    createStack(stock_kurma_C);
    
    // Queue
    Queue q;
    new_queue(q);
    int stock, kualitas;
    std::string kurma;
    
    int pil_menu;
    loading();
    do {
        tampilan_awal();
        std::cout << "Pilih Menu\t: "; std::cin >> pil_menu;
        switch(pil_menu) {
            case 1:
            int opsi_linked;
            loading();
            do {
                tampilan_cek_data();
                std::cout << "Pilih Menu\t: "; std::cin >> opsi_linked;
                switch(opsi_linked){
                    case 1:
                    loading();
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Daftar Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    traversal(first);
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    std::cout << '\n';
                    system("pause");
                    system("cls");
                    break;

                    case 2:
                    system("cls");
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Cari Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "Masukkan Nama Kurma\t: "; std::getline(std::cin >> std::ws, pil_edit_kurma1);
                    search(first, pBantu , pil_edit_kurma1);
                    loading();
                    if (pBantu != nullptr){
                        std::cout << "Data Ditemukan!";
                    } else {
                        std::cout << "Data Tidak Ditemukan!";
                    }
                    std::cout << "\n\n";
                    system("pause");
                    system("cls");
                    break;

                    case 3:
                    system("cls");
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Tambah Data Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "Masukkan Nama Kurma\t: "; std::getline(std::cin >> std::ws, pil_edit_kurma2);
                    insert_last(first, pil_edit_kurma2);
                    loading();
                    std::cout << "Data Berhasil Ditambahkan!\n\n";
                    system("pause");
                    system("cls");
                    break;

                    case 4:
                    system("cls");
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Hapus Data Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "Masukkan Nama Kurma\t: "; std::getline(std::cin >> std::ws, pil_edit_kurma2);
                    delete_by_key(first, p_delete, pil_edit_kurma2);
                    loading();
                    if (first == nullptr || p_delete == nullptr) {
                        std::cout << "Kurma yang dicari tidak ditemukan!\n\n";
                    }
                    else {
                        std::cout << "Data Telah Terhapus!\n\n";
                    }
                    system("pause");
                    system("cls");
                    break;

                    case 5:
                    loading();
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Jumlah Data Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "Jumlah Data : " << jumlah_data(first) << " Kurma";
                    std::cout << "\n\n";
                    system("pause");
                    system("cls");
                    break;

                    case 6:
                    system("cls");
                    break;

                    default:
                    system("cls");
                    std::cout << "Input Salah!\n\n";
                    system("pause");
                    system("cls");
                    break;
                }
            } while (opsi_linked != 6);
            break;

            case 2:
            int banyak, opsi_stack, cek_stock;
            loading();
            do {
                tampilan_cek_stock();
                std::cout << "Pilih Menu\t: "; std::cin >> opsi_stack;
                switch (opsi_stack){
                    case 1:
                    loading();
                    tampilan_edit_stock(stock_kurma_A, "Ajwa", 12);
                    break;
                    case 2:
                    loading();
                    tampilan_edit_stock(stock_kurma_B, "Sukari Al-Qassim", 5);
                    break;

                    case 3:
                    loading();
                    tampilan_edit_stock(stock_kurma_C, "Sukari Deluxe", 7);
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
            } while (opsi_stack != 4);    
            break;

            case 3:
            int opsi_penjualan, banyak_data;
            loading();
            do {
                tampilan_penjualan();
                std::cout << "Pilih Menu\t: "; std::cin >> opsi_penjualan;
                switch (opsi_penjualan) {
                    case 1:
                    loading();
                    std::cout << "Banyak Data Kurma : "; std::cin >> banyak_data;
                    system("cls");

                    for (int i = 1; i <= banyak_data; i++) {
                        std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                        std::cout << "\t     Kualitas Kurma\n\n";
                        std::cout << "1 - Standard\n";
                        std::cout << "2 - Premium\n";
                        std::cout << "3 - Star\n";
                        std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                        std::cout << "\n";
                        std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                        std::cout << "\t\t Data " << i << "\n\n";
                        std::cout << "Nama Kurma       : "; std::getline(std::cin >> std::ws, kurma);
                        std::cout << "Stock (Kg)       : "; std::cin >> stock;
                        std::cout << "Kualitas         : "; std::cin >> kualitas;
                        std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                        enqueue(q, stock, kualitas, kurma);
                        std::cout << "\n";
                        system("pause");
                        system("cls");
                    }                    
                    break;

                    case 2:
                    loading();
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t Prioritas Penjualan Kurma\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    print_queue(q);
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    std::cout << "\n";
                    system("pause");
                    system("cls");
                    break;

                    case 3:
                    if (q.head == nullptr && q.tail == nullptr) {
                        loading();
                        system ("cls");
                        std::cout << "Data Kosong\n\n";
                        system ("pause");
                        system ("cls");
                    }
                    else {
                        dequeue(q);
                        loading();
                        std::cout << "Data Paling Utama Telah Terhapus!\n\n";
                        system("pause");
                        system("cls");
                    }
                    break;

                    case 4:
                    system("cls");
                    break;

                    default:
                    system("cls");
                    std::cout << "\nInput Salah!\n\n";
                    system("pause");
                    system("cls");
                    break;
                }
            } while (opsi_penjualan != 4);
            break;

            case 4:
            system("cls");
            std::cout << " = Dadah! Semoga Harimu Menyenangkan! = \n\n";     
            std::cout << "              __  __    \n";
            std::cout << "             /  \\/  \\ \n";
            std::cout << "             \\      /  \n";
            std::cout << "              \\    /   \n";
            std::cout << "               \\  /    \n";
            std::cout << "                \\/     \n\n\n";
            exit(0);
            break;

            default:
            system("cls");
            std::cout << "\nInput Salah!\n\n";
            system("pause");
            system("cls");
            break;
        }
    } while (pil_menu != 4);
}