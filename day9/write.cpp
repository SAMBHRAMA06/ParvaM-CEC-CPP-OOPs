#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //We have defined the write object from the ofstream class
    ofstream write("a.txt"); //Opening the fiels and writing in the fils using write object
    write << " Good Morning Students, " << endl;
    write << " We shall work on File Hnadling! " << endl;
    write.close(); //Closing hte file after writing

    ofstream fout("b.txt");
    fout << "Writtten in the file using another user-defined ogject: fout";
    fout.close();

    //We can use any word to make and object, Ex: write, out, fout, fwrite,
}