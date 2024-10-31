#include <iostream>
#include <fstream>
#include<cmath>

int main(){
std::ifstream fin("datensumme.txt");
std::ifstream fin2("datensumme.txt");
std::ofstream outmean("mittelwerte.txt");
std::ofstream outvariance("varianzen.txt");

for(int i = 1; i< 27; i++){
  //Mean
  double summe = 0.0;
  for(int j = 1; j< 10; j++){
    // 1a) Compute the mean 
    int a;
    fin >> a;
    summe += a;
    //std::cout << summe << std::endl;

  }
  double mean = summe/9;
  std::cout << i << " Mean: " << mean << std::endl;
  outmean << mean << std::endl;

  //Variance
  double variance_helper = 0.0;
  for(int i=1; i<10; i++){ // loop through lines
    int a;
    fin2 >> a;
    variance_helper += pow(a - mean,2);
    //std::cout << summe << std::endl;
  }
  double variance = variance_helper/ 9;
  std::cout << "Variance: " << variance << std::endl;
  outvariance << variance << std::endl;
}
fin.close();
fin2.close();
outmean.close();
outvariance.close();


std::ifstream inmean("mittelwerte.txt");
std::ifstream invariance("varianzen.txt");
double summe = 0;
double a;
for (int j = 1; j < 27; j++)
{
  inmean >> a;
  summe += a;
}
double mean_mean = summe / 26;

std::cout << "Mean of the Means: " << mean_mean << std::endl;

double summe2 = 0;
double a2 = 0;
for (int j = 1; j < 27; j++)
{
  invariance >> a2;
  summe2 += a2;
}
double mean_var = summe2 / 26;

std::cout << "Mean of the Variance: " << mean_var << std::endl;
}
