#include <iostream>
using namespace std;
string caesar(int, string);

int main() {
  string Plaintext;
  cout << "請輸入明文:";
  cin >> Plaintext;

  int key;
  cout << "請輸入鎖鑰:";
  cin >> key;
  
  //密文
  string ciphertext = caesar(key, Plaintext);

  //輸出
  cout << "密文為:" << ciphertext;
}

//加密函式
string caesar(int key, string Plaintext) {
  for(int i = 0; i < Plaintext.size(); i++) {
    cout << Plaintext[i] << '\n';
    //大寫
    if(Plaintext[i] >= 'A' && Plaintext[i] <= 'Z') {
      Plaintext[i] += key;
      if(Plaintext[i] >= 'Z'+1) {
        Plaintext[i] -= 26;
      }
    }
    //小寫
    else if(Plaintext[i] >= 'a' && Plaintext[i] <= 'z') {
      Plaintext[i] += key;
      if(Plaintext[i] >= 'z'+1) {
        Plaintext[i] -= 26;
      }
    }
  }
  //回傳密文(加密後明文)
  return Plaintext;
}
