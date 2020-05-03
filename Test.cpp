#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <complex>
#include "solver.hpp"

using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;


TEST_CASE("real"){
    RealVariable x;
    CHECK(solve(3*x==6)==2);
    CHECK(solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);


    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);


    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(3*x==6)==2);
    CHECK(solver::solve(8*x==64)==8);
    CHECK(solver::solve(3+x==6)==3);
    CHECK(solver::solve(x-2==1)==3);
    
    
    CHECK(solver::solve(3*x+12==-6)==-6);
    CHECK(solver::solve(8*x+2==10)==1);
    CHECK(solver::solve(3+x+4+x==15)==8);
    CHECK(solver::solve(3*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

    CHECK(solver::solve(4*x+12==-6)==-6);
    CHECK(solver::solve(12*x+2==10)==1);
    CHECK(solver::solve(2+x+4+x==15)==8);
    CHECK(solver::solve(7*x-15==0)==5);
    CHECK(solver::solve(x/6==0)==0);

}
