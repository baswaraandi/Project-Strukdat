#include "interface.hpp"

int main() {
<<<<<<< HEAD
    list first = nullptr;
    list pBantu;
    new_element(first, "Ajwa");
    insert_last(first, "Sukari");
    insert_last(first, "Peler");
    Stack stock_kurma = createStack();
    int banyak, opsi_linked, opsi_stack, cek_stock;
    int pil_menu;
    std::string pil_kurma;
=======
    Stack stock_kurma = createStack();
    int banyak, opsi, cek_stock;
    int pil_menu;
>>>>>>> 62a83abad6e19a6f5849b260a3741b4dc91852d3
    loading();
    do {
        tampilan_awal();
        std::cout << "Pilih Menu\t: "; std::cin >> pil_menu;
        switch(pil_menu) {
            case 1:
            loading();
            tampilan_edit();
<<<<<<< HEAD
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
=======
>>>>>>> 62a83abad6e19a6f5849b260a3741b4dc91852d3
            break;
            case 2:
            loading();
            std::cout << "Stok Kurma : " << peek(stock_kurma) << " KG" << '\n';
            std::cout << "1.) Tambah Kurma" << '\n';
            std::cout << "2.) Kurangi Kurma" << '\n';
            std::cout << "3.) Undo" << '\n';
            std::cout << "4.) Exit" << '\n';
<<<<<<< HEAD
            std::cout << "Opsi> "; std::cin >> opsi_stack;
                    switch (opsi_stack){
=======
            std::cout << "Opsi> "; std::cin >> opsi;
                    switch (opsi){
>>>>>>> 62a83abad6e19a6f5849b260a3741b4dc91852d3
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
<<<<<<< HEAD
    deleteStack(stock_kurma);
=======
>>>>>>> 62a83abad6e19a6f5849b260a3741b4dc91852d3
}