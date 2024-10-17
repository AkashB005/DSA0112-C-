#include<iostream>
using namespace std;
class add{
	private:
		int a,b,c;
	public:
		void getdata(){
			cout << "enter two numbers:";
			cin >> a >> b;
		}
		void display(){
			c=a+b;
			cout << "sum is :" << c;
		}
};
int main(){
	add ob;
	ob.getdata();
	ob.display();
	return 0;
}
