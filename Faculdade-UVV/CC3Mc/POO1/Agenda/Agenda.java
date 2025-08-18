package com.mycompany.aula20250415.mapcontato;

import java.util.HashMap;
import java.util.Map;

public class AgendaTelefonica {
     private Map<String, Contato> colecao;

    public AgendaTelefonica() {
        this.colecao = new HashMap<>();
    }
    
    public void inserir(String nome, String telefone){
        Contato temp = new Contato(nome, telefone);
        this.colecao.put(nome, temp);
    }
    
    public Contato buscar(String nome){
        return this.colecao.get(nome);
    }
    
    public int quantidade(){
        return this.colecao.size();
    }
    
    public void remover(String nome){
        if(this.colecao.remove(nome) != null){
            System.out.println("Contato removido.");
        }else{
            System.out.println("Não encontrado.");
        }
    }
    
    public void imprimir(){
        if(this.colecao.isEmpty()){
            System.out.println("Vazio.");
        }else{
            /*for(Map.Entry<String,String> contato: colecao.entrySet()){
                System.out.println("Nome: "+contato.getKey() + " Numero: "+contato.getValue() );
            }*/
            
            for(String nome : colecao.keySet()){
                System.out.println("Nome: "+nome+ " Numero: "+ colecao.get(nome).toString());
            }
        
        }
    }
    
}
