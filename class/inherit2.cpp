 #include<iostream>
using namespace std;
class A{
    public:
   virtual void fun(){
        cout<<"Hellor form Aclass funtion";
    }  
    void anotherfunciotn(){
        fun();
    }
};

class B : public A{
    public:    
    void fun(){
        cout<<"Hellor form Bclass funtion";
        newFunciont();
    }
    void anotherfunciotn(){
        fun();
    }
    void newFunciont(){
        cout<<"Hello form new funalsdnfa"<<endl;
    }
};

int main(){
    B b_obj;
    A *a_ptr = &b_obj; 
    a_ptr->anotherfunciotn();
    return 0;
}