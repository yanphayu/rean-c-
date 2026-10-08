#include <iostream>
using namespace std;

// namespace namespace-name{
//     variables...
//     funcitons..
//     .....
// }
namespace kh{
    string newLine = "\n";
    void greeting(){
        cout << "hello" << newLine;
    }
}
using namespace kh;

int main(){

    kh::greeting();
    cout << "Testing" << kh::newLine;
    cout << "Testing namespace kh" << newLine;

    return 0;
}