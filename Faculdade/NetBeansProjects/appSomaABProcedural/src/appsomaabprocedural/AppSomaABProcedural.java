/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package appsomaabprocedural;

/**
 *
 * @author emili
 */
public class AppSomaABProcedural {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      //somaAB(5.5,2.79);  
      SomaAB soma = new SomaAB(3.33,3.33);
      //chamando o método que soma os dois valores
      soma.somaAB();
    }

    private static void somaAB(double par, double par1) {
        System.out.println("A + B:"+(par+par1));
    }
    
}
