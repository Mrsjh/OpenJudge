#include <iostream>
using namespace std;
 
class Banana {
private:
    double w;
public:
    Banana(double weight) : w(weight) {}
    Banana& operator-=(double& b) {
        w -= b;
        return *this;
    }
    double weight() { return w; }
};


int main()
{
    double weight, sale_weight;

    cin >> weight;
    Banana banana(weight);
    while(cin >> sale_weight)
        banana -= sale_weight;
    cout << banana.weight() << endl;
}

/**************************************************************
	Problem: 2306
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

