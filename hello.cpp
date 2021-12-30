/*
    https://code.visualstudio.com/docs/cpp/config-wsl
    https://docs.google.com/spreadsheets/d/18E7yJs7iFVTQKPy-owKboqVjs_nsoiYMKt7Zk7YSr_E/edit#gid=894115448
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
