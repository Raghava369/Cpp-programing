#include<iostream>
using namespace std;
class data
{
	private:
		int feet,inches;
	public:
		void set_data()
         {
         	cout<<"enter feet and inches"<<endl;
         	cin>>feet>>inches;
		 }
		 void get_data()
		 {
		 	cout<<feet<<" "<<inches<<endl;
		 }
		 void add_(data d1,data d2)
		 {
		 	feet=d1.feet +d2.feet;
		 	inches=d1.inches + d2.inches;
		 	if(inches>=12)
		 	{
		 		feet=feet+1;
		 		inches=inches-12;
			 }
		 }
};
main()
{
	data d1,d2,d3;
	d1.set_data();
	d2.set_data();
	d3.add_(d1,d2); 
	d3.get_data();
}
