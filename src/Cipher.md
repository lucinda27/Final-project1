private:
      int count1=0;
      int count2=0;
      int l;
      int length;

public:
      Cipher();
      void setPlaintext(const string ptext);
      string noSpace();
      int setLength();
      string lowerCase();
      string subString();
      int detPos();
      int movePos();
      int revPos();
      string enCipher();
      string deCipher();
