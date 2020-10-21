#include "Engenheiro.cpp"
#include "Vendedor.cpp"
#define TAM 3

int main() {
    
  int i;
  int j;
//eng e vend sao vetores que recebem dados dos vendedores e engenheiros
  Vendedor *vend=new Vendedor[TAM];
  Engenheiro *eng=new Engenheiro[TAM] ;
  //enserindo dados do engenheiro 1
  eng[0].nome = "Joao Snow";
  eng[0].salarioHora = 35;
  eng[0].projetos = 3; 
  eng[0].horas_trabalho=9.5;
   
  
  //inserindo dados do engenheiro 2
  
  eng[1].nome = "Daniela Targaryen";
  eng[1].salarioHora = 30;
  eng[1].projetos = 1; 
  eng[1].horas_trabalho=8;
 
 
    //inserindo dados do engenheiro 3

  eng[2].nome = "Bruno Stark";
  eng[2].salarioHora = 30;
  eng[2].projetos = 2; 
  eng[2].horas_trabalho=8;
   //imprimindo dados engenheios  
   for( i=0;i<TAM;i++){
        std::cout << "Nome: " << eng[i].nome << std::endl;
        std::cout << "Salario Mes: " << eng[i].pagamentoMes (eng[i].horas_trabalho) << std::endl;
        std::cout << "Projetos: " << eng[i].projetos << std::endl;
        std::cout << std::endl;
      
    }
   
   
    //inserindo dados do vendedor 1
  
  vend[0].nome = "Tonho Lannister";
  vend[0].salarioHora = 20;
  vend[0].quotaMensalVendas = 5000;
  vend[0].horas_trabalho=6;
  
    //inserindo dados do vendedor 2

  vend[1].nome = "Jose Mormont";
  vend[1].salarioHora = 25;
  vend[1].quotaMensalVendas = 3000;
   vend[1].horas_trabalho=8;
  
	  //inserindo dados do vendedor 3
  vend[2].nome = "Sonia Stark";
  vend[2].salarioHora = 30;
  vend[2].quotaMensalVendas = 4000;
  vend[2].horas_trabalho=8;
  //imprimindo dados do vendedores
for( j=0;j<TAM;j++) {
     std::cout << "Nome: " << vend[j].nome << std::endl;
        std::cout << "Salario Mes: " << vend[j].pagamentoMes (vend[j].horas_trabalho) << std::endl;
        std::cout << "Quota vendas: " << vend[j].quotaTotalAnual () << std::endl;
        std::cout << std::endl;
        
    }
  delete [] eng;
  delete [] vend;
  return 0;	
}
