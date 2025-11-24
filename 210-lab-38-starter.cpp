// COMSC-210 | Lab 38 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"

using namespace std;

//C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-Lab-36\\codes.txt
int main() {
    IntBinaryTree tree;
    
    cout<<"Please enter file path"<<endl;
    string filepath="C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-Lab-36\\codes.txt";
    //cin>>filepath;
    ifstream file(filepath);
    if(!file){
        cout<<"could not open file";
        return 1;
    }
    string line;
    while(getline(file,line)){
        tree.insertNode(line);
    }
    // confirms a random code i chose is actually inside of the BST
    cout<< tree.searchNode("aYOI03yd");
    // prints out said BST
    tree.displayPostOrder();
    

    return 0;
}