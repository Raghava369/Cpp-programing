#include<iostream>
using namespace std;
class details{
	protected:
		int a,b;
	public:
		details(){
			cout<<"enter a and b:";
			cin>>a>>b;
		}
		
};
class get1:public details{
	protected:
		int total;
	public:
		get1(){
			total=a+b;
			cout<<"total of a and b is --  "<<total<<endl;
		}
};
class get2:public get1{
	float avg;
	public:
		get2(){
			avg=(float)total/2;
			cout<<"average is --- "<<avg<<endl;
		}
};
class Marks:{
	protected:
		int c,d;
	public:
		Marks(){
			cout<<"enter c and d :";
		    cin>>c>>d;
		}
		
};
class get:public details ,public Marks{
	public:
		void output(){
			cout<<"a and b values are -- "<<a<<' '<<b<<endl;
			cout<<"c and d values are -- "<<c<<' '<<d;
		}
};

main(){
	get obj;
	obj.output();
}
