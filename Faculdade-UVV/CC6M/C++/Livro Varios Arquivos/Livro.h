#ifndef LIVRO_H
#define LIVRO_H
#include <string>

class Livro
{
    private:
        std::string livro;
        std::string autor;
        int anoPubli;

    public:
        Livro(const std::string& nome, const std::string& aUtor, const int& ano);

        std::string getLivro() const;
        std::string getAutor() const;
        int getAnoPubli() const;
        void setAnoPubli(const int& ano);

};

#endif