#include <iostream>
#include <stdio.h>
#include "caeser_cipher_encryption.cpp"

using namespace std;

int main(){
  string encrypted_text;
  cout<<"Enter the encrypted text"<<endl;
  getline(cin, encrypted_text);
  int shift;
  cout<<"Enter the shift"<<endl;
  cin>>shift;
  cout<<"The decrypted text is"<<endl;
  cout<<caeser_cipher_decryption(encrypted_text,shift)<<endl;
  return 0;
}
