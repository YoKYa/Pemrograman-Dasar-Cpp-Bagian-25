#include <iostream>

using namespace std;

// Prototype
int Persegi(int S);
int Persegi(int P, int L);

int main(){
    system("cls"); // Membersihkan Layar Console/Terminal
    
    // Fungsi Persegi Variabel S
    cout << "Fungsi Persegi 1 : " << Persegi(5) << endl << endl;

    // Fungsi Persegi Variabel P dan L
    cout << "Fungsi Persegi 2 : " << Persegi(5,10) << endl << endl;

    cin.get();
    return 0;
}


int Persegi(int S){
    return S*S;
}

int Persegi(int P, int L){
    return P*L;
}