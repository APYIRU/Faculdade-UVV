package com.mycompany.aula20250415.mapcontato;

public class Aula20250415MapContato {

    public static void main(String[] args) {
        System.out.println("AGENDA");
        
        AgendaTelefonica ag = new AgendaTelefonica();
        
        ag.inserir("Cassio", "1111111");
        ag.inserir("Pedro", "2222222");
        ag.inserir("Joao", "3333333");
        
        ag.imprimir();
        System.out.println(ag.quantidade());
        
        ag.remover("Cassio");
        System.out.println(ag.quantidade());
    }
}
