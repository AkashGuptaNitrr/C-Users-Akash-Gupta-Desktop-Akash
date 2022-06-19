
#include<bits/stdc++.h>
using namespace std;

void solution(int a, int b, int n)
{
    // traverse for all possible values
    for (int i = 0; i * a <= n; i++) {
  
        // check if it is satisfying the equation
        if ((n - (i * a)) % b == 0) {
            cout << "x = " << i << ", y = " 
                 << (n - (i * a)) / b;
            return;
        }
    }
  
    cout << "No solution";
}

void solution2(int a1, int b1, int c1, int a2, int b2, int c2){
    float res_x,res_y;
    if ((a1 * b2) - (b1 * a2) == 0){
        cout << "The system has no solution." << endl;
    }
    else{
        res_x = ((c1*b2) - (b1*c2))/((a1*b2)-(b1*a2));
        res_y = ((a1*c2) - (c1*a2)) / ((a1*b2) - (b1*a2));
        cout << "x=" << res_x << " y=" << res_y << endl;
    }
}

int main(){
    float a,b,PI;
    int p;
    cout<<endl;
    cout<<"************SCIENTIFIC CALCULATOR************\n";
    cout<<"---------------------------------------------\n";
    cout<<"Operations\t\t"<<"Trigonometric Fn\t"<<"Logarithmic Functions\t"<<endl;
    cout<<"----------------------------------------------------------------------\n";
    cout<<"1: Division\t\t"<<"9: Sin\t\t\t"<<"15: Log"<<endl;
    cout<<"2: Multiplication\t"<<"10: Cos\t\t\t"<<"16: Log with base 10"<<endl;
    cout<<"3: Subtraction\t\t"<<"11: Tan\t\t"<<endl;
    cout<<"4: Addition\t\t"<<"12: Inverse of Sin"<<endl;
    cout<<"5: Exponent\t\t"<<"13: Inverse of Cos"<<endl;
    cout<<"6: Square root\t\t"<<"14: Inverse of Tan"<<endl;
    cout<<"7: Square\t\t"<<endl;
    cout<<"8: Cube\t\t"<<endl;
    cout<<"----------------------------------------------------------------------\n";
    cout<<"Algebraic equations\t\t"<<endl;
    cout<<"17: Linear equations in form aX+b=c   "<<endl;
    cout<<"18: Linear equations in form aX+bY=c   "<<endl;
    cout<<"19: 2 variable Linear equations in form a1X+b1Y=c1 "<<endl;
    cout<<"                                        a2X+b2Y=c2 "<<endl;
    cout<<"20: 3 variable Linear equations in form a1X+b1Y+c1Z=d1 "<<endl;
    cout<<"                                        a2X+b2Y+c2Z=d2 "<<endl;
    cout<<"                                        a3X+b3Y+c3Z=d3 "<<endl;


    cout<<"Enter the operation you want to perform : "<<endl;
    cin>>p;
    PI = 3.1415926;
    switch(p){
        case 1:
        cout<<"Enter 1st number :";
        cin>>a;
        cout<<"Enter 2nd number :";
        cin>>b;
        cout<<"Division = "<<a/b<<endl; 
        break;

        case 2: 
        cout<<"Enter 1st number : "; 
        cin>>a; 
        cout<<"Enter 2nd number : "; 
        cin>>b; 
        cout<<"Multiplication = "<<a*b<<endl; 
        break;

        case 3: 
        cout<<"Enter 1st number : "; 
        cin>>a; 
        cout<<"Enter 2nd number : "; 
        cin>>b; 
        cout<<"Subtraction = "<<a-b<<endl; 
        break;

        case 4: 
        cout<<"Enter 1st number : "; 
        cin>>a; 
        cout<<"Enter 2nd number : "; 
        cin>>b; 
        cout<<"Addition = "<<a+b<<endl; 
        break; 

        case 5: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Enter the exponent : "; 
        cin>>b; 
        cout<<"Exponent = "<<pow(a,b)<<endl; 
        break; 

        case 6: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Square Root = "<<sqrt(a)<<endl; 
        break;

        case 7: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Square = "<<(a*a)<<endl; 
        break;

        case 8:
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Cube = "<<(a*a*a)<<endl;
        break;

        case 9: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Sin = "<<sin(a)<<endl; 
        break; 

        case 10: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Cos = "<<cos(a)<<endl; 
        break; 

        case 11: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Tan = "<<tan(a)<<endl; 
        break; 

        case 12: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl; 
        break; 

        case 13: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl; 
        break; 

        case 14: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl; 
        break;

        case 15: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Log = "<<log(a)<<endl; 
        break; 

        case 16: 
        cout<<"Enter the number : "; 
        cin>>a; 
        cout<<"Log with base 10 = "<<log10(a)<<endl; 
        break; 

        case 17:
        float c;
        cout<<"aX+b=c"<<endl;
        cout<<"Enter a , b , c : ";
        cin>>a>>b>>c;
        cout<<"Solution X : "<<(c-b)/a<<endl;
        break;

        case 18:
        cout<<"aX+bY=c"<<endl;
        cout<<"Eter a , b , c : ";
        cin>>a>>b>>c;
        solution(a,b,c);
        break;

        case 19:
        int a1,a2,b1,b2,c1,c2;
        cout<<"a1X+b1Y=c1"<<endl;
        cout<<"a2X+b2Y=c2"<<endl;
        cout<<"Enter a1 , b1, c1 : "<<endl;
        cin>>a1>>b1>>c1;
        cout<<"Enter a2 , b2 , c2 : "<<endl;
        cin>>a2>>b2>>c2;
        solution2(a1,b1,c1,a2,b2,c2);
        break;

        default: 
        cout<<"Wrong Input"<<endl; 
    }
}