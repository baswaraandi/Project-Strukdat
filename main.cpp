#include "interface.hpp"

int main() {
    // Linked List
    list first = nullptr;
    pointer pBantu;
    pointer p_delete;
    new_element(first, "Ajwa");
    insert_last(first, "Sukari_Al-Qassim");
    insert_last(first, "Sukari_Deluxe");
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
                std::cout << "Masukkan Nomor Menu\t: "; std::cin >> opsi_linked;
                switch(opsi_linked){
                    case 1:
                    loading();
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    std::cout << "\t\t DAFTAR KURMA\n";
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    traversal(first);
                    std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
                    system("pause");
                    system("cls");
                    break;

                    case 2:
                    system("cls");
                    std::cout << "Masukkan Nama Kurma\t: "; std::cin >> pil_edit_kurma1;
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
                    loading();
                    std::cout << "Jumlah Data : " << jumlah_data(first) << " Kurma";
                    std::cout << "\n\n";
                    system("pause");
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
            } while (opsi_linked != 4);
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
                    tampilan_edit_stock(stock_kurma_A);
                    break;

                    case 2:
                    loading();
                    tampilan_edit_stock(stock_kurma_B);
                    break;

                    case 3:
                    loading();
                    tampilan_edit_stock(stock_kurma_C);
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
            loading();
            std::cout << "Kualitas Kurma (1-3)\n";
            std::cout << "1 - Standard\n";
            std::cout << "2 - Premium\n";
            std::cout << "3 - Star\n";
            new_queue(q);
            std::cout << "\nKURMA 1\n";
            std::cout << "Masukkan Nama Kurma       : "; std::cin >> kurma1;
            std::cout << "Masukkan Stock Kurma (Kg) : "; std::cin >> stock1;
            std::cout << "Masukkan Kualitas Kurma   : "; std::cin >> kualitas1;
            enqueue(q, stock1, kualitas1, kurma1);

            std::cout << "\nKURMA 2\n";
            std::cout << "Masukkan Nama Kurma       : "; std::cin >> kurma2;
            std::cout << "Masukkan Stock Kurma (Kg) : "; std::cin >> stock2;
            std::cout << "Masukkan Kualitas Kurma   : "; std::cin >> kualitas2;
            enqueue(q, stock2, kualitas2, kurma2);
            
            std::cout << "\nKURMA 3\n";
            std::cout << "Masukkan Nama Kurma       : "; std::cin >> kurma3;
            std::cout << "Masukkan Stock Kurma (Kg) : "; std::cin >> stock3;
            std::cout << "Masukkan Kualitas Kurma   : "; std::cin >> kualitas3;
            enqueue(q, stock3, kualitas3, kurma3);

            loading();
            std::cout << "\n-- URUTAN PRIORITAS PENJUALAN KURMA --\n";
            print_queue(q);
            std::cout << "\n";
            system("pause");
            system("cls");
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