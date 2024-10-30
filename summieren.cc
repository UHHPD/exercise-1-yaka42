#include <iostream>
#include <fstream>

// Program which can sum over number pairs imported from a txt file.

 int main(){
  std::ifstream fin("daten.txt"); // input
  std::ofstream fout("datensumme.txt"); // output
  int zahl1;
  int zahl2;
  int sum;
  for(int i=1; i<235; i++){ // loop through lines
    fin >> zahl1;
    fin >> zahl2;
    sum = zahl1 + zahl2;
    fout << sum << std::endl;
    //std::cout << "Sum = " << zahl1 + zahl2 << std::endl;
  }
  fin.close();
  fout.close();
}