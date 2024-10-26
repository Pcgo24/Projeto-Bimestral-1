//Projeto Bimestral 1
//Trabalho com o Vitor Bobato


/*Salario do Funcionario Efetivado = 2000
  Salario do Funcionario temporario = 75 * numero de dias
   Salario de Estagiario = 800*/

//ra vitor = 2022114186

#include <iostream>
#include <string>

using namespace std;

int main (void) 
{
    
string cad {};
string end {};
string nome{};
string cpf {};
string admis {};
string funci {};
int ra {};
string senha {};



    
    cout << "Ola, por favor informe se o senhor(a) possui cadastro: " << endl; 
    getline(cin, cad);
    
    //Funcionario cadastrado
    if ((cad == "sim") || (cad == "Sim") || (cad == "SIM"))
    {
        
        cout << "Informe o seu RA: " ;
        cin >> ra;
        if (ra == 2022216048)
        {

            cout << "Informe a senha: ";
            cin >> senha;

            if (senha == "nao")
            {
                double srio_cto {};
                double srio_desc {};
                double srio_comdesc {};
                double hora_ex {};
                double val_hor {};
                double srio_liq {};

                val_hor = 6.25;
                srio_cto = 5000;
                srio_desc = srio_cto * 0.14;
                srio_comdesc = srio_cto - srio_desc;
                cout << "\nNome do funcionario: Paulo Cesar Cardoso Domingues." << endl;
                cout << "Endereco: Rua Padre Salvador Renna, 1151." << endl;
                cout << "CPF: 523.687.967-34" << endl;
                cout << "Data de admissao: 06/02/2023." << endl;
                cout << "Tipo de funcionario: CTO." << endl;
                cout << "\nVoce fez quantas horas extras: ";
                cin >> hora_ex;
                cout << "\nO seu salario bruto eh: R$" << srio_cto << "." << endl;
                cout << "\nO desconto eh: R$" << srio_desc << "." << endl;
                srio_liq = srio_comdesc + (val_hor * hora_ex);
                cout << "\nO valor da hora extra eh: R$" << val_hor << "." << endl;
                cout << "\nE o salario liquido eh: R$" << srio_liq << "." << endl;

            }
            else
            {
                cout << "SENHA INCORRETA!!" << endl;
            }
        }
         if (ra == 2022114186)
        {
            cout << "Informe a senha: ";
            cin >> senha;
         if (senha == "1505")
         {
            
            double srio_ceo {};
                double srio_desc {};
                double srio_comdesc {};
                double hora_ex {};
                double val_hor {};
                double srio_liq {};

                val_hor = 6.25;
                srio_ceo = 5000;
                srio_desc = srio_ceo * 0.14;
                srio_comdesc = srio_ceo - srio_desc;
            
                cout << "\nNome do funcionario: Vitor Bobato." << endl;
                cout << "Endereco: Rua Cleber Machado, 640." << endl;
                cout << "CPF: 123.532.525-34" << endl;
                cout << "Data de admissao: 06/02/2023." << endl;
                cout << "Tipo de funcionario: CEO." << endl;

                cout << "\nVoce fez quantas horas extras: ";
                cin >> hora_ex;
                cout << "\nO seu salario bruto eh: R$" << srio_ceo << "." << endl;
                cout << "\nO desconto eh: R$" << srio_desc << "." <<endl;
                srio_liq = srio_comdesc + (val_hor * hora_ex);
                cout << "\nO valor da hora extra eh: R$" << val_hor << "." << endl;
                cout << "\nE o salario liquido eh: R$" << srio_liq << "." << endl;

            }
            else
            {
                cout << "SENHA INCORRETA!!" << endl;
            }
    }
    }
    //Cadastro de novo funcionario
    if ((cad == "nao") || (cad == "Nao") || (cad == "NAO"))
    {
        cout << "Para comecarmos o seu cadastro, primeiro informe o seu nome: ";
        getline (cin, nome);
        
        cout << "Agora informe o seu endereco: ";
        getline (cin, end);

        cout << "Informe o seu CPF: ";
        getline (cin, cpf);

        cout << "Qual foi o dia da sua admicao: ";
        getline (cin, admis);

        cout << "Voce eh um funcionario efetivado, temporario ou estagiario?" << endl;
        getline (cin, funci);


        cout << "\nNome do funcionario: " << nome << "." << endl;
        cout << "Endereco: " << end << "." << endl;
        cout << "CPF: " << cpf << "." << endl;
        cout << "Data de admissao: " << admis << "." << endl;
        cout << "Tipo de funcionario: " << funci << "." << endl;

        
    }
           //Funcionario efetivado
             if ((funci == "efetivado") || (funci == "Efetivado") || (funci == "EFETIVADO"))
            {
                double srio_ef {};
                double srio_desc {};
                double srio_comdesc {};
                double hora_ex {};
                double val_hor {};
                double srio_liq {};

                val_hor = 6.25;
                
                //Conta salario e desconto
                srio_ef = 2000;
                srio_desc = srio_ef * 0.09;
                srio_comdesc = srio_ef - srio_desc;
                
                cout << "\nVoce fez quantas horas extras: ";
                cin >> hora_ex;
                cout << "\nO salario de um funcionario Efetivado na nossa empresa eh de R$2.000,00." << endl <<
                "O desconto previdenciario para salarios maiores que R$1.903,99 ate R$2.826,65 eh de 7,5 porcento do salario." << endl;
                cout << "\nO seu salario bruto eh: R$" << srio_ef << "." << endl;
                cout << "\nO desconto eh: R$" << srio_desc << "." << endl;
                srio_liq = srio_comdesc + (val_hor * hora_ex);
                cout << "\nO valor da hora extra eh: R$" << val_hor << "." << endl;
                cout << "\nE o salario liquido eh: R$" << srio_liq << "." << endl;
        


                //Estagiario
            }
            else if ((funci == "estagiario") || (funci == "Estagiario") || (funci == "ESTAGIARIO"))
            {   
                double srio_estag {};
                srio_estag = 800;

                cout << "O salario de um Estagiario na nossa empresa eh de R$800,00." << endl <<
                "Nao possui desconto previdenciario por ser um valor menor que R$1.903,99." << endl;
                cout << "\nO seu salario eh: R$" << srio_estag << "." << endl;

                //Funcionario Temporario
            }
            else if ((funci == "temporario") || (funci == "Temporario") || (funci == "TEMPORARIO"))
            {

                int num_dias {};
                double srio_temp {};
                double srio_total {};

                cout << "Por favor informe o numero de dias que voce vai trabalhar: ";
                cin >> num_dias;

                srio_temp = 75;
                srio_total = srio_temp * num_dias;

                cout << "O salario de um Funcionario Temporario na nossa empresa eh de R$75,00 por dia." << endl <<
                "Nao possui desconto previdenciario por ser um valor menor que R$1.903,99." << endl;
                cout << "\nO seu salario eh: R$" << srio_total << "." << endl;
            }


            else 
            {
                cout << "RA INVALIDO!!" << endl;
            }

}