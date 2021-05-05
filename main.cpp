#include "interface.hpp"

int main() {
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
            tampilan_cek_stock();
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
    } while (pil_menu != 4);
}