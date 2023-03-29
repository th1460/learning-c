#include <iostream>

int main()
{
    //std::cout saída para a tela
    //std::endl quebra de linha
    //system chama o shell 
    std::cout << "Thiago, 37 anos, aprendendo C++" << std::endl;
    system("read -n 1 -s -p \"Press any key to continue...\"");
    return 0; 
    //return retorna um operacional zero indicando que tudo deu certo
}