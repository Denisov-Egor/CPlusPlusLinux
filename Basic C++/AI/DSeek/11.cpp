#include <iostream>

using namespace std;

int ew(int a, int b) {
   if (a > b)
   {
    return a;
   }else
   {
    return b;
   }
   
   
}

int main() 
{

 int x = 10, y = 25;
    
    cout << "Большее из " << x << " и " << y << " = " << ew(x, y) << endl;
}