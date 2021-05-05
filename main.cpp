#include "interface.hpp"

int main() {
    Stack stock_kurma = createStack();
    int banyak, opsi, cek_stock;
    int pil_menu;
    loading();
    do {
        tampilan_awal();
        std::cout << "Pilih Menu\t: "; std::cin >> pil_menu;
        switch(pil_menu) {
            case 1:
            loading();
            tampilan_edit();
            break;
            case 2:
            loading();
            std::cout << "Stok Kurma : " << peek(stock_kurma) << " KG" << '\n';
            std::cout << "1.) Tambah Kurma" << '\n';
            std::cout << "2.) Kurangi Kurma" << '\n';
            std::cout << "3.) Undo" << '\n';
            std::cout << "4.) Exit" << '\n';
            std::cout << "Opsi> "; std::cin >> opsi;
                    switch (opsi){
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
}