#include <iostream>
using namespace std;

int Global = 69;

int main(){
    int Global = 70;

    cout<<Global<<endl;
    cout<<::Global<<endl;
    
    return 0;
}
// Local Variable has high Preference
