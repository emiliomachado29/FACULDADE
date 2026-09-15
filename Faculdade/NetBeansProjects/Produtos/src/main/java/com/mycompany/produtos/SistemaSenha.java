/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.produtos;

import javax.swing.JOptionPane;

/**
 *
 * @author emilio
 */
public class SistemaSenha {

    public static void main(String[] args) {
        String user = "JAVA";
        String senha = "JAVA";
        int tentativas = 0;
        boolean continuar = true;

    
        do {
        String login = JOptionPane.showInputDialog("Forneça um login");
        String senhaInformada = JOptionPane.showInputDialog("Forneça uma senha");
        if (login.equals(user) && senhaInformada.equals(senha)) {
            JOptionPane.showMessageDialog(null, "Login e Senha aceitos!");
            continuar = false;
        } else {
            JOptionPane.showMessageDialog(null, "FALHA!,verifique Login e Senha");
            tentativas++;
        }
    }while(continuar == true && tentativas < 3);
    }
    
}
