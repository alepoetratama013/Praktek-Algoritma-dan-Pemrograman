#include <iostream>
using namespace std;

int main()
{
    cout << "TUGAS PRAKTIKUM ALGORITMA" << endl;
    cout << "-------------------------------" << endl;
    int NIM;
    double uts, uas;
    double nilai_akhir;
    string nama;

    cout << "Nama       :"; getline(cin,nama);
    cout << "NIM        :"; cin >> NIM;
    cout << "Nilai UTS  :"; cin >> uts;
    cout << "Nilai UAS  :"; cin >> uas;
    cout << endl;
    nilai_akhir = ((uts+uas)/2);

    cout << "Hai, nama saya " << nama << ", NIM " << NIM << endl;
    cout << "Nilai akhir saya " << nilai_akhir << endl;

    cin.get();
    cin.get();
    return 0  ;

}
