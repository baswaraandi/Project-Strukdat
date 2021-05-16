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
    int stock1, stock2, stock3;
    int kualitas1, kualitas2, kualitas3;
    std::string kurma1, kurma2, kurma3;
    
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
                std::cout << "Opsi\t\t        : "; std::cin >> opsi_linked;
                switch(opsi_linked){
                    case 1:
                    loading();
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t DAFTAR KURMA\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    traversal(first);
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    std::cout << '\n';
                    system("pause");
                    system("cls");
                    break;

                    case 2:
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
                    std::cout << "Masukkan Nama Kurma\t: "; std::getline(std::cin >> std::ws, pil_edit_kurma2);
                    insert_last(first, pil_edit_kurma2);
                    loading();
                    std::cout << "Data Berhasil Ditambahkan!\n\n";
                    system("pause");
                    system("cls");
                    break;

                    case 4:
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
                std::cout << "Opsi\t: "; std::cin >> opsi_stack;
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
            int opsi_penjualan;
            loading();
            do {
                tampilan_penjualan();
                std::cout << "Opsi\t: "; std::cin >> opsi_penjualan;
                switch (opsi_penjualan) {
                    case 1:
                    loading();
                    std::cout << '-' << std::setw(28) << std::setfill('-') << '-' << std::endl;
                    std::cout << "\tKUALITAS KURMA\n\n";
                    std::cout << "1 - Standard\n";
                    std::cout << "2 - Premium\n";
                    std::cout << "3 - Star\n";
                    std::cout << '-' << std::setw(28) << std::setfill('-') << '-' << std::endl;
                    std::cout << "\n";
                    system("pause");
                    system("cls");

                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    std::cout << "\t\t DATA 1\n\n";
                    std::cout << "Nama Kurma       : "; std::getline(std::cin >> std::ws, kurma1);
                    std::cout << "Stock (Kg)       : "; std::cin >> stock1;
                    std::cout << "Kualitas (3-2-1) : "; std::cin >> kualitas1;
                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    enqueue(q, stock1, kualitas1, kurma1);
                    std::cout << "\n";
                    system("pause");
                    system("cls");

                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    std::cout << "\t\t DATA 2\n\n";
                    std::cout << "Nama Kurma       : "; std::getline(std::cin >> std::ws, kurma2);
                    std::cout << "Stock (Kg)       : "; std::cin >> stock2;
                    std::cout << "Kualitas (3-2-1) : "; std::cin >> kualitas2;
                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    enqueue(q, stock2, kualitas2, kurma2);
                    std::cout << "\n";
                    system("pause");
                    system("cls");
                    
                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    std::cout << "\t\t DATA 3\n\n";
                    std::cout << "Nama Kurma       : "; std::getline(std::cin >> std::ws, kurma3);
                    std::cout << "Stock (Kg)       : "; std::cin >> stock3;
                    std::cout << "Kualitas (3-2-1) : "; std::cin >> kualitas3;
                    std::cout << '+' << std::setw(38) << std::setfill('-') << '+' << std::endl;
                    enqueue(q, stock3, kualitas3, kurma3);
                    std::cout << "\n";
                    system("pause");
                    system("cls");
                    
                    break;

                    case 2:
                    loading();
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\t\t PRIORITAS PENJUALAN\n";
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    print_queue(q);
                    std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
                    std::cout << "\n";
                    system("pause");
                    system("cls");

                    case 3:
                    system("cls");
                    break;

                    default:
                    system("cls");
                    std::cout << "\nInput Salah!\n\n";
                    system("pause");
                    system("cls");
                    break;
                }
            } while (opsi_penjualan != 3);
            break;

            case 4:
            system("cls");
            std::cout << " = Good Bye! Have A Good Day! = \n\n";     
            std::cout << "            __  __    \n";
            std::cout << "           /  \\/  \\ \n";
            std::cout << "           \\      /  \n";
            std::cout << "            \\    /   \n";
            std::cout << "             \\  /    \n";
            std::cout << "              \\/     \n\n\n";
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