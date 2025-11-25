// COMSC-210 | Lab 38 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"

using namespace std;


int main() {
    IntBinaryTree tree;
    cout<<"Please enter file path"<<endl;
    string filepath;
    getline(cin,filepath);
    ifstream file(filepath);
    if(!file){
        cout<<"could not open file"<<endl;
        return 1;
    }
    else{
        cout<<"Opened file!"<<endl;
    }
    string line;
    while(getline(file,line)){
        tree.insertNode(line);
    }
    int choice;
    string input;
    do{
        cout<<"Record functions:"<<endl;
        cout<<"[1]Insert Code"<<endl;
        cout<<"[2]Is code in records"<<endl;
        cout<<"[3]Remove code from record"<<endl;
        cout<<"[4]Print out BST Preorder <-this one is very long "<<endl;
        cout<<"[5]Exit Record functions"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter code to add to the records"<<endl;
                cin>>input;
                tree.insertNode(input);
                cout<<"Added to the records!"<<endl;
                break;
            case 2:
                cout<<"Enter code to search for:"<<endl; 
                cin>>input;
                if(tree.searchNode(input)){
                    cout<<"Code is inside of the records!"<<endl;
                }
                else{
                    cout<<"Code is not inside of the records!"<<endl;
                }
                break;
            case 3:
                cout<<"Enter code to remove:"<<endl;
                cin>>input;
                tree.remove(input);
                cout<<"Code removed"<<endl;
                break;
            case 4:
                tree.displayPreOrder();
                break;
            case 5:
                cout<<"Exiting...";
                break;

        }
    }while(choice!=5);

    return 0;
}