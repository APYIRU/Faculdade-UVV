#include <iostream>
#include <format>


class Produto {
private:
    int codigo;
    double preco;
    int quantidade;



public:
    /*void definirDados() {

    std::cout << "\n==== CADASTRO DE PRODUTO ====\n";
    std::cout << "Digite o Codigo: ";
    std::cin >> codigo;

    std::cout << "Digite o Preco: R$";
    std::cin >> preco;

    std::cout << "Digite a Quantidade: ";
    std::cin >> quantidade;
    } */

    void aplicarDesconto(double percentual){
        std::cout << "\nDigite o desconto: ";
        std::cin >> percentual;

        preco = preco - (preco*percentual/100);
    }

    /*void exibirDados(){
        std::cout << "\n==== PRODUTO ====\n";
        std::cout << "Codigo: "<< getCodigo() <<"\n";
        std::string precoFormat = std::format("Preco: R${:.2f}", getPreco());
        std::cout << precoFormat << "\n";
        std::cout << "Quantidade: " << getQuantidade() << "\n\n";
    }*/

    double calcularValorEstoque(){
        return preco * quantidade;
    }

    double getPreco() const {
        return preco;
    }

    double getCodigo() const {
        return codigo;
    }

    double getQuantidade() const {
        return quantidade;
    }

    void setPreco(double novoPreco){
        if (novoPreco >= 0.0){
            preco = novoPreco;
        }
    }

    void setQuantidade(double novaQuantidade){
        if (novaQuantidade >= 0.0){
            quantidade = novaQuantidade;
        }
    }

    void setCodigo(double novoCodigo){
        codigo = novoCodigo;
    }

};


int main(){
    Produto produto;
    double desconto;
    
    produto.setCodigo(101);
    produto.setPreco(150.0);
    produto.setQuantidade(3);
    
    
    //produto.definirDados();
    produto.aplicarDesconto(desconto);
    double valorEstoque = produto.calcularValorEstoque();
    //produto.exibirDados();

    std::string codigoFormat = std::format("Codigo: {}", produto.getCodigo());
    std::cout << codigoFormat << std::endl;

    std::string precoFormat = std::format("Preco: R${:.2f}", produto.getPreco());
    std::cout << precoFormat << std::endl;

    std::string quantidadeFormat = std::format("Quantidade: {}", produto.getQuantidade());
    std::cout << quantidadeFormat << std::endl;
    
    std::string valorEstoqueFormat = std::format("Valor total do estoque: R${:.2f}", valorEstoque);
    std::cout << valorEstoqueFormat << "\n";
    return 0;
}