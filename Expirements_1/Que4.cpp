#include <iostream>
using namespace std;
int main()
{
    int height,width,area=0,perimeter=0;
    cout<<"Enter height of rectangle : ";
    cin>>height;
    cout<<"Enter width of rectangle :";
    cin>>width;
    area=height*width;
    perimeter=2*(height+width);
    cout<<"Area of rectangle : "<<area<<endl;
    cout << " perimeter of rectangle :"<<perimeter<<endl;
    return 0;
}