class GrafoMatrizAdjacencia:
    """
    Classe para representar um grafo usando matriz de adjacência.
    """

    def __init__(self, num_vertices, direcionado=False):
        """
        Inicializa o grafo com um número de vértices.

        Args:
            num_vertices (int): Número de vértices do grafo
            direcionado (bool): True para grafo direcionado, False para não direcionado
        """
        self.num_vertices = num_vertices
        self.direcionado = direcionado

        # Cria uma matriz num_vertices x num_vertices preenchida com 0

        # [0] * num_vertice cria uma lista zerada
        # _ em python é uma variavel não usada
        # vai gerar algn como:
        # [[ 0,0,0,0,0],
        # [ 0,0,0,0,0],
        # [ 0,0,0,0,0]....]

        self.matriz = [[0] * num_vertices for _ in range(num_vertices)]

        # Crie uma sequencia para os rotulos e converte para string
        self.rotulos = [str(i) for i in range(num_vertices)]

    def adicionar_aresta(self, origem, destino, peso=1):
        self.matriz[origem][destino] = peso
        self.matriz[destino][origem] = peso



    def definir_rotulo(self, vertice, rotulo):
        """
        Define um rótulo para um vértice.

        """
        if vertice < self.num_vertices:
            self.rotulos[vertice] = rotulo
        else:
            print(f"Erro: Vértice {vertice} não existe!")

    def remover_aresta(self, origem, destino):
        self.matriz[destino][origem] = 0
        self.matriz[origem][destino] = 0
        

    def grau_vertice(self, vertice):
        for i in range(self.num_vertices):
            if self.matriz[i] != 0:
                grau =+ 1
        



    def conexao(self, vertice):
        """
        Retorna a lista de conexao de um vértice.
        *** implementar

        Deve retornar uma lista com as conexoes do vertice
        ## vi[A,C,d]

        """

    def exibir_matriz(self):
        """
        Exibe a matriz de adjacência de forma formatada.
        """
        print("\n" + "=" * 50)
        print("MATRIZ DE ADJACÊNCIA")
        print("=" * 50)

        # Cabeçalho com os rótulos
        print("    ", end="")
        for i in range(self.num_vertices):
            print(f"  {self.rotulos[i]:>2}", end="")
        print("\n" + "    " + "-" * (self.num_vertices * 4))

        # Linhas da matriz
        for i in range(self.num_vertices):
            print(f"{self.rotulos[i]:>2} |", end="")
            for j in range(self.num_vertices):
                print(f" {self.matriz[i][j]:>2}", end="")
            print()

        print("=" * 50)

        # Informações adicionais
        # tipo = "DIRECIONADO" if self.direcionado else "NÃO DIRECIONADO"
        # print(f"Tipo: {tipo}")
        print(f"Total de vértices: {self.num_vertices}")

        # Conta o total de arestas
        total_arestas = 0
        for i in range(self.num_vertices):
            for j in range(self.num_vertices):
                if self.matriz[i][j] != 0:
                    total_arestas += 1

        if not self.direcionado:
            total_arestas //= 2  # Cada aresta é contada duas vezes

        print(f"Total de arestas: {total_arestas}")
        print("=" * 50 + "\n")

    def exibir_detalhes(self):
        """
        Exibe informações detalhadas sobre o grafo.
        """
        print("\n" + "=" * 50)
        print("DETALHES DO GRAFO")
        print("=" * 50)

        for i in range(self.num_vertices):
            grau = self.grau_vertice(i)
            viz = self.conexao(i)
            viz_rotulos = [self.rotulos[v] for v in viz]
            print(f"Vértice {self.rotulos[i]} (índice {i}):")
            print(f"  Grau: {grau}")
            print(f"  Vizinhos: {viz_rotulos}")
            print()

        print("=" * 50 + "\n")


# ==================== FUNÇÃO PRINCIPAL PARA TESTE ====================

def exemplo_uso():
    """
    """
    print("=" * 60)
    print(" EXEMPLO DE GRAFO NÃO DIRECIONADO ")
    print("=" * 60)

    # Cria um grafo com 5 vértices (não direcionado)
    grafo1 = GrafoMatrizAdjacencia(5, direcionado=False)

    # Define rótulos para os vértices
    grafo1.definir_rotulo(0, "A")
    grafo1.definir_rotulo(1, "B")
    grafo1.definir_rotulo(2, "C")
    grafo1.definir_rotulo(3, "D")
    grafo1.definir_rotulo(4, "E")

    # Adiciona arestas (não direcionadas)
    grafo1.adicionar_aresta(0, 1)  # A-B
    grafo1.adicionar_aresta(0, 2)  # A-C
    grafo1.adicionar_aresta(1, 2)  # B-C
    grafo1.adicionar_aresta(1, 3)  # B-D
    grafo1.adicionar_aresta(2, 4)  # C-E
    grafo1.adicionar_aresta(3, 4)  # D-E

    # Exibe a matriz
    grafo1.exibir_matriz()
    grafo1.exibir_detalhes()


# Executa o exemplo
if __name__ == "__main__":
    exemplo_uso()
