#include "functions.hpp"

int main() {
    int pil_kurma, pil_menu;
    loading();
    tampilan_awal();
    std::cout << "Pilih Kurma\t: "; std::cin >> pil_kurma;
    std::cout << "Pilih Menu\t: "; std::cin >> pil_menu;
}