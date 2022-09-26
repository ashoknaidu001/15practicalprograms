#include <iostream> 
using namespace std;

int main()
{
 int i, j;
 // First Part
 for(i=1; i<=5; i++)
 {
  for(j=1; j<i*2; j++) 
  {
   if(j%2 == 0)
    cout << " ";
   else 
    cout << i;
  }
  cout << "\n";
 }
 // Second Part
 for(i=4; i>=1; i--)
 {
  for(j=1; j<i*2; j++)
  {
   if(j%2 == 0)
    cout << " ";
   else 
    cout << i; 
  }
  cout << "\n";
 }
 return 0;
}
