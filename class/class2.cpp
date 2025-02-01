#include<iostream>
using namespace std;
class grandfather{
public:
// base(){
// cout<<"Hello from base class constructor: "<<endl;
// }
void hellopublic(){
    cout<<"Hello from public function"<<endl;
}
private:
void hellopriv(){
    cout<<"Hello from private function "<<endl;
}
protected:
void helloprotected(){
    cout<<"Hello from protected function "<<endl;
}
};
class father:public grandfather{
public:
// derived(){
//     cout<<"Hello from  public derived class constructor: "<<endl;
// }
// void derivfunc(){
//     cout<<"Hello from derived function"<<endl;
//     helloprotected();
//     hellopublic();
// }
};
class child: public father{
public:
void multilevinher(){
hellopublic();
helloprotected();
}
};  
int main(){
child object;
father object1;
object.hellopublic();
object1.hellopublic();
return 0;
}