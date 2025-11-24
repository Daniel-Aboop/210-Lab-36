#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    tree.insertNode("yeah");
    tree.insertNode("nop");
    tree.displayInOrder();

    return 0;
}