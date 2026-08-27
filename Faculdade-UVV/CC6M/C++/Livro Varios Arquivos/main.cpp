#include <iostream>
#include "Livro.h"

int main()
{
    Livro l1("Manas", "Ces", 12);
    Livro l2("Recepção dos Calouros", "(Tomaz)", 4);

    std::cout << "Livro: " << l1.getLivro() << "\n" << l1.getAutor() << "\n" << l1.getAnoPubli() << "\n";
    std::cout << "Livro: " << l2.getLivro() << "\n" << l2.getAutor() << "\n" << l2.getAnoPubli();

}