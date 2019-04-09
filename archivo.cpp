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
 
 return 0;
  
}


void ejemplo_leex(string filenamex){
  ifstream infile; 
  string line;

  infile.open(filenamex); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
   
 void ejemplo_leey(string filenamey){
  ifstream infile; 
  string line;

  infile.open(filenamey); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
