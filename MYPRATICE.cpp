/*#include<iostream>
using namespace std;
int main(){
    cout<<"hello world";
    return 0;
}
*/

/*#include <iostream>
namespace college{
    int marks=90;
}
namespace school{
    int marks=80;
}
int main () {
    std::cout<<"college ::marks="
    <<college ::marks<<std::endl;
    std::cout<<"school::marks="
    <<school:: marks<<std::endl;
    return 0;
}
*/

/*#include <iostream>
#include<string>

class student{
public:
    std::string name;
    int age;

};
 int main(){
    student s1;
    student s2;
    student s3;

    s1.name="sanju"; s1.age =30;
    s2.name="dhoni"; s2.age=42;
    s3.name="raina"; s3.age=40;

    std::cout<< s1.name<<" is "<<s1.age<<std::endl;
    std::cout<< s2.name<<" is "<<s2.age<<std::endl;
    std::cout<< s3.name<<" is "<<s3.age<<std::endl;
    return 0;
 }
*/


/*#include<iostream>
using namespace std;
class vehicle{
public:
    void move(){
        cout<<"moving";
    }
};
class car : public vehicle{
    public:
    void move(){
        cout<<"car is moving";
    }
};
int main(){
    car c;
    c.move();
    return 0;
}*/

/*#include<iostream>
using namespace std;
class student{
    public:
    static int code;
};
int student::code=0;
int main()
{
    student s1,s2,s3;
    cout<<"intial count "<<student::code<<endl;
    student::code++;
    cout<<"after 1 round "<<student::code<<endl;
    student::code++;
    cout<<"after 2 round "<<student::code<<endl;
    student::code++;
    cout<<"after 3 round "<<student::code<<endl;
    return 0;
}
*/

/*#internal question 1
#include<iostream>
using namespace std;
class Bank{
    int accno;
    float balence;
    public:
    Bank(int a, float b)
    {
        accno=a;
        balence=b;
    }
    void deposit(float amount)
    {
        balence+=amount;
    }
    void withdraw(float amount)
    {
        if(amount<=balence){
            balence-=amount;
        }
        else{
            cout<<"insufficient balence:\n";
        }
    }
    void display(){
        cout<<"account number:"<<accno<<endl;
        cout<<"balence:rs"<<balence<<endl;
    }
};
int main(){
    Bank b1(101,5000);
    b1.display();
    b1.deposit(1000);
    b1.withdraw(500);
    b1.display();
    return 0;
}*/

/*#include<iostream>
using namespace std;
namespace circle{
    double area(int r){
        cout<<"area of circle:"<<3.14*r*r<<endl;
    }}
namespace rectangle{
    double area(float l,float b){
        cout<<"area of rectangle:"<<l*b<<endl;
    }}
int main(){
    circle::area(5);
    rectangle::area(4,6);
}*/