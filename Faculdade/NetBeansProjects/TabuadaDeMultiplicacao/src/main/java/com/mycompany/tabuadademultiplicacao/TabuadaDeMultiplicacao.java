/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.tabuadademultiplicacao;

import javax.swing.JOptionPane;

/**
 *
 * @author emili
 */
public class TabuadaDeMultiplicacao {

    public static void main(String[] args){
        int num;
        int cont;
        String result = "";
        try {
             num = Integer.parseInt(JOptionPane.showInputDialog("Forneça um número"));
        for (cont = 1; cont <= 10; cont++){
        String aux = num + " x " + cont + " = " + (num * cont);
        result = result.concat(aux);
        if(cont < 10){
            result = result.concat("\n");
        }
       }
        JOptionPane.showMessageDialog(null, result);
        
        }catch (Exception e) {
        JOptionPane.showMessageDialog(null, "ERRO!\nInforme um número válido!");
        }
    }
}
