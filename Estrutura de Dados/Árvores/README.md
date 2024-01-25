# Árvores
São estruturas não lineares, consiste em nós conectador por arestas. Cada nó tem um valor e zero ou mais nós filhos, formando uma hierarquia.

![image](https://github.com/GabrielRoOl/C/assets/144238400/6da62326-7392-4db5-b444-e64ff8cc5a02)
## Inserção
Adicionando novos elementos a árvore usando o método recursivo.

![image](https://github.com/GabrielRoOl/C/assets/144238400/e31953a6-96d6-4e7e-853e-8c6d1e94077a)
## Iserindo Estrutura em Árvore

![image](https://github.com/GabrielRoOl/C/assets/144238400/2a790a03-92f9-469e-9adc-d9cf4d03d685)

# Remoção
### Caso 1
Nó a ser removido não tem filho: o nó PAI aponta para NULL
### Caso 2
Nó a ser removido só tem um filho: o nó PAI aponta para esse filho
### Caso 3
Nó a ser removido tem 2 filhos: o nó é substituído pelo nodo mais à direita do seu nó esquerdo. Ou pelo nó mais à esquerda do seu nó direito.
