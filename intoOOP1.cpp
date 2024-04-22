#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        string nama;
        int umur;
        string jurusan;

        void output() {
            cout << "nama : " << nama << endl;
            cout << " Umur : " << umur << endl;
            cout << "jurusan : " << jurusan << endl;
        }
    
};

class Matakuliah{
    private:
        string KodeMK;
        string namaMK;
        int sks;
    public : 
        void input() {
            cout << "kode MK : ";   
            cin >> KodeMK;
            cout << "Nama MK : ";
            cin >> namaMK;
            cout << "SKS : ";
            cin >> sks;
        }

    void output() {
        cout << "Kode MK : " << KodeMK << endl;
        cout << "Nama MK : " << namaMK << endl;
        cout << "SKS : " << sks << endl;
    }
};