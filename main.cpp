// Online C++ compiler (editor)
// Write and run C++ online using this editor.
using namespace std;
#include <iostream>

int main() {
string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"masukkan nama "<<endl;
    cin>>nama;
    cout<<"masukkan nama sekolahmu   "<<endl;
    cin>>sekolah;
  cout<<"namamu adalah   ";
  cout<<nama <<endl;
  cout<<"sekolahmu di   ";
  cout<<sekolah <<endl;
        cout<<"apakah anda mau mengulang, tekan y atau Y "<<endl;
        cin>>ulang;
    }
        while (ulang=="y"||ulang=="Y");
        system("pause");
    return 0;
}
