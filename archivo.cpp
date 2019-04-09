#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename);


int main () {
  string filenamex;
  filenamex = "valores_x.txt";
  ejemplo_lee(filenamex);
  
  string filenamey;
  filenamey= "valores_y.txt";
  ejemplo_lee(filenamey);
  
}


void ejemplo_lee(string filenamex, string filenamey){
  ifstream infile; 
  string line;

  infile.open(filenamex); 
   infile.open(filenamey);
 
  cout << "Leyendo de " << filenamex << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }
   
  cout << "Leyendo de " << filenamey << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
