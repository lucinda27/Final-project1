#include <iostream>
#include <string>
#include "Cipher.h"
#include "Object.h"
using namespace std;

int main() {
  Cipher c;
  c.enCipher();
  c.deCipher();
  
  Letter l;
  l.setMessage();
  
  Book b;
  b.setPassage();
}
