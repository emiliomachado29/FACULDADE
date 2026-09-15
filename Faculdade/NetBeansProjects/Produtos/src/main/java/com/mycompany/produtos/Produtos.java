/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.produtos;

import javax.swing.JOptionPane;

/**
 *
 * @author emilio
 */
public class Produtos {

    public static void main(String[] args){
    String nomeProduto = "Produto Teste";
    double valProduto = 2000;
    double valorDesconto = 25;
    double valPrdDesconto = 25 ;

    {
        if (valProduto >= 50 && valProduto < 200) {
            valorDesconto = valProduto * 0.05;
            valPrdDesconto = valProduto - valorDesconto;
            JOptionPane.showMessageDialog(null, "Nome Produto: " + nomeProduto + "\n"
                    + "Valor Original do Produto: " + valProduto + "\n"
                    + "Valor do Produto com Desconto: " + valPrdDesconto);
        } else if (valProduto >= 200 && valProduto < 500) {
            valorDesconto = valProduto * 0.06;
            valPrdDesconto = valProduto - valorDesconto;
            JOptionPane.showMessageDialog(null, "Nome Produto: " + nomeProduto + "\n"
                    + "Valor Original do Produto: " + valProduto + "\n"
                    + "Valor do Produto com Desconto: " + valPrdDesconto);
        } else if (valProduto >= 500 && valProduto < 1000) {
            valorDesconto = valProduto * 0.07;
            valPrdDesconto = valProduto - valorDesconto;
            JOptionPane.showMessageDialog(null, "Nome Produto: " + nomeProduto + "\n"
                    + "Valor Original do Produto: " + valProduto + "\n"
                    + "Valor do Produto com Desconto: " + valPrdDesconto);
        } else if (valProduto >= 1000) {
            valorDesconto = valProduto * 0.08;
            valPrdDesconto = valProduto - valorDesconto;
            JOptionPane.showMessageDialog(null, "Nome Produto: " + nomeProduto + "\n"
                    + "Valor Original do Produto: " + valProduto + "\n"
                    + "Valor do Produto com Desconto: " + valPrdDesconto);
        }
        else if (valProduto <= 0) {
            JOptionPane.showMessageDialog(null, "Esse valor não pode ser calculado");
        }
    }
  }
}
