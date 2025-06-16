#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

auto caeser_cipher_encryption(string original_text,int shift){
  string encrypted_text;
  for(int i = 0; i < original_text.size(); i++){
    if (original_text[i]!=' '){
      char a = original_text[i];
      int b = int(a) - 97;
      shift%=26;
      b+=shift;
      b%=26;
      b+=97;
      char d = char(b);
      encrypted_text += d;
    }
    else{
      encrypted_text += " ";
    }
  }
  return encrypted_text;
}

auto caeser_cipher_decryption(string encrypted_text, int shift){
  string decrypted_text;
  for (int i = 0; i < encrypted_text.size(); i++){
    if (encrypted_text[i]!=' '){
      char a = encrypted_text[i];
      int b = int(a) - 97;
      shift%=26;
      b-=shift;
      b+=26;
      b%=26;
      b+=97;
      char d = char(b);
      decrypted_text += d;
    }
    else{
      decrypted_text += " ";
    }
  }
  return decrypted_text;
}
