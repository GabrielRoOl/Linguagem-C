# Lista
É uma coleção de elementos organizados sequencialmente ou linearmente. Cada elemento é chamado de nó, e cada nó contém um tipo de dado e uma referência ao próximo nó na sequência (um ponteiro ou o próximo nó).
## Lista Linear
A lista é organizada de maneira linear, uma após a outra. Os acessos são feitos combase em sua posição na lista.
## Lista Encadeada
Os elementos são armazenados em nós com um valor e um ponteiro/referência para o próximo nó na sequência. Os elementos não precisam estar armazenados em posições contínuas, como em arrays. Cada nó aponta para o próximo nó até que seja atingido o final da lista.
### Exemplo Simples
![image](https://github.com/GabrielRoOl/C/assets/144238400/631a1582-263e-403e-ad91-f4c928ac09d0)
# Recursividade
Recursividade é um conceito em programação no qual uma função chama a sim mesma durante a sua execução. No contexto de funções recursivas, cada chamada subsequente resolve uma instância menor do mesmo problema até atingir um caso base, onde a função para de chamar a si mesma.
A ideia principal da recusividade é dividir um problema em subproblemas menores e resolver cada subproblema individualmente até atingir um caso simples e direto, o caso base, em que a solução pode ser diretamente determinada.
## Caso Base
É a condição usada para que a função recursiva pare de chamar a si mesma.
## Chamada Recursiva
A função inclui uma chamada a si mesma para resolver um subproblema menor, até chegar ao casso Base.
## Progressão em Direção ao Caso Base
Cada camada deve reduzir a complexidade do problema original, movendo-o em direção ao caso base.
### Exemplo Simples
![image](https://github.com/GabrielRoOl/C/assets/144238400/ed1ecbef-4904-49e2-b60e-5c2a3582622f)
# Inserção no Fial
Adicionar um novo nó após o ultimo nó existente na lista. Se a lista estiver vazia, o novo nó se torna o primeiro nó. Se a lista já contiver elementos, o novo nó é adicionado após o último nó, ajustando o ponteiro apropriadamente
