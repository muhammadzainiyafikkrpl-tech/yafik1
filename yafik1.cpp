#include <iostream>
using namespace std;

int main() {
    string nama, kelas;
    char ulang;

    do {
        cout << "Masukkan nama: ";
        cin >> nama;

        cout << "Masukkan kelas: ";
        cin >> kelas;

        cout << "\nNama: " << nama;
        cout << "\nKelas: " << kelas;

        cout << "\n\nInput lagi? (y/n): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai.";

    return 0;
}
