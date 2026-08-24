#include <iostream>
#include <format>

class Livro {
    private:
        std::string titulo;
        std::string autor;
        int anoPubli;

    public:

    Livro(std::string tituloInicial, std::string autorInicial, int anoPubliInicial) 
    : titulo{tituloInicial}, autor{autorInicial}, anoPubli{0}
    {
        if(anoPubliInicial > 0)
        {
            anoPubli =  anoPubliInicial;
        }
    }


    

    std::string getTitulo() const{
        return titulo;
    }

    std::string getAutor() const{
        return autor;
    }

    int getAnoPubli() const{
        return anoPubli;
    }

    void mostrarDados()
    {
        std::cout << "Titulo: " << getTitulo() << std::endl;
        std::cout << "Autor: " << getAutor() << std::endl;
        std::cout << "Ano de Publicacao: " << getAnoPubli() << std::endl;
    }
};

int main()
{
    Livro l1 = Livro("cueca das calca", "Rosalen", 1920);
    Livro l2 = Livro("Demolay do matta", "Matta", -3);
    l1.mostrarDados();
    l2.mostrarDados();
    return 0;
}
