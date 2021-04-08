Periodic table of elements
==========================

A periodic table of elements, containing data 
about atomic mass, symbol, name, density and crystal lattice constant:
```bash
...
Element 2 : He
 Symbol = He
 Name = helium
 Number = 2
 Mass = 4.0026
 Density = 0.122
 Crystal a0 = nan
Element 3 : Li
 Symbol = Li
 Name = lithium
 Number = 3
 Mass = 6.941
 Density = 0.534
 Crystal a0 = 3.49
...
```

To use just copy the files `periodic_table.h` and `periodic_table.cpp` 
to your project.
The data comes from [python package periodictable](https://github.com/pkienzle/periodictable) and the files are auto generated with the `generate_periodic_table.py` script.

Usage:
```c++
int i = 23;
periodic_table::Element iel = periodic_table::get_element_at( i );
periodic_table::element el = periodic_table::elements[i];
cout << "Element " << i << " : " << 
  periodic_table::print_element(iel) << endl;
cout << " " << "Symbol = " << el.symbol << endl;
cout << " " << "Name = " << el.name << endl;
cout << " " << "Number = " << el.number << endl;
cout << " " << "Mass = " << el.mass << endl;
cout << " " << "Density = " << el.density << endl;
cout << " " << "Crystal a0 = " << el.crystal_lattice_distance << endl;
```
which prints out the data for [vanadium](https://en.wikipedia.org/wiki/Vanadium):
```bash
Element 23 : V
 Symbol = V
 Name = vanadium
 Number = 23
 Mass = 50.9415
 Density = 6.11
 Crystal a0 = 3.02
```
For complete usage see [example](./test_print_periodic_table.cpp).
