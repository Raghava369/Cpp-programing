#include<iostream>
using namespace std;
class data
{
	private:
		int feet,inches;
	public:
	
	   data(data d1,data d2)
	   {
	   		feet=d1.feet +d2.feet;
		 	inches=d1.inches + d2.inches;
		 	if(inches>=12)
		 	{
		 		feet=feet+1;
		 		inches=inches-12;
			 }
			 cout<<feet<<" "<<inches;
	   }
	   	data()
		{
			cout<<"enter feet and inches"<<endl;
			cin>>feet>>inches;	
			
		}
};
main()
{
	data d1,d2;
	data d3(d1,d2);
}
