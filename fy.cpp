#include <iostream>

using namespace std;

int main() {
  int matriks1[100][100], matriks2[100][100], hasil[100][100];
  int i, j, k, a, b, c, d, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> a;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> b;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> c;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> d;

  if(b != c){
    cout << "Matriks tidak dapat dikalikan satu sama lain"<<endl;
  } else {
    cout << "Masukkan elemen matriks pertama: "<<endl;
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: "<<endl;
    for(i = 0; i < c; i++){
      for(j = 0; j < d; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < a; i++){
      for(j = 0; j < d; j++){
        for(k = 0; k < c; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << "Hasil perkalian matriks: "<<endl;
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }

  }

  return 0;
}
