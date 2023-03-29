#include <iostream>

int main()
{   
    int NumVidas = 5;
    int Score = 1350;
    std::cout << "****************" << std::endl;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Score: " << Score << std::endl;
    std::cout << "MEM Address from NumVidas: " << &NumVidas << "\n";
    std::cout << "MEM Size from NumVidas: " << sizeof(NumVidas) << " (bytes)" << "\n";
    std::cout << "****************" << std::endl;
    system("read -n 1 -s -p \"Press any key to continue...\"");
}