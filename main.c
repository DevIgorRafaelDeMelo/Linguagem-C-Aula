
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // Variaveis em C
    float salario;
    int idade;
    char nome[20];
    bool verdade;

// Contantes
#define PI 3.1416;
#define MSG_ERRO "ERRO !"

    // Atribuição
    idade = 42;
    verdade = true;

    // Operadores Aritimeticos
    // + Soma
    // - Subtração
    // * Multiplicação
    // / Divisão

    //  Operadores Relacionais
    // > Maior que
    // <= Maior ou igual a
    // < Menor que
    // >= Menor ou igual a
    // == Igual
    // != Diferente

    // Operadores Logicos
    //  ! Negação
    //  && Conjunção
    //  !! Disjunção

    // Funções intrinsecas
    // ceil(x)  Aredendo o valor caso a variavel seja de decimal
    // abs(x) Traz o valor positivo
    // floor(x) Arredonda para baixo
    // log(x) Calcula o logaritimo
    // log10(x) Calcula o lagaritimo na base 10
    // pow(x,y) Eleva x na y
    // sqrt(x) Traz a raiz quadrada

    // Leituda de dados
    // scanf("<Tipo_Variavel>",&<Variavel>);

    // Escrita
    // printf("texto <tipo_variavel>", <variavel>)

    // Especificadores de formatos
    // %d int
    // %f float
    // %e double
    // %c char
    // %s Vetor de char

    // Caracters especiais importantes
    // \n pula linha
    // \0 fin de uma string
    // \ indica que o proximo caractere, caso seja especial devera ser interpretado literamnete
    // \t Insere uma tebulção (tad)
    // \b retrocesso
    // ' ' indica espaço
    // \f Salta de pagina de formulário

    // Estrutura de condição

    // Simples
    // if(<expressão lógica >){
    // <Bloco de comando>
    // }

    // Composta
    // if(<expressão lógica>){
    // <Bloco de comando>
    // }
    // else{
    // <Bloco de comando>
    // }

    // Estrutura de condisão multiplas
    // switch(<variavel>){
    //      case <valor 1>: <Blco de comando>
    //          break;
    //      case <valor 1>: <Blco de comando>
    //          break;
    //      case <valor 1>: <Blco de comando>
    //          break;
    //      case <valor 1>: <Blco de comando>
    //          break;
    //      default: <Bloco de comando padrao>
    //          break;
    // }

    // Estruturas de repetição
    // for(<inicialização>;<Teste>;<incrmento>){
    // <Bloco de comando>
    // }

    // Estrutura de repetição por condição
    // while(<Condição>){
    // <Bloco de codigo>
    // };

    // do{
    //   <Bloco de comando>
    // }while(<Expressão Lógica>);

    // Vetores
    // Homogeneo unidimencional
    // <Tipo> <Nome> [<Tamanho>];
    // int A[10]
    // Atribuição
    // int A[] = {1,2,3}
    // Acessar dados do vetor
    // NomeVetor[<indice>];

    // Atribuição de strinf a tipo char
    // strcpy(<variavel>,"Valor")

    // Contruindo um veter de do tipo da struct
    // struct produto lista[10]
    // Para acessar o dados do vator
    // lista[<indice>].local = valor;

    // Matriz
    // int A[3][3]
    // Agregando valores
    // int A[3][3]  = {{1,2,3},(4,5,6),{7,8,9}};

    // Dados Heterogeneas{
    // struct <Nome do dados>
    // <Tipo> <Nome>
    // <Tipo> <Nome>
    // };

    // Funções
    // <tipo> <Nome da função>(<Parametros>);
    // Declaração da função
    // <tipo><>Nome da função>(<parametros>){
    //    <Bloco de comando>
    // }

    // Declaração
    // float convertePesso(float quiulos){
    //   float gramas;
    //   gramas = quilos *1000;
    //   return gramas;
    // }

    // Chamada de função
    // valor = convertePeso(kg)

    // Procedimento
    // void Nomedo Procedimento(){
    //    <Bloco de codigo>
    // }

    // Chamda de procediemnto
    // NomedeProcedimento();

    // fopen(nomedoarquivo,modedeabertura);
    // Modos de aberturas
    // r - abre apenas para leitura
    // w - Cria um arquivo para escrita
    // a - Anexo novos dados
    // r+ Abre para leitura e escrita
    // w+ Cria arquivos para leituras e escrita
    // a+ Anexo dados ou cria novo arquivos p/ leitura e escrita

    // fclose(arq) - Fecha o arquivo

    return 0;
}
