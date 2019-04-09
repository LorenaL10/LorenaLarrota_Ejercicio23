#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_leex(string filenamex);
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


void ejemplo_leex(string filenamex){
  ifstream infile; 
  string line;

  infile.open(filenamex); 
  
  cout << "Leyendo de " << filenamex << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    double lineas=getline(infile, line);
    double datos_x[20];
   for(int i=0; i<21; i++){
    datos_x[i]=lineas;
  }
  infile.close();
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
