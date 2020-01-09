
#include <boost/algorithm/string.hpp> 
#include <cstdlib> 
#include <iostream> 
#include <string> 
  
using namespace std; 
using namespace boost::algorithm; 
  
int main() 
{ 
  
    string s = "geeksforgeeks"; 
    cout << erase_first_copy(s, "g") << '\n'; 
    cout << erase_nth_copy(s, "g", 0) << '\n'; 
    cout << erase_last_copy(s, "g") << '\n'; 
    cout << erase_all_copy(s, "g") << '\n'; 
    cout << erase_head_copy(s, 5) << '\n'; 
    cout << erase_tail_copy(s, 1) << '\n'; 

    cout << replace_first_copy(s, "_", "-") << '\n'; 
    cout << replace_last_copy(s, "_", "-") << '\n'; 
    cout << replace_all_copy(s, "_", "-") << '\n';
     
    return 0; 
} 