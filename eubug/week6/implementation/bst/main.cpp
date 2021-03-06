#include <iostream>

using namespace std;

#include "bst.hpp"

int main() {
  BST bst;

#if 0
  bst.insert(50);
  bst.insert(30);
  bst.insert(70);
  bst.insert(20);
  bst.insert(40);
  bst.insert(60);
  bst.insert(80);
  bst.inorder();

  bst.remove(20);
  bst.inorder();
  bst.remove(30);
  bst.inorder();
  bst.remove(50);
  bst.inorder();
#endif

  bst.insert(7);
  bst.insert(6);
  cout << "search for 7: " << bst.search(7) << endl;
  cout << "search for 10: " << bst.search(10) << endl;
  bst.insert(15);
  bst.insert(10);
  bst.insert(17);
  bst.insert(16);
  bst.insert(19);
  bst.insert(18);
  cout << "search for 18: " << bst.search(18) << endl;
  bst.insert(25);
  bst.inorder();

  bst.remove(15);
  bst.inorder(); 

  return 0;
}
