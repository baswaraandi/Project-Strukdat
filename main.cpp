#include "interface.hpp"

int main() {
    // Linked List
    list first = nullptr;
    pointer pBantu;
    pointer p_delete;
    new_element(first, "Ajwa");
    insert_last(first, "Sukari");
    insert_last(first, "Peler");
    std::string pil_edit_kurma1;
    std::string pil_edit_kurma2;
    std::string pil_edit_kurma3;

    // Stack
    Stack1 stock_kurma_A = nullptr;
    Stack1 stock_kurma_B = nullptr;
    Stack1 stock_kurma_C = nullptr;
    createStack1(stock_kurma_A);
    createStack1(stock_kurma_B);
    createStack1(stock_kurma_C);

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
                tampilan_edit();
                std::cout << "Masukin Nomor Menu\t: "; std::cin >> opsi_linked;
                switch(opsi_linked){
                    case 1:
                    std::cout << "Masukkan Nama Kurma\t: "; std::cin >> pil_edit_kurma1;
                    search(first, pBantu , pil_edit_kurma1);
                    if (pBantu != nullptr){
                        std::cout << "Data Ada! JING !!";
                    } else {
                        std::cout << "Eweuh GBLK";
                    }
                    std::cout << "\n\n";
                    system("pause");
                    system("cls");
                    break;

                    case 2:
                    std::cout << "Masukkan Nama Kurma\t: "; std::cin >> pil_edit_kurma2;
                    insert_last(first, pil_edit_kurma2);
                    std::cout << "Daftar Kurma Saat ini\t: ";
                    traversal(first);
                    std::cout << "\n";
                    system("pause");
                    system("cls");
                    break;

                    case 3:
                    std::cout << "Masukkan Nama Kurma\t: "; std::cin >> pil_edit_kurma3;
                    delete_by_key(first, p_delete, pil_edit_kurma3);
                    std::cout << "Daftar Kurma Saat ini\t: ";
                    traversal(first);
                    std::cout << "\n";
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
                    tampilan_edit_stock1(stock_kurma_A);
                    break;

                    case 2:
                    loading();
                    tampilan_edit_stock1(stock_kurma_B);
                    break;

                    case 3:
                    loading();
                    tampilan_edit_stock1(stock_kurma_C);
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
            } while (opsi_stack != 4);    
            break;

            case 3:
            loading();
            tampilan_penjualan();
            break;

            case 4:
            system("cls");
            std::cout << "BYE" << std::endl;
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