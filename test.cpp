#include<iostream>

class MyClass{
    public:
    void myFunc(int x){
        cout << x;
    }
};

class MyOtherClass: public MyClass{
    public:
        MyOtherClass(int a, int b): MyClass

}