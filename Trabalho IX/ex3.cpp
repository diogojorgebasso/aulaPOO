
int main()
{
  try
  {
    CPilha<int> pilhaInt(5);
    pilhaInt.push(10);
    pilhaInt.push(20);
    pilhaInt.push(30);
    pilhaInt.push(40);
    pilhaInt.push(50);

    CPilha<float> pilhaFloat;
    pilhaFloat.push(3.14f);
    pilhaFloat.push(2.718f);
    pilhaFloat.push(1.618f);

    CPilha<char> pilhaChar;
    pilhaChar.push('a');
    pilhaChar.push('b');
    pilhaChar.push('c');

    CPilha<CPilha<int>> pilhaPilha;
    pilhaPilha.push(pilhaInt);
    pilhaPilha.push(pilhaInt);

    // A próxima inserção em pilhaInt deve lançar uma exceção de estouro (overflow)
    pilhaInt.push(60);
  }
  catch (const std::overflow_error &e)
  {
    std::cout << "Erro: " << e.what() << std::endl;
  }

  return 0;
}