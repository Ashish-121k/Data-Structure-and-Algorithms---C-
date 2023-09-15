#include<iostream>
using namespace std;

float area_of_circle(int r){

    float area;
    area = 3.14*r*r;
    return area;


}
int main()
{
    int r;
    cin>>r;
    area_of_circle(r);
    float x = area_of_circle(r);   //x can be rename to area
    cout<<"area is : "<<x<<endl;
    return 0;
}
