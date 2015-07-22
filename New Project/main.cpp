#include <iostream>

using namespace std;

int main()
{
   struct timespec ts;
   ts.tv_sec = 3;
   nanosleep(&ts, NULL);  // wait 3 seconds
    
   cout << "Hello World" << endl; 
   
   return 0;
}

