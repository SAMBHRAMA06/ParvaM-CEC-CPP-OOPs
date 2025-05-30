#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //fstream headerfiles provide 3 classes:
    //fstreambase
    //ifstream (It is derived by fstreambase) - read from the file
    //ofstream (It is derived by fstreambase) - write from the file
    //writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "Enter your name and age:";
    cin >> name >> age;
    cout << " Hello " << name << "!" << endl;
    cout << " You 're " << age << " years old. " << endl;
    out.close();

    ifstream read(" abd.txt ");
    string line;
    cout << "file Contains: " << line << endl;
    while(getline(read,line)){
        cout << line <<endl;
    }
    read.close(); 
}