/*Modifique o programa acima para exibir "Hello World!"
Quatro vezes em uma linha para 6 linhas, cada uma impressa em um campo de 17 espa�os.   - Neste caso usa-se a fun��o setw();
Use for-loops para fazer isso.*/

#include <iostream>
#include <iomanip>                                        // para usar setw();

using namespace std;

int main()
{
    for (size_t i=0; i<6; i++)                            // loop de seis linhas
    {
            for(size_t j=0; j<4; j++)                     // loop de quatro colunas
            {
                //if (j!=0)
                //    cout<<"\t\t";                      // quando o iterador chega no in�cio da linha (j==0), n�o d� tab
                //if (j==0 && i!=0)                      // ele n�o pula linha na primeira itera��o de "i", ou seja, na linha 0
                //{
                //    cout<<endl;
                //}
                //cout << "Hello world!";
                cout << setw(17) << "Hello World!";     // insere 17 espa�os a cada itera��o, inclusive na primeira
            }
            cout<<endl;                                 // no final de cada itera��o, quebra uma linha
    }
    return 0;
}
