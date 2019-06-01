//#include <GL/glut.h>
#include <iostream>
#include "automatas.h"
#include "read.h"

using namespace std;

int main()
{

  Automata<int, int> g(true, true);
  string file;

  cout << "Ingresa nombre de file::";
  cin >> file;
  g.readFile(file);
  g.print();

  auto bfs = g.BFS(2);
  cout << "\n**************************\n";
  cout << "             BFS " << endl;
  cout << "**************************\n";
  bfs->print();

  return EXIT_SUCCESS;
}