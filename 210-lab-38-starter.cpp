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
    int choice;
    do{
        cout<<"Record functions:"<<endl;
        cout<<"[1]Insert Code"<<endl;
        cout<<"[2]Is code in records"<<endl;
        cout<<"[3]Remove code from record"<<endl;
        cout<<"[4]Print out BST Preorder "<<endl;
        cout<<"[5]Exit Record functions"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                break;
            case 2:

        }
    }while(choice!=5);

    return 0;
}