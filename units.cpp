#include <boost/units/unit.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/systems/si/prefixes.hpp>
#include <iostream>

using namespace std;
using namespace boost;
using namespace boost::units;
using namespace boost::units::si;

void units_demo() {
    typedef make_scaled_unit<si::length, scale<10, static_rational<-2>>>::type cm;
    quantity<cm> d(2.0 * si::meters);
    quantity<si::time> t(200.0 * si::seconds);
    quantity<si::velocity> v(d / t);

}

int main() {
    units_demo();
    return 0;
}

