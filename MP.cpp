#include <iostream>
#include <cassert>
 
using namespace std;
 
class Polo
{
public:
  string polo()
  {
    return " Polo!";
  }
};
 
class Marco
{
private:
    Polo polo;
public:
    string marco()
    {
        return "Marco!" + polo.polo();
    }
    Marco(Polo p){
    polo = p;
    }
    
};
 
int main()
{
  Polo p;
  Marco m = Marco(p);
  cout << m.marco() << endl;
  assert(m.marco() == "Marco! Polo!");
 
  return 0;
}
