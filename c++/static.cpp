#include <iostream>
using namespace std;
class st
{
static int a;
int b;
public:

static void geta(int a){
    cout<<"a is"<<a;
}
};
int st::a;
 int main(){
    st a;
    st::geta(6);
 }