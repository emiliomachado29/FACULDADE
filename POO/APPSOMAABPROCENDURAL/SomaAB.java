/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package appsomaabprocedural;

/**
 *
 * @author emili
 */
public class SomaAB {
//Atributos
   private double A;
   private double B;
   
    public SomaAB(){
//Construtores
//Vazios
    A = 0.0;
    B = 0.0;
    }

    public SomaAB(Double x, Double y){
//Com parâmetros
    A = x;
    B = y;
    }
//Getters and Setters
    public double getA() {
        return A;
    }

    public void setA(double A) {
        this.A = A;
    }

    public double getB() {
        return B;
    }

    public void setB(double B) {
        this.B = B;
    }
    
    public void somaAB(){
        System.out.println("A + B:"+(A+B));
    }
}
