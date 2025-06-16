#include <iostream>
#include <stdio.h>
#include "caeser_cipher_encryption.cpp"
#include <sstream>
using namespace std;

int main(){
  string original_text;
  cout<<"Enter the original text"<<endl;
  getline(cin, original_text);
  int shift;
  cout<<"Enter the shift"<<endl;
  cin>>shift;
  cout<<"The encrypted text is"<<endl;
  cout<<caeser_cipher_encryption(original_text,shift)<<endl;
  return 0;
}
