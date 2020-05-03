
using namespace std;
#include <math.h> 
#include <complex> 
#include <iostream>

namespace solver
{

    class RealVariable {
    private:
        double _a;
        double _b;
        double _c;

    public:

        RealVariable(const double& a = 0.0, const double& b = 1.0, const double& c = 0.0)
            :_a(a), _b(b), _c(c) {}

        double A() const {
            return _a;
        }
        double B() const {
            return _b;
        }
        double C() const {
            return _c;
        }

        const RealVariable operator==(const RealVariable& x)const;
        const RealVariable operator==(const double& x) const;

        const RealVariable operator+(const RealVariable& x) const;

        const RealVariable operator+(const double& x) const;

        const RealVariable operator-(const RealVariable& x) const;

        const RealVariable operator-(const double& x) const;

        const RealVariable operator*(const RealVariable& x) const;

        const RealVariable operator*(const double& x) const;

        const RealVariable operator/(const double& x) const;

        const RealVariable operator^(const double& other) const;

        friend const RealVariable operator==(const double& x, const RealVariable& y);
        friend const RealVariable operator+(const double& x, const RealVariable& y);
        friend const RealVariable operator-(const double& x, const RealVariable& y);
        friend const RealVariable operator*(const double& x, const RealVariable& y);
        // friend RealVariable& operator/(double&, RealVariable&);
        // friend RealVariable& operator^(double&, RealVariable&);
    };

    class ComplexVariable {
    private:
        complex<double> _a;
        complex<double> _b;
        complex<double> _c;
      

    public:

        ComplexVariable(const complex<double>& a = 0.0, const complex<double>& b = 1.0, const complex<double>& c = 0.0)
            :_a(a), _b(b), _c(c){}

        complex<double> A() const {
            return _a;
        }
        complex<double> B() const {
            return _b;
        }
        complex<double> C() const {
            return _c;
        }
       

        const ComplexVariable operator+(const ComplexVariable& x)const;
        const ComplexVariable operator+(const complex<double>& x)const;
        const ComplexVariable operator-(const ComplexVariable& x)const;
        const ComplexVariable operator-(const complex<double>& x)const;
        const ComplexVariable operator*(const ComplexVariable& x)const;
        const ComplexVariable operator*(const complex<double>& x)const;
        const ComplexVariable operator/(const complex<double>& x)const;
        const ComplexVariable operator^(const complex<double> &x)const;
        const ComplexVariable operator==(const ComplexVariable& x)const;
        const ComplexVariable operator==(const complex<double>& x)const;
        friend const ComplexVariable operator==(const complex<double>& x, const ComplexVariable& y);
        friend const ComplexVariable operator+(const complex<double> &x, const ComplexVariable& y);
        friend const ComplexVariable operator-(const complex<double> &x, const ComplexVariable& y);
        friend const ComplexVariable operator*(const complex<double> &x, const ComplexVariable& y);
    };

    const double solve(const RealVariable& x);

    const complex<double> solve(const ComplexVariable& y);



}; // namespace solver
