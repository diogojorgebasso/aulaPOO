#include <iostream>
#include <locale>
using namespace std;

/**
 * Classe Livro
 * Responsável pela entrada de dados de um livro e sobrecarga de operadores
 * Os livros são identificados UNICAMENTE pelo ISBN
 * Por isso sobrecarregamos o operador == para comparar dois livros pelo ISBN
 */
class Livro
{
private:
  string titulo;
  string autor;
  string isbn;
  string editora;
  int anoPublicacao;
  bool disponivel;
  double preco;
  int quantidadeEmEstoque;

public:
  Livro() : titulo(""), autor(""), isbn(""), editora(""), anoPublicacao(0), disponivel(true), preco(0), quantidadeEmEstoque(0) {}
  Livro(string titulo, string autor, string ISBN, string editora, int anoPublicacao, double preco, int quantidadeEmEstoque)
      : titulo(titulo), autor(autor), isbn(ISBN), editora(editora), anoPublicacao(anoPublicacao), disponivel(true), preco(preco), quantidadeEmEstoque(quantidadeEmEstoque) {}

  // Getters
  string getTitulo() const { return titulo; }
  string getAutor() const { return autor; }
  string getEditora() const { return editora; }
  int getAnoPublicacao() const { return anoPublicacao; }
  bool numeroDisponivel() const { return disponivel; }
  double getPreco() const { return preco; }
  int getQuantidadeEmEstoque() const { return quantidadeEmEstoque; }

  // Setters
  void setTitulo(string titulo) { this->titulo = titulo; }
  void setAutor(string autor) { this->autor = autor; }
  void setEditora(string editora) { this->editora = editora; }
  void setAnoPublicacao(int anoPublicacao) { this->anoPublicacao = anoPublicacao; }
  void setDisponivel(bool disponivel) { this->disponivel = disponivel; }
  void setPreco(double preco) { this->preco = preco; }
  void setQuantidadeEmEstoque(int quantidadeEmEstoque) { this->quantidadeEmEstoque = quantidadeEmEstoque; }

  friend istream &operator>>(istream &is, Livro &book)
  {
    cout << "Título: ";
    getline(is, book.titulo);

    cout << "Autor: ";
    getline(is, book.autor);

    cout << "Editora: ";
    getline(is, book.editora);

    cout << "ISBN: ";
    getline(is, book.isbn);

    cout << "Ano Publicação: ";
    is >> book.anoPublicacao;

    cout << "Preço: ";
    is >> book.preco;

    book.disponivel = true;

    return is;
  }

  friend ostream &operator<<(ostream &os, const Livro &book)
  {
    os << "Título: " << book.titulo << endl;
    os << "Autor: " << book.autor << endl;
    os << "Editora: " << book.editora << endl;
    os << "ISBN: " << book.isbn << endl;
    os << "Disponível: " << (book.disponivel ? "sim" : "não") << endl;

    return os;
  }

  bool operator==(const Livro &book) const
  {
    return isbn == book.isbn;
  }

  bool operator!=(const Livro &book) const
  {
    return isbn != book.isbn;
  }
};

int main(void)
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  Livro livro1;
  cin >> livro1;
  cout << livro1 << endl;

  Livro isbnLivro;
  cout << "Vamos checar se temos livros iguais:" << endl;
  cin >> isbnLivro;
  if (isbnLivro == livro1)
    cout << "Livro repetido" << endl;
  if (isbnLivro != livro1)
    cout << "Livro não encontrado" << endl;
}