#include "interface.hpp"

int main() {
    list first = nullptr;
    list pBantu;
    new_element(first, "Ajwa");
    insert_last(first, "Sukari");
    insert_last(first, "Peler");
    Stack stock_kurma = createStack();
    int banyak, opsi_linked, opsi_stack, cek_stock;
    int pil_menu;
    std::string pil_kurma;
    loading();
    do {
        tampilan_awal();
        std::cout << "Pilih Menu\t: "; std::cin >> pil_menu;
        switch(pil_menu) {
            case 1:
            loading();
            tampilan_edit();
            std::cout << "Masukin Nomor Menu!\n -> "; std::cin >> opsi_linked;
            switch(opsi_linked){
                case 1:
                    std::cout << "Masukkan Nama Kurma ! \n -> "; std::cin >> pil_kurma;
                    search(first, pBantu ,pil_kurma);
                    if (pBantu == first){
                        std::cout << "Data Ada! JING !!";
                    } else {
                        std::cout << "Eweuh GBLK";
                    }
                    std::cout << '\n';
                    system("pause");
                    system("cls");
                    break;
                case 2:
                    
                    break;
                case 3:
                    
                    break;
                case 4:
                    std::cout << "Bye.." << "\n\n";
                    break;
                default:
                    std::cout << "\nInput Salah!\n\n";
                    break;
            }
            break;
            case 2:
            loading();
            std::cout << "Stok Kurma : " << peek(stock_kurma) << " KG" << '\n';
            std::cout << "1.) Tambah Kurma" << '\n';
            std::cout << "2.) Kurangi Kurma" << '\n';
            std::cout << "3.) Undo" << '\n';
            std::cout << "4.) Exit" << '\n';
            std::cout << "Opsi> "; std::cin >> opsi_stack;
                    switch (opsi_stack){
                        case 1:
                        std::cout << "\nTambahkan berapa?> ";
                        std::cin >> banyak;
                        std::cout << "\n";
                        stock_kurma = push(stock_kurma, new_element(peek(stock_kurma) + banyak));
                        break;

                        case 2:
                        std::cout << "\nKurangi berapa?> ";
                        std::cin >> banyak;
                        std::cout << "\n\n";
                        cek_stock = peek(stock_kurma) - banyak;
                        if (cek_stock < 0)
                        cek_stock = 0;
                        stock_kurma = push(stock_kurma, new_element(cek_stock));
                        break;

                        case 3:
                        pop(stock_kurma);
                        std::cout << "\n\n";
                        break;

                        case 4:
                        std::cout << "Bye.." << "\n\n";
                        break;

                        default:
                        std::cout << "\nInput Salah!\n\n";
                        break;
                        }
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
        }
    }while (pil_menu != 4);
    deleteStack(stock_kurma);
}