#include <stdio.h>
#include <iostream>
//#include <cstdlib>
#include <string>
//#include <cstring>
#include <vector>

using namespace std;

//int asukkaat = 3;
//int listanKoko = 50;
//int count = 0;
//string* hlo1 = new string [listanKoko];
//string* hlo2 = new string [listanKoko];
//string* hlo3 = new string [listanKoko];
vector<string> vhlo1;
vector<string> vhlo2;
vector<string> vhlo3;

void tulostaInfo(){

   cout << "=== Solukämppäsovellus ===\n" << endl;
   cout << " - Ohjelmaan syötetään kolmen henkilön ostoslistat.\n";
   cout << " - Syötä ostoksia listaan yksi kerrallaan.\n";
   cout << " - Ostoksia voi olla maksimissaan 50 per henkilö.\n";
   cout << " - Päätä kyseisen henkilön lista tyhjällä rivillä. \n";
   cout << " - Kun viimeisen henkilön lista on kirjattu, \n";
   cout << "   poistu ohjelmasta tyhjällä rivillä. \n" << endl;

}

void tulostaLista(vector<string> lista){
  cout << "\n" << endl;
  cout << "Listalla: " << endl;
  vector <string>::iterator It;
  for (It = lista.begin(); It != lista.end(); ++It)
    cout << *It << '\n';
    cout << endl;

}

void luoOstosLista(vector<string> lista){
  //while (count < size) {
  //    cout << "\nSyötä ostos: \n";
  //    string temp;
  //    cin >> temp;
  //    //int pit = temp.size();
  //    if(!temp.empty()){
  //      arr[count] = temp;
  //      count++;
  //      tulostaLista(arr, count);
  //    //  cout << pit << endl;
  //    } else {
  //      cout << "entteriä " << endl;
   //}
  //  }
  string ostos;
  cout << "Ostos:" << endl;
  while (getline(cin, ostos)){
          if (ostos.empty()){
          break;
     } else {
       lista.push_back(ostos);
       tulostaLista(lista);
    cout << "Ostos(tai <enter>):" << endl;
     }
   }
}

int main(void)
{

tulostaInfo();

cout << "Henkilö 1\n" << endl;
luoOstosLista(vhlo1);
cout << "Henkilö 2\n" << endl;
luoOstosLista(vhlo2);
cout << "Henkilö 3\n" << endl;
luoOstosLista(vhlo3);
cout << "Kaikkien listat: \n" << endl;
cout << "Henkilö 1\n" << endl;
tulostaLista(vhlo1);
cout << "Henkilö 2\n" << endl;
tulostaLista(vhlo2);
cout << "Henkilö 3\n" << endl;
tulostaLista(vhlo3);

}



  //while (getline(cin, exit))
 //{
//     if (exit.empty()){
//         break;
//    } else {
//      luoOstosLista(hlo1, listanKoko);
//    }
 //}
