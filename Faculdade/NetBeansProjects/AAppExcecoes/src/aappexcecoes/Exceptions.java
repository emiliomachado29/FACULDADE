/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aappexcecoes;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JOptionPane;

/**
 *
 * @author emili
 */
public class Exceptions {
    
    public void exemploExcecao(){
        
    int numer[] = {4, 8, 16, 32, 65, 128, 256};
    int denom[] = {2, 0, 4, 4, 0, 8};
    
    for(int i=0; i<numer.length; i++)
    {
        try{
        System.out.println(numer[i]+" / "+ denom[i]
                + " é " + numer[i]/denom[i]);
        
        }catch(RuntimeException e){
            System.out.println("Não é possível dividir por zero!");
        }//catch(ArrayIndexOutOfBoundsException ex){
               // System.out.println("Posição do vetor inexistente!");
       // }
    }
    }
    
    public void throws01()throws Exception{
    
        System.out.println("Iniciando o Método 1");
        try {
            throws02();
        } catch (Exception ex) {
            System.out.println("Erro de formato de dado!");
        }
        System.out.println("Saindo do Método 1");
    }

    public void throws02()throws Exception{
        System.out.println("Iniciando Metodo 2");
        Integer idade = 0;
        idade = Integer.parseInt(JOptionPane.showInputDialog("Digite a idade:"));
            
        System.out.println("A idade é:"+idade);
        System.out.println("Saindo do Metodo 2");
        }
    
    public void lerArquivoTXT(){
        BufferedReader reader = null;
        try {
            String file = "fileTest.txt";
            reader = new BufferedReader (new FileReader(file));
            String currentLine = reader.readLine();
            System.out.println("Dados:"+currentLine);
        } catch (FileNotFoundException ex) {
            System.out.println("Arquivo não encontrado!");
        } catch (IOException ex) {
            System.out.println("Erro ao acessar o arquivo!");
        }finally{ //fechar o arquivo
            if(reader!=null)
                try {
                    reader.close();
            } catch (IOException ex) {
                    System.out.println("Erro ao fechar o arquivo!");
            }
        }
    }
}


