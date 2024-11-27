# PixEd

- Receba uma sequência de entradas e acumule-as na fila. 
- Quando a fila atingir seu máximo, as transferências devem ser
efetivadas para a saída.  

O tipo PixED deve ser um tipo struct e cada struct PixED deve ser armazenada em 
uma Fila de buffer com tamanho máximo de N elementos (N também é fornecido).
- Cada transferência (PixEd) é identificada por  
  - conta origem (int), 
  - conta destino (int),
  - valor a ser transferido (float).

Quando a Fila fica cheia, as transações devem ser executadas (exibidas na tela); 
A variável valor deverá ser impressa com apenas 2 casas decimais. Ao final de 
uma linha de transferência, deverá ser impresso um ‘\n’.


## Entrada
- Número inteiro N que delimita o tamanho da fila.
- Sequência de PixEDs, um para cada linha. 
- Cada linha possui três valores separados por espaço (id_orig, id_dest e valor).
- Caso de entrada nula: quando id_orig e id_dest forem iguais a zero, 
simultaneamente, o programa deverá esvaziar a fila (fazendo as transferências 
restantes, se houver) e encerrar.

## Saída
- A cada entrada não nula: o programa deverá inserir a transferência lida na fila.
- Caso a fila esteja cheia, é necessário esvaziá-la. 
- Cada PixED deverá ser impresso entre parênteses e separados por vírgula. 
- Por exemplo, a saída “(1, 2, 2.25),(5, 3, 2.26),” mostra que no momento da
impressão, a fila tinha duas transferências a serem efetivadas, na ordem da 
esquerda para a direita (a transferência (1, 2, 2.25), foi cadastrada primeiro). 
Perceba a existência de um espaço simples entre os campos do PixED, porém entre
um PixED e outro não há espaços (apenas vírgula). 
- Por simplicidade, é permitido fazer transferência de uma conta para outra de
mesmo id. Ao final da impressão das transferências, é preciso imprimir um ‘\n’.