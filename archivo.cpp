#include <fstream>
#include <iostream>
using namespace std;
 
float ejemplo_leex(string filenamex);
void ejemplo_leey(string filenamey);

int main () {
  string filenamex;
  filenamex = "valores_x.txt";
  ejemplo_leex(filenamex);
  
  string filenamey;
  filenamey= "valores_y.txt";
  ejemplo_leey(filenamey);
 
 return 0;
  
}


float ejemplo_leex(string filenamex){
  ifstream infile; 
  string line;
  int i=0;

  infile.open(filenamex); 
  
  cout << "Leyendo de " << filenamex << endl; 
  getline(infile, line);
  while(infile){
    double datos_x[20];
    datos_x[i]=atof(line.c_str());
    i++
    getline(infile, line);
  }
  infile.close();
   return datos_x;
}
   
 void ejemplo_leey(string filenamey){
  ifstream infile; 
  string line;

  infile.open(filenamey); 
  
  cout << "Leyendo de " << filenamey << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
