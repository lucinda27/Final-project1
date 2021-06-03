#ifndef Book_H
#define Book_H
#include <string>
using namespace std;

class Book
{
      private:
      string passage;

      public:
      Book();
      void setPassage(const string p);
};
#endif
