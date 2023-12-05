# Rascunho

#Aula ponteiro

ponteiro é o endereço de onde começa

função que pede espaço na memoria enquanto usa ( ? = malloc(quantidade de espaço reservado) )


Nome, tipo, conteúdo e endereço

Na declaração da variavel existe um '*'

int x; 
int * y; (ponteiro para inteiro)

&x -> printado mostrara o endereço da variavel;

o conteudo de um ponteiro tem o endereço de um ponteiro;

x = 3;
variavel sozinha é conteudo; 
 
ponteiro recebe endereço de variavel 
y = &x;

*y = 6;
função é uma COPIA;


colinha
int x = 2;
int * y ;
y = 8;

(x)  ((-> y) ponteiro y))
( endereço ) &x =  A, 0;
( endereço ) &y = B, 0;
y = &x;

printf("%d", x);  2
printf("%d", y);  A, 0
pirntf("%d", &x);  A, 0
printf("%d", &y);  B, 0
printf("%d", y);  2


typedef struct aluno
{
  int n1;
  int n2;
  } aluno;

  int main ()
  {
  aluno a, *b;#include <stdio.h>


typedef struct aluno
{
    int a;
    char b;
    char d;
    int c;

}aluno;


int main()
{
    aluno * turma ; 
    turma = (aluno*)malloc(sizeof(aluno) * 50);
    printf("Tamannho de aluno em bytes: %d\n", sizeof(aluno));
    print("\n\n");

    turma[0].a = 10;

    return 0;
}
  a.n1 = 10;
  b = &a;

  (*b). n1 = 9;  ( b -> n1 = 9 )

  int *ptr;
  ptr = malloc(4(copia do conteúdo 4));
  *ptr = 3;


ptr =malooc( sizeof(int)* 10);

definindo o tipo cast
ptr = (int*) malloc(sizeof(int)*10);

Bom em! (teoria dos blocos)
typedef struct teste
{
int a;
char b;
int c;
char d;
} teste;

main ()
{
x = sizeof(teste);
teste a;
}

realloc

--------------------


*/ #include <stdio.h>


typedef struct aluno
{
    int a;
    char b;
    char d;
    int c;

}aluno;


int main()
{
    aluno * turma ; 
    turma = (aluno*)malloc(sizeof(aluno) * 50);
    printf("Tamannho de aluno em bytes: %d\n", sizeof(aluno));
    print("\n\n");

    turma[0].a = 10;

    return 0;
}

/*




ponteiro dublo 

int ** ptr;
int *ptr2;
int x = 2; 

ptr2 = &x;
ptr = &ptr2;#include <stdio.h>


typedef struct aluno
{
    int a;
    char b;
    char d;
    int c;

}aluno;


int main()
{
    aluno * turma ; 
    turma = (aluno*)malloc(sizeof(aluno) * 50);
    printf("Tamannho de aluno em bytes: %d\n", sizeof(aluno));
    print("\n\n");

    turma[0].a = 10;

    return 0;
}

printf("%d", ptr);


--------------------------------




