#include <iostream>

int main()
{
    double cambio=0;
    double euro=0;
    double calcolo=0;
    std::cout << "Inserisci la valuta : ";
    std::cin >> euro;
    std::cout << "Fattore di cambio : ";
    std::cin >> cambio;
    calcolo = euro*cambio;
    std:: cout << "Nel cambio : " << calcolo;
    return 0;
}
