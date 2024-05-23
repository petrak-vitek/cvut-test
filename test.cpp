#include <iostream>

// Funkce pro sečtení dvou čísel
int scitani(int a, int b) {
    return a + b;
}

int main() {
    int cislo1, cislo2, vysledek;

    // Načtení dvou čísel od uživatele
    std::cout << "Zadejte prvni cislo: ";
    std::cin >> cislo1;
    std::cout << "Zadejte druhe cislo: ";
    std::cin >> cislo2;

    // Volání funkce pro sečtení čísel
    vysledek = scitani(cislo1, cislo2);

    // Výpis výsledku na obrazovku
    std::cout << "Součet je: " << vysledek << std::endl;
    std::cout << "Součet je: " << cislo1 * cislo2  << std::endl;
    return 0;
}
