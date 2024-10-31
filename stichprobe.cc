#include <iostream>
#include <fstream>
#include<cmath>


int main(){
// 1a) Compute the mean 
std::ifstream fin("datensumme.txt");
double summe = 0.0;
int a;
int N = 0;
for(int i=1; i<235; i++){ // loop through lines
    fin >> a;
    summe += a;
    //std::cout << summe << std::endl;
  }
fin.close();
double mean = summe/234;
std::cout << "Mean: " << mean << std::endl;

std::ifstream fin2("datensumme.txt");
// 1b)  Varianz
double variance_helper = 0;
for(int i=1; i<235; i++){ // loop through lines
    fin2 >> a;
    variance_helper += pow(a - mean,2);
    //std::cout << summe << std::endl;
  }
fin2.close();
double variance = variance_helper/ 234;
std::cout << "Variance: " << variance << std::endl;

//1c) standard deviation
std::cout << "Standard Deviation: " << sqrt(variance) << std::endl;
}