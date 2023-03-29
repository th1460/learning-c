#include <iostream>

int main()
{

    int Inteiro;
    float Float;
    double Double;
    char Charactere;

    Inteiro = 43;
    Float = 3.14f;
    Double = 1.2;
    Charactere = 'Character';

    std::cout 
        << "Inteiro: " << Inteiro << "/Size: " << sizeof(Inteiro) << "/Memory addr: " << &Inteiro << std::endl
        << "Float: " << Float << "/Size: " << sizeof(Float) << "/Memory addr: " << &Float << std::endl
        << "Double: " << Double << "/Size: " << sizeof(Double) << "/Memory addr: " << &Double << std::endl
        << "Char: " << Charactere << "/Size: " << sizeof(Charactere) << "/Memory addr: " << &Charactere << std::endl;
    system("read -n 1 -s -p \"Press any key to continue...\"");
    return 0;
}