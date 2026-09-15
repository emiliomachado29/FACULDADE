/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.prjaula02;

/**
 *
 * @author emili
 */
public class PrjAula02 {

    public static void main(String[] args) {
        
        Cachorro Raça = new Cachorro(10.2,2,"Tom");
        Cachorro Lulu = new Cachorro();
        Cachorro Atila = new Cachorro();
        
        Raça.setIdade(25);
        System.out.println("Idade:"+Raça.getIdade());
}
}
