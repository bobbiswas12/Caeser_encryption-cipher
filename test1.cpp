#include <iostream>
#include <stdio.h>
#include "caeser_cipher_encryption.cpp"
using namespace std;

int main(){
  string original_text;
  int shift;
  cin>>"Enter the shift (int)"<<endl;
  cout<<"Enter the original string"<<endl;
  cin>>original_text;
  cout<<"The encrypted text is "<<endl;
  cout<<caeser_cipher_encryption(original_text,shift)<<endl;
  return 0;
}
