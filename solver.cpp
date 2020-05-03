
#include <complex>
#include "solver.hpp"
#include <math.h> 
using namespace std;

namespace solver
{

    const RealVariable RealVariable::operator==(const RealVariable& other) const {
        //cout << " *******### " << A() << "  " << B() << "  " << C() << endl;
        RealVariable a = RealVariable(this->_a - other.A(), this->_b - other.B(), this->_c - other.C());
       // cout << " ===== Re:  " << other.A() << "  " << other.B() << "  " << other.C() << endl;
        return a;
    }
    const RealVariable RealVariable::operator==(const double& x) const {
       // cout << " *******### " << A() << "  " << B() << "  " << C() << endl;
        RealVariable a = RealVariable(this->_a, this->_b, this->_c - x);
       // cout << " ==== Dou:  " << a.A() << "  " << a.B() << "  " << a.C() << endl;
        return a;
    }

    const RealVariable RealVariable::operator+(const RealVariable& x) const {
        return RealVariable(this->_a + x.A(), this->_b + x.B(), this->_c + x.C());
    }
    const RealVariable RealVariable::operator+(const double& x) const {
        return RealVariable(_a + 0.0, _b + 0.0, _c + x);
    }

    const RealVariable RealVariable::operator-(const RealVariable& x) const {
        return RealVariable(_a - x._a, _b - x._b, _c - x._c);
    }
    const RealVariable RealVariable::operator-(const double& x) const {
        return RealVariable(_a - 0.0, _b - 0.0, _c - x);
    }

    const RealVariable RealVariable::operator*(const RealVariable& x) const {
        if (_a != 0) return RealVariable(_a * x._c, _b * x._c, _c * x._c);
        else
            if (_b != 0) {
                double A = _b * x._b;
                double B = _b * x._c + x._c * _b;
                double C = _c * x._c;
                return RealVariable(A, B, C);
            }
            else return RealVariable(_c * x._a, _c * x._b, _c * x._c);
    }
    const RealVariable RealVariable::operator*(const double& x) const {
        return RealVariable(_a * x, _b * x, _c * x);
    }

    const RealVariable RealVariable::operator/(const double& x) const {
        if (x == 0) throw std::runtime_error("can not divide with 0! ");
        return RealVariable(_a/x, _b/x, _c/x);
    }

    const RealVariable RealVariable::operator^(const double& other) const
    {
        if (other > 2 || other<0)
            throw runtime_error("Al mi ata ba");

        if (other == 1)
            return *this;

        if (other == 0)
        {
            return RealVariable(0, 0, 1);
        }

        return RealVariable(1, 0, 0);
    }

    const RealVariable operator+(const double& x, const RealVariable& y) {
        return RealVariable(y.A(), y.B(), x + y.C());
    }
    const RealVariable operator-(const double& x, const RealVariable& y) {

        return RealVariable( -y.A(), - y.B(), x - y.C());

    }
    const RealVariable operator*(const double& x, const RealVariable& y) {
        return RealVariable(x * y.A(), x * y.B(), x * y.C());
    }
    const RealVariable operator==(const double& x, const RealVariable& y) {
        return  RealVariable(-(y.A()), -(y.B()), x-(y.C()));
    }






    const ComplexVariable ComplexVariable::operator+(const ComplexVariable& x)const {
        return ComplexVariable(_a + x.A(), _b + x.B(), _c + x.C());
    }
    const ComplexVariable ComplexVariable::operator+(const complex<double>& x)const {
        return ComplexVariable(_a , _b , _c + x);
    }
    const ComplexVariable ComplexVariable::operator-(const ComplexVariable& x)const {
        return ComplexVariable(_a - x.A(), _b - x.B(), _c - x.C());
    }
    const ComplexVariable ComplexVariable::operator-(const complex<double>& x)const {
        return ComplexVariable(_a, _b, _c - x);
    }
    const ComplexVariable ComplexVariable::operator*(const ComplexVariable& x)const {
        if (_a != 0.0) return ComplexVariable(_a * x._c, _b * x._c, _c * x._c);
        else
            if (_b != 0.0) {
                complex<double> A = _b * x._b;
                complex<double> B = _b * x._c + x._c * _b;
                complex<double> C = _c * x._c;
                return ComplexVariable(A, B, C);
            }
            else return ComplexVariable(_c * x._a, _c * x._b, _c * x._c);
    }
    const ComplexVariable ComplexVariable::operator*(const complex<double>& x)const {
        return ComplexVariable(_a * x, _b * x, _c * x);
    }
  
    const ComplexVariable ComplexVariable::operator/(const complex<double> &x)const {
        return ComplexVariable(_a/x,_b/x,_c/x);
    }
    
    const ComplexVariable ComplexVariable::operator^(const complex<double> &other)const {
        if (other.real() > 2.0 || other.real() < 0.0)
            throw runtime_error("not good");

        if (other == 1.0)
            return *this;

        if (other == 0.0)
        {
            return ComplexVariable(0.0, 0.0, 1.0);
        }

        return ComplexVariable(1.0, 0.0, 0.0);
     
    }
    const ComplexVariable ComplexVariable::operator==(const ComplexVariable& x)const {
      return  ComplexVariable(this->_a - x.A(), this->_b - x.B(), this->_c - x.C());
      
    }
    const ComplexVariable ComplexVariable::operator==(const complex<double>& x)const {
        return ComplexVariable(_a, _b, _c - x);
    }

    const ComplexVariable operator==(const complex<double> & x, const ComplexVariable& y) {
        return  ComplexVariable(-(y.A()), -(y.B()), x - (y.C()));
    }
    const ComplexVariable operator+(const complex<double> &x, const ComplexVariable& y) {
        return ComplexVariable(y.A(), y.B(), x + y.C());
    }
    const ComplexVariable operator-(const complex<double> &x, const ComplexVariable& y) {
        return ComplexVariable(-y.A(), -y.B(), x - y.C());
    }
    const ComplexVariable operator*(const complex<double> &x, const ComplexVariable& y) {
        return ComplexVariable(x * y.A(), x * y.B(), x * y.C());
    }
   





    const double solver::solve(const RealVariable& x) {
       // cout << " a*: " << x.A() << " b*: " << x.B() << " c**: " << x.C() << endl;
        if (x.A() != 0) {
            double root = (x.B() * x.B()) - (4.0 * x.A() * x.C());
            // cout << "A: "<<x.A() <<"   B: "<< x.B()<<"  C: "<< x.C()<< endl;
            if (root < 0) {
                cout << "less <0  " << endl;
                throw std::runtime_error("There is no real solution");
            }
            root = sqrt(root);
            double x1 = ((-x.B()) + root) / (2.0 * x.A());
            double x2 = ((-x.B()) - root) / (2.0 * x.A());
           // cout << "x1:  " << x1 << " x2: " << x2 << endl;
            return x1;
        }
        else if (x.B() != 0) {
            double root = ((-1) * x.C()) / x.B();
          //  cout << "b!=0 ;  " << root << endl;
            return root;
        }
        else if (x.C() == 0) {
            cout << "c==0: " << endl; return 0;
        }
        throw std::runtime_error("not possible ");
        return -1.0;
    }


    const complex<double> solver::solve(const ComplexVariable& x) {
        cout << " a*: " << x.A() << " b*: " << x.B() << " c**: " << x.C() << endl;
        if (x.A() != 0.0) {
            complex<double> root = (x.B() * x.B()) - (4.0 * x.A() * x.C());
   
            root = sqrt(root);
            complex<double> x1 = ((-x.B()) + root) / (2.0 * x.A());
            complex<double> x2 = ((-x.B()) - root) / (2.0 * x.A());
            // cout << "x1:  " << x1 << " x2: " << x2 << endl;
            return x1;
        }
        else if (x.B() != 0.0) {
            complex<double> root = ((-1.0) * x.C()) / x.B();
            //  cout << "b!=0 ;  " << root << endl;
            return root;
        }
        else if (x.C() == 0.0) {
            cout << "c==0: " << endl; return 0.0;
        }
        throw std::runtime_error("not possible ");
        return -1.0;
    }




};