using namespace std;
#include <iostream>
class Fraction{
	private:
	    int a;
     	int b;
	public:
		Fraction(){	}		
		Fraction(int a,int b){
			this->a=a;
			this->b=b;
			if (b<0){
				b=-b;a=-a;
			}
			if (a>0)
			for (int i=2;i<=(a<b? a:b);i++){
				if (a%i==0&&b%i==0){
					a/=i;
					b/=i;
					i--;
				}
			}
			else 
			for (int i=2;i<=(-a<b? -a:b);i++){
				if (-a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					i--;
				}
			}
			cout<<a<<' '<<b<<endl;
		}
		Fraction operator + (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.b+b *m.a;
			return t;			
		}
		Fraction operator - (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.b-b *m.a;
			return t;			
		}
		Fraction operator * (Fraction &m){
			Fraction t;			
			t.b=b *m.b;
			t.a=a *m.a;
			return t;			
		}
		Fraction operator / (Fraction &m){
			Fraction t;			
			t.b=b *m.a;
			t.a=a *m.b;
			return t;			
		}
		operator double(){
			a=a*1.0;
			b=b*1.0;
			return *this;
		}
		void print(){
			if (b<0){
				b=-b;a=-a;
			}
			if (a>0)
			for (int i=2;i<=(a<b? a:b);i++){
				if (a%i==0&&b%i==0){
					a/=i;
					b/=i;
					i--;
				}
			}
			else 
			for (int i=2;i<=(-a<b? -a:b);i++){
				if (-a%i==0&&b%i==0)
				{
					a/=i;
					b/=i;
					i--;
				}
			}
			cout<<a<<' '<<b<<endl;
		}
};
int main()
{
	Fraction m(4,6),n(6,8),t;  
	t=m+n; 
	t.print();  
	t=m-n;
	t.print();
	t=m*n;
	t.print();
	t=m/n;
	t.print();                
}
