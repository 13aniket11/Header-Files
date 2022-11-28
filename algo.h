#include<bits/stdc++.h>
using namespace std;

// summation of two variables :: Int, Float, Double.
template <class T>
T sum(T a, T b)
{
    string type = typeid(a).name();
    try{
        if(!(type[0]=='i'||type[0]=='f'||(type[0]=='l'&&type[1]=='f')))
            throw "Type Error, "+ type +" is not Supported for sum() function";
    }
    catch(string s)
    {
        cout<<s<<endl;
        exit(1);
    }
    T tmp;
    tmp = a+b;
    return tmp;
}

// subtraction of two variables :: Int, Float, Double.
template <class T>
T sum(T a, T b)
{
    string type = typeid(a).name();
    try{
        if(!(type[0]=='i'||type[0]=='f'||(type[0]=='l'&&type[1]=='f')))
            throw "Type Error, "+ type +" is not Supported for sum() function";
    }
    catch(string s)
    {
        cout<<s<<endl;
        exit(1);
    }
    T tmp;
    tmp = a+b;
    return tmp;
}
