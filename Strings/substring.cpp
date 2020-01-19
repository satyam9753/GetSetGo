#include <iostream>
#include <string.h>

using namespace std;
int main() {
   string str1 = "An apple a day keeps the doctor away.";
   string str2 = str1.substr(1, 3);
   string str3 = str1.substr(5, 6);

   cout << "Substring starting at position 11 and length 3 is: " << str2 <<endl;
   cout << "Substring starting at position 0 and length 6 is: " << str3;
   return 0;
}
