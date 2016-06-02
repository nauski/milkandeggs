#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

vector<string> vhlo1;
vector<string> vhlo2;
vector<string> vhlo3;
vector<string> yhteiset;
vector<string> kaikki;

void tulostaInfo(){
   cout << "=== Solukämppäsovellus ===\n";
   cout << " - Ohjelmaan syötetään kolmen henkilön ostoslistat.\n";
   cout << " - Syötä ostoksia listaan yksi kerrallaan.\n";
   cout << " - Päätä kyseisen henkilön lista tyhjällä rivillä. \n";
   cout << " - Kun viimeisen henkilön lista on kirjattu, \n";
   cout << "   poistu ohjelmasta tyhjällä rivillä. \n" << endl;
}

void tulostaLista(vector<string> lista){

  cout << "Listalla: " << endl;
  vector <string>::iterator It;
  for (It = lista.begin(); It != lista.end(); ++It)
    cout << *It << "\n";
    cout << endl;
}

void luoLista(vector<string> &lista){
  string ostos;
  cout << "Ostos:" << endl;
  while (getline(cin, ostos)){
          if (ostos.empty()){
          break;
     } else {
       lista.push_back(ostos);
       tulostaLista(lista);
    cout << "Ostos(tai <enter>): " << endl;
     }
   }
}

void yhdistaListat(vector<string> &toinen){

  kaikki.insert(kaikki.end(), toinen.begin(), toinen.end());

}

void teeListaDuplikaateista(vector<string> &kaikki) {

  vector<string> tmp = kaikki;
  for (int i = 0; i < tmp.size(); i++) {
      //Position current = tmp.at(i);
      for (int j = i+1; j < tmp.size(); j++) {
           if (tmp[i] == tmp[j]) {
              yhteiset.push_back(tmp[i]);
           }
      }
  }
}

template <typename Type>
void poistaDuplikaatit(vector<Type> &vec) {
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

int main(void)
{

tulostaInfo();

cout << "Henkilö 1" << endl;
luoLista(vhlo1);
cout << "Henkilö 2" << endl;
luoLista(vhlo2);
cout << "Henkilö 3" << endl;
luoLista(vhlo3);
cout << "Kaikkien listat: \n" << endl;
cout << "Henkilö 1" << endl;
tulostaLista(vhlo1);
cout << "Henkilö 2" << endl;
tulostaLista(vhlo2);
cout << "Henkilö 3" << endl;
tulostaLista(vhlo3);

yhdistaListat(vhlo1);
yhdistaListat(vhlo2);
yhdistaListat(vhlo3);
cout << "KAIKKI OSTOKSET: \n" << endl;
teeListaDuplikaateista(kaikki);
poistaDuplikaatit(kaikki);
tulostaLista(kaikki);
poistaDuplikaatit(yhteiset);
cout << "YHTEISET OSTOKSET: \n" << endl;
tulostaLista(yhteiset);
cout << "====================== \n" << endl;

}
