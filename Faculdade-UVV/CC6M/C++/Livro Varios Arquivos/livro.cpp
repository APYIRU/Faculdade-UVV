#include "Livro.h"

Livro::Livro(const std::string& nome, const std::string& aUtor, const int& ano) : livro{nome}, autor{aUtor}, anoPubli{0}
{
    if(ano > 0)
    {
        anoPubli = ano;
    }

}

std::string Livro::getLivro() const{
    return livro;
}

std::string Livro::getAutor() const{
    return autor;
}

int Livro::getAnoPubli() const{
    return anoPubli;
}

void Livro::setAnoPubli(const int& ano)
{
    anoPubli = ano;
}

