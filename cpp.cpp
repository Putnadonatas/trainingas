#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{ 
   char *s="labas rytas";
   int sk;

     sk=strlen(s);
   for (int i=0;i<sk;i++,s++)
       {
        cout<<s<<endl;
        }
   cout << "Press the enter key to continue ...";
   cin.get();
   system("pause");
   return EXIT_SUCCESS;
}