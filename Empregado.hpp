#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    std::string nome;
    double salarioHora;  
  double horas_trabalho;



  double pagamentoMes(double horasTrabalhadas) {
 
      double resultado_horas = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double calculo_horas = horasTrabalhadas - 8;
        resultado_horas += calculo_horas / 2;
      }
	  return resultado_horas * salarioHora;
    }
	
};

#endif
