//op Overloading
#include<iostream>
using namespace std;
class Image{
	public:
		int height,width;
		Image(int h=0,int w=0)
		{
			height=h;
			width=w;
		}
		Image operator-(Image &obj)//create object obj
		{
			Image result;//create object result
						//100	//200
			result.height=height-obj.height;
						//50	//30
			result.width=width-obj.width;
			return result;
		}
		print()
		{
			cout<<"\n"<<height<<"*"<<width;
			
		}
		
};
main()
{
	Image I1(100,50),I2(200,30);//object1,object2
	Image I3=I1-I2;//object3
	I3.print();
}
