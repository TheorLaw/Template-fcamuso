#include <iostream>

int main()
{
    float cambio=0;
    float euro=0;
    std::cout << "Inserisci gli euro : ";
    std::cin >> euro;
    std::cout << "Fattore di cambio : ";
    std::cin >> cambio;
    std:: cout << "In dollari : " << euro*cambio << std::endl;
    return 0;
}
