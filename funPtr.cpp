#include<iostream>
using namespace std;
class Complex {
	private:
		    int real;
		        int imaginary;
	public:
	   Complex(int r, int i) : real(r), imaginary(i) {}
			        int Real() const { return real; }
				    int Imaginary() const { return imaginary; }
				        void  setReal() {
						        int _real;
							        cout << "실수부 : ";
								        cin >> _real;
									        real = _real;
										    }
					    void setImag() {
						            int _imag;
							            cout << "허수부 : ";
								            cin >> _imag;
									            imaginary = _imag;
										        }
};
ostream& operator<<(ostream& o, const Complex& right) {
	    o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	        return o;
}

istream& operator>>(istream& i, Complex& right) {
	    right.setReal();
	        right.setImag();
		    return i;
}

int main() {
	    Complex c1(0, 0);

	        cin >> c1;
		    cout << c1 << endl;
		        return 0;
}
