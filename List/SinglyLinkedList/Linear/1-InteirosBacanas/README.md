# Inteiros Bacanas

Dizemos que um inteiro positivo é bacana se ao somarmos os quadrados de seus dígitos e repetirmos essa operação 
sucessivamente, obtivermos o número 1.  
Por exemplo, 1900 é bacana, pois 1900 → 82 → 68 → 100 → 1.  
(1900 → 82) 1² + 9² + 0² + 0² = 1 + 81 + 0 + 0 = 82 e assim sucessivamente.

Faça um programa em linguagem C, usando listas dinâmicas, para receber como entrada um número inteiro e gerar a lista 
encadeada do processo de julgamento de um número como bacana. Os nós na lista devem ser adicionados até que a informação 
do último nó tenha apenas 1 dígito. Ao final, imprima a lista e emita o parecer sobre o número: “bacana” ou “non-bacana” 
dependendo se é bacana ou não.

### Sugestão de roteiro:
a. Crie uma lista chamada solution e armazene o inteiro lido como entrada.  
b. Crie um procedimento para ler o número inteiro e gerar uma lista dinâmica contendo cada um de
seus dígitos (basta ir pegando o resto da divisão por 10 e ir dividindo o inteiro por 10 para diminuí-lo).  
c. Crie uma extensão da lista (uma função do tipo TLinkedList_) que receba a lista gerada na etapa (b) e devolva um 
inteiro resultante da soma dos quadrados de seus dígitos (nós);  
d. Insira o número resultante na lista solution criada na etapa (a).

DICA 1: adicione um ponteiro fim ao seu nó descritor da lista e adapte os métodos de inserção.  
DICA 2: crie um método para retornar o número inteiro do último nó da lista para o teste se o número é bacana ou não.