#include<iostream>  //biblioteca no cabeçalho.
using namespace std;
#include <string>

int main(){
cout << "Hello World" << "\n\n";

  int composicaoFamiliar;
  float salarioMinimoNominal2020 = 1039.00;
  float salarioNecessarioDieeseJan2020 = 4347.61;
  float composicaoRenda;
  //double mediaSalarial = composicaoRenda / salarioMinimoNominal;


  cout << "Digite o numero de pessoas que moram com você: ";
    cin >> composicaoFamiliar;
        if (composicaoFamiliar != 1 || 0){
            cout << "\nLegal! Seu nucleo familiar eh composto por " << composicaoFamiliar << " pessoas." << "\n"; //So vai imprimir se a condição for verdadeira.
        }else {
            cout << "\nLegal! Seu nucleo familiar eh composto por " << composicaoFamiliar << " pessoa." << "\n";
        }
  cout << "\nAgora, me diga qual a renda bruta do seu domicílio.\nLembre-se de somar o rendimento de todos os membros, certo?\n\nR$  ";
    cin >> composicaoRenda;
    cout << "\nEntendi! A renda bruta do seu nucleo familiar eh de R$ " << composicaoRenda << " mensais." << "\n\n";

    //cout << "A sua renda equivale a " << mediaSalarial << " salarios mínimos.\n\n\n\n";

cout << "\nVocê sabia que o ....DIZER O QUE e SALaRIO. No Brasil, o Estado definiu que o salario minimo deve ser capaz de satisfazer as necessidades de alimentacao, habitacao, vestuario, higiene e transporte\n\n\n";


  if (composicaoFamiliar != 1 || 0){
    cout << "Você acha que esta renda é suficiente para cobrir o custo de vida de vocês, considerando as necessidades de alimentacao, habitacao, vestuario, higiene e transporte?" << "\n\n";
  } else{
    cout << "Você acha que esta renda é suficiente para cobrir seu custo de vida, considerando as necessidades de alimentacao, habitacao, vestuario, higiene e transporte?" << "\n\n";
  };

/* VOLTAR A TRABALHAR NISSO EM OUTRA HORA
string sim;
sim = "sim", "Sim", "acho", "Acho", "Acho que sim", "Claro", "claro", "obvio", "Obvio";
string nao;
nao = "Nao", "nao", "Nao acho", "Claro que nao", "claro que nao", "Obvio que nao", "obvio que nao";

cin >> sim, nao;

if ( cin >> = sim ){
    cout << "\nExcelente! Fico feliz porque você está conseguindo viver com tranquilidade.";
    }else {
        cout << "\nE inadimissivel que pessoas como você não acesse ao mínimo necessário para viver!";
    }
//se não respondeu com sim ou não, imprime else << "Não entendi. Tente responder com sim ou nao, por gentileza.";

// aqui poderia entrar uma lógica de verdadeiro e falso?

*/







cout << "\n\n\n\n\n\n\n\n";
cout << "NOTAS TECNICAS:\n"
            << "Para fins de calculo foram considerados os valores, do salário nominal e do salario necessario, referentes ao mes de janeiro.\n"
            << " outra nota "
            << "\n\n";

return 0;
}
