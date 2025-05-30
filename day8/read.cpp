#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    // Syntax for using the getline():
    // getline(object,string)
    getline(read,file_content);
    cout << "The files contains: " << endl;
    cout << file_content <<endl;
    read.close();


    //To print all the line, we need to make use of osme loop
    ifstream show("a.txt");
    string all_lines;
    cout << "The file contains: " <<endl;
    while(getline(show, all_lines));{
        cout << all_lines << endl;
    }
    read.close();

    // to print the first character fo the files
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "The first letter of hte life is: " << letter;
    fin.close();
}