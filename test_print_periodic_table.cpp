#include <iomanip>
#include <iostream>
#include <vector>

#include "periodic_table.h"

using namespace std;

int main() {
    cout << "Printing entire periodic table:" << endl;

    for (int i = 0; i < periodic_table::Element::count; ++i) {
        periodic_table::Element iel = periodic_table::get_element_at(i);
        periodic_table::element el = periodic_table::elements[i];
        cout << "Element " << i << " : " << periodic_table::print_element(iel)
             << endl;
        cout << " "
             << "Symbol = " << el.symbol << endl;
        cout << " "
             << "Name = " << el.name << endl;
        cout << " "
             << "Number = " << el.number << endl;
        cout << " "
             << "Mass = " << el.mass << endl;
        cout << " "
             << "Density = " << el.density << endl;
        cout << " "
             << "Crystal a0 = " << el.crystal_lattice_distance << endl;
    }

    cout << endl;
    cout << "Parsing strings to elements:" << endl;
    std::vector<std::string> elements = {"Au", "Pt", "Rb", "B",  "C", "N",
                                         "He", "Xy", "zn", "he", "hE"};
    for (auto el : elements)
        cout << "Parsed element " << el << " to "
             << periodic_table::print_element(periodic_table::read_element(el))
             << endl;

    cout << endl;
    cout << "Parsing many elements at once:" << endl;
    auto p_elements = periodic_table::read_elements(elements);
    for (int i = 0; i < elements.size(); ++i)
        cout << "Parsed element " << elements[i] << " to "
             << periodic_table::print_element(p_elements[i]) << endl;

    return 0;
}
