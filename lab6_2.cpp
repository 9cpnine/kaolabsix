#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double d){
    return d*M_PI/180;}
    
double rad2deg(double r){
    
double findXComponent(double b1, double b2, double c1, double c2){
    return (b1*cos(c1)) + (b2*cos(c2));}
    
double findYComponent(double d1, double d2, double e1, double e2){
    return (d1*sin(e1)) + (d2*sin(e2));}
    
double pythagoras(double lx, double dx){
    return sqrt(pow(lx,2) + pow(dx,2));}
    
void showResult(double r1, double r2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
    cout << "Length of the resultant vector = " << r1 << endl;
    cout << "Direction of the resultant vector (deg) = " << r2 << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;}
    
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}