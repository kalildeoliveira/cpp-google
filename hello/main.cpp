/*Modifique o programa acima para exibir "Hello World!"
Quatro vezes em uma linha para 6 linhas, cada uma impressa em um campo de 17 espaços.   - Neste caso usa-se a função setw();
Use for-loops para fazer isso.*/

#include <iostream>
#include <iomanip>                                        // para usar setw();

using namespace std;

int main()
{
    cout <<  std::setiosflags(ios::left);                 // este recurso alinha o texto à esquerda (Flags = bandeiras)
    
    for (size_t i=0; i<6; i++)                            // loop de seis linhas
    {
            for(size_t j=0; j<4; j++)                     // loop de quatro colunas
            {
                //if (j!=0)
                //    cout<<"\t\t";                      // quando o iterador chega no início da linha (j==0), não dá tab
                //if (j==0 && i!=0)                      // ele não pula linha na primeira iteração de "i", ou seja, na linha 0
                //{
                //    cout<<endl;
                //}
                //cout << "Hello world!";
                cout << setw(17) << "Hello World!";     // insere 17 espaços a cada iteração, inclusive na primeira
            }
            cout<<endl;                                 // no final de cada iteração, quebra uma linha
    }
    return 0;
}
