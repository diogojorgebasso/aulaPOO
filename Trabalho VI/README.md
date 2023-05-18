# 1ª Lista de Exercícios – ECOP13A

---

## 1. Responda as seguintes questões teóricas:


### a) Quais são os componentes de uma descrição de classe e qual é a sintaxe utilizada para declarar uma classe?

Os componentes de uma Descrição de Classe são os membros `public` ou `private`/`protected`, contendo as funções com seu nível de acesso no respectivo campo.

A sintaxe, por sua vez, utilizada para uma declaração de Classe são:
```cpp
class {identificador}{
    protected:
        variaveis
}
```

### b) O que são funções friend e para que são utilizadas?

As funções `friend` são funções especiais que recebem **atributos** das classes herdadas tanto `private` quanto `protected`-- hierarquicamente mais altas. São utilizadas para ganharem **acesso** à classe herdada.

No entanto, é importante lembrar que o uso excessivo de funções friend pode tornar o código menos modular e difícil de manter. O acesso a membros privados e protegidos pode tornar o código mais difícil de entender e pode impedir a alteração da implementação da classe sem afetar a função friend. Portanto, é recomendável usar funções friend com moderação e preferir métodos públicos sempre que possível.

### c) Qual é a finalidade de um construtor de inicialização e qual é a sintaxe utilizada para declará-lo?

A finalidade de um construtor de inicialização é inicializar os membros de uma classe no momento da criação do objeto. 
A sintaxe utilizada é a seguinte:
```cpp
class Exemplo {
public:
    Exemplo(int a, int b) : x(a), y(b) {
        // corpo do construtor
    }
private:
    int x, y;
};

int main(void){
    Exemplo ex1(1,2);
    ...
    return 0;
}
```
Ou seja, o objeto `ex1` foi criado na main, inicializando os membros.

### d) O que significa sobrecarregar um operador?

A sobrecarga de operador é reescrever funções padrão da biblioteca para abarcar funções mais complexas. Sobrecarregar o símbolo outrora utilizado como outra coisa; por exemplo, o de soma.

```cpp
class Complexo {
private:
    double real;
    double imag;

public:
    Complexo(double r = 0, double i = 0) : real(r), imag(i) {}

    Complexo operator+(const Complexo& outro) const {
        double r = real + outro.real;
        double i = imag + outro.imag;
        return Complexo(r, i);
    }
    ...
};

int main(void){
    Complexo a(2, 3);
    Complexo b(4, 5);

    Complexo c = a + b;

    return 0;
}
```
Ou seja, na `main` o operador '+' foi sobrecarregado para somar além de números reais, os complexos também.

### e) Cite pelo menos uma restrição que deve ser observada para a utilização de vetores de objetos.

Para utilizar um vetor de objeto é necessário possuir um construtor padrão. Isso significa que o número de elementos do vetor deve ser definido antes da compilação do programa.

### f) Explique a razão pela qual é necessário implementar o operador de atribuição (=) e o construtor de cópia em classes que fazem uso de alocação dinâmica de memória em seus membros.

Quando se vai atribuir um objeto noutro, o construtor de cópia é utilizado justamente para fazer isso acontecer. Ademais, obviamente, o operador "(=)" é o responsável pela linguagem de instrução a ser passada.

### g) Qual o motivo pelo qual colocamos o tipo de retorno do operador << como ostream&?

O operador << pertence à biblioteca ostream; portanto, quando a estamos sobrecarregando, é necessário informar onde ela está. 

## 2. Considerando que todos os operadores necessários foram sobrecarregados como funções membros da classe que modela os objetos A, B, C, D e E, represente como cada uma dessas linhas seria "traduzida" pelo compilador. É importante lembrar que cada operador encontrado em uma expressão resultará na chamada de uma função e que as regras de precedência dos operadores serão mantidas.

### a) A+B/C*(D+E) 
### b) (A+B)/C++ 
### c) !A

> OBS: O compilador usará a regra PEMDAS em todas as operações concernentes à matemática. 
a) Segue o passo a passo realizado pelo Compilador

Parênteses: Soma de D e E.
Mutiplicação: Entre C e o parênteses acima.
Divisão: Entre o B e C*(D+E)
Soma: Por fim, será somado o A.

> OBS: No caso do operador de incremento "++", ele tem uma precedência mais alta do que os operadores que utilizam parênteses, como os operadores aritméticos.

b)Segue o passo a passo realizado pelo Compilador

Incremento: Soma-se o valor correspondente na variável C
Parênteses: Soma de A e B
Divisão: Entre o parênteses e o incremento.

c)Segue o passo a passo realizado pelo Compilador

Negação: na variável A

## 3.Responda as questões teóricas:
### a) Qual a sintaxe para utilizar um construtor de uma classe base dentro da classe derivada em c++?


### b) Qual a diferença dos modos de acesso protegido e privativo?

Os métodos de acesso são dois: `private` e `protected`. O primeiro só pode ser acessado dentro da classe na qual foi criado. O segundo pode ser acessado dentro da classe de criação mais as classes herdadas por ela.

### c) Qual sintaxe para declarar uma classe derivada pública de CBase?
Segue abaixo a sintaxe utilizada para declarar uma classe derivada da classe pública `CBase`.

```cpp
class CDiogo: public CBase{
    ...
};
```
### d) O que acontece com um membro público de uma classe base quando ela é usada em uma herança privativa?

Quando uma classe base é usada em uma herança privada, todos os seus membros se tornam membros privados da classe derivada. Portanto, um membro público da classe base se tornará um membro privado da classe derivada e não poderá ser acessado diretamente fora da classe derivada. 

A única maneira de acessar um membro privado é através de métodos públicos da classe derivada que realizam operações nele. A herança privada é usada quando se deseja incorporar os recursos de uma classe base em uma classe derivada, sem expor esses recursos diretamente para o mundo externo.

## 4. Responda as questões teóricas:


### a) O que é uma função virtual pura?

Uma função virtual pura é uma função membro de uma classe abstrata que deve ser implementada nas classes derivadas que a herdam. A declaração da função virtual pura é feita adicionando o " = 0" ao final da declaração da função na classe base.

Exemplo: 
```cpp
class Animal {
public:
   virtual void emitirSom() = 0; // função virtual pura
};

class Cachorro : public Animal {
public:
   void emitirSom() {
      std::cout << "Au Au!" << std::endl;
   }
};

class Gato : public Animal {
public:
   void emitirSom() {
      std::cout << "Miau!" << std::endl;
   }
};

int main() {
   Animal* animal;
   Cachorro cachorro;
   Gato gato;

   animal = &cachorro;
   animal->emitirSom();

   animal = &gato;
   animal->emitirSom();

   return 0;
}
```
### b) O que é uma classe base abstrata?

```cpp
#include <iostream>
using namespace std;

// Classe base abstrata
class Figura {
public:
    // Método virtual puro para calcular a área da figura
    virtual float area() = 0;

    // Método virtual para imprimir informações da figura
    virtual void imprimir() {
        cout << "Área da figura: " << area() << endl;
    }
};

// Classe derivada - Círculo
class Circulo : public Figura {
private:
    float raio;
public:
    Circulo(float r) : raio(r) {}

    float area() override {
        return 3.1415 * raio * raio;
    }

    void imprimir() override {
        cout << "Círculo de raio " << raio << endl;
        Figura::imprimir();
    }
};

// Classe derivada - Retângulo
class Retangulo : public Figura {
private:
    float base, altura;
public:
    Retangulo(float b, float h) : base(b), altura(h) {}

    float area() override {
        return base * altura;
    }

    void imprimir() override {
        cout << "Retângulo de base " << base << " e altura " << altura << endl;
        Figura::imprimir();
    }
};

int main() {
    Figura *f;

    // f = new Figura(); // Erro: não é possível instanciar uma classe base abstrata
    f = new Circulo(5);
    f->imprimir();

    f = new Retangulo(4, 6);
    f->imprimir();

    return 0;
}
```

### c) Qual a diferença entre uma função virtual pura e uma função virtual? Qual a sintaxe utilizada para declará-las?

Uma função virtual pura é uma função abstrata em uma classe base que não tem uma implementação definida e deve ser implementada por qualquer classe derivada que a utilize. É declarada usando "= 0" na sua definição na classe base.

Por outro lado, uma função virtual é uma função que pode ser sobrescrita por uma classe derivada, mas que **tem uma implementação padrão na classe-base**. É declarada usando a palavra-chave `virtual` na sua definição na classe base.

A sintaxe para declarar uma função virtual pura é a seguinte:

```cpp
class ClasseBase {
public:
    virtual tipoRetorno funcaoPura() = 0;
};
```

A sintaxe para declarar uma função virtual é a seguinte:

```cpp
class ClasseBase {
public:
    virtual tipoRetorno funcaoVirtual() {
        // implementação padrão
    }
};
```
### d) Qual a vantagem de usar a resolução dinâmica de métodos ao invés de usar um switch?

A resolução dinâmica de métodos, ou polimorfismo, permite que o comportamento de uma função seja determinado em tempo de execução, com base no tipo do objeto que está sendo usado. Isso é diferente de usar um switch, onde o comportamento é determinado em tempo de compilação, com base em uma decisão explícita do programador.

A principal vantagem da resolução dinâmica de métodos é que ela torna o código mais flexível e extensível. Se novas classes forem adicionadas ao programa mais tarde, elas podem ser facilmente integradas sem afetar o restante do código. Além disso, a resolução dinâmica de métodos permite que o código seja mais genérico, permitindo que diferentes classes implementem a mesma interface de maneiras diferentes.

Por outro lado, o uso de um switch pode tornar o código mais rígido e difícil de manter. Se novas opções forem adicionadas ao switch, todas as referências ao switch precisarão ser atualizadas manualmente. Além disso, o uso de um switch pode tornar o código mais difícil de ler e entender, especialmente se houver muitas opções.

### e) De que forma o *polimorfismo* e a *resolução dinâmica de métodos* podem ser utilizados para ampliar as funcionalidades de um programa?

Ao usar o polimorfismo, é possível criar uma hierarquia de classes com uma classe base e várias classes derivadas. Cada classe derivada pode ter seus próprios métodos e propriedades exclusivas, mas também pode herdar os métodos e propriedades da classe base. Ao chamar um método em um objeto da classe base, o programa pode executar o método correspondente na classe derivada, se houver uma implementação adequada para o método na classe derivada.

A resolução dinâmica de métodos é especialmente útil em situações em que uma decisão sobre qual método deve ser executado só pode ser tomada em tempo de execução. Por exemplo, ao trabalhar com coleções de objetos de diferentes tipos, é possível chamar um método em cada objeto na coleção usando um loop. A resolução dinâmica de métodos garante que o método correto será chamado para cada objeto, independentemente de sua classe.

LICENSA: MIT.