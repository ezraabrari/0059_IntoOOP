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
}