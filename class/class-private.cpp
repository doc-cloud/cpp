#include <iostream>
 
using namespace std;

class Box {
public:
	double length;
	void setWidth(double wid);
	double getWidth(void);
private:
	double width;
};

void Box::setWidth(double wid)
{
	width = wid;
}

double Box::getWidth(void)
{
	return width;
}

int main()
{
	Box box;
	 box.length = 10.0; // OK: 因为 length 是公有的
	    cout << "Length of box : " << box.length <<endl;

	    // 不使用成员函数设置宽度
	//box.width = 10.0; // Error: 因为 width 是私有的
	       box.setWidth(10.0);  // 使用成员函数设置宽度
	          cout << "Width of box : " << box.getWidth() <<endl;
	return 0;
}