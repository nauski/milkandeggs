#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int listanKoko = 50;
int count = 0;

void tulostaLista(string arr[], int size){
  std::cout << "\n" << std::endl;
  std::cout << "Listalla: " << std::endl;

  for(int i = 0; i < size; i++){
    std::cout << arr[i]  << std::endl;
  }
}

void luoLista(string arr[], int size){
  while (count < size) {
      cout << "\nSyötä ostos: \n";
      std::string temp;
      cin >> temp;
      arr[count] = temp;
      count++;
     tulostaLista(arr, count);
      }
}

int main(void)
{

 std::cout << "=== Solukämppäsovellus ===\n" << std::endl;
 std::cout << " - Ohjelmaan syötetään kolmen henkilön ostoslistat.\n";
 std::cout << " - Syötä ostoksia listaan yksi kerrallaan.\n";
 std::cout << " - Ostoksia voi olla maksimissaan 50 per henkilö.\n";
 std::cout << " - Päätä kyseisen henkilön lista tyhjällä rivillä. \n";
 std::cout << " - Kun viimeisen henkilön lista on kirjattu, \n";
 std::cout << "   poistu ohjelmasta tyhjällä rivillä. \n" << std::endl;


 string* hlo1 = new string [listanKoko];
 string* hlo2 = new string [listanKoko];
 string* hlo3 = new string [listanKoko];

luoLista(hlo1, listanKoko);

}
