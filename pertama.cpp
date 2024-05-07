#include <iostream>
#include <string>
using namespace std;


class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1};   //objek mhs
    mhs.showNim();         // member acces operator

    mahasiswa &refMhs = mhs; // pointer reference refMhs
    refMhs.nim =2; //member acces operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
}