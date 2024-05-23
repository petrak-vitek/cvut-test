#include <iostream>

// Funkce pro sečtení dvou čísel
int scitani(int a, int b) {
    return a + b;
}

int deleni(int a, int b) {
    return a / b;
}

int main() {
    int cislo1, cislo2, vysledek;

    // Načtení dvou čísel od uživatele
    std::cout << "Zadejte prvni cislo: ";
    std::cin >> cislo1;
    std::cout << "Zadejte druhe cislo: ";
    std::cin >> cislo2;

    // Volání funkce pro sečtení čísel

    vysledek = deleni(cislo1, cislo2);


    // Výpis výsledku na obrazovku
    std::cout << "Podíl je: " << vysledek << std::endl;
    std::cout << "Součin je: " << cislo1 * cislo2  << std::endl;
    return 0;
}
