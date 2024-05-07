#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
    string nama;

    public:
    friend void seetNama(mahasiswa &a, string b);
};

void setNama(mahasiswa &a, string b)
{

};