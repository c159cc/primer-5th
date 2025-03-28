#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include "learn_Screen.h"
using namespace std;
using namespace std;
/**
> Add the move, set, and display operations to your version of Screen. Test your
class by executing the following code:
```c++
Screen myScreen(5,5,'X');
myScreen.move(4,0).set('#').display(cout);
cout<<"\n";
myScreen.display(cout);
cout<<"\n"
```
 */ 

int main(){
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    
}