/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.prjaula02;

/**
 *
 * @author emili
 */
public class Cachorro {


    private Integer idade; 
    private Double peso;    
    private String nome;
    
    //Construtores
    //Construtor sem parâmetro
    public Cachorro(){
        idade = 0;
        peso = 0.0;
        nome = "";}
    //Cosntrutor com parâmetro
    public Cachorro(Integer idade, Double peso, String nome){
    this.idade = idade;
    this.peso = peso;
    this.nome = nome;
    }
    public Cachorro(Double x, Integer y, String z){
        peso = x;
        idade = y;
        nome = z;}
    //Getter e Setters
    public Integer getIdade() {
        return idade;
    }

    public void setIdade(Integer idade) {
        this.idade = idade;
    }

    public Double getPeso() {
        return peso;
    }

    public void setPeso(Double peso) {
        this.peso = peso;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }


    //Metódos(Ações)
    
    public void latir(){
        
        System.out.println("Au au");
    }
    public void comer(){
        
        System.out.println("Comer ração");  //Todos os metodos devem ser publics
    }
    public void dormir(){
        
        System.out.println("Zzzzzzzzzz");
    }
    
}

