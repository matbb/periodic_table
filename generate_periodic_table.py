#!/usr/bin/env python3

import periodictable as pt

missing_val = "NAN"

header = """\
#if !defined PERIODIC_TABLE_H
#define PERIODIC_TABLE_H

#include <string>
#include <math.h>
#include <vector>

"""
footer = """
#endif
"""

element_struct = """
struct s_element {
const std::string symbol;
const std::string name;
const int number;
const double mass; // in atomic mass units "u"
const double density; // in g/cm^3
const double crystal_lattice_distance; // in A=1e-10m
};

typedef struct s_element element;
"""

element_info = \
    """{{
.symbol = "{symbol:s}",
.name = "{name:s}",
.number = {number:d},
.mass = {mass:.20g},
.density = {density:.20g},
.crystal_lattice_distance = {crystal_lattice_distance:.20g},
}}"""

helper_functions_def = """

periodic_table::Element get_element_at( int i );
std::string print_element( periodic_table::Element el );
periodic_table::Element read_element( std::string str );
std::vector<periodic_table::Element> read_elements( std::vector<std::string> str_list );

"""

helper_functions_impl = """

periodic_table::Element get_element_at( int i )
{
  if( i >= 0 && i < periodic_table::Element::count )
    return static_cast<periodic_table::Element>(i);
  return periodic_table::Element::count;
}

std::string print_element( periodic_table::Element el )
{
  return periodic_table::elements[el].symbol;
}

periodic_table::Element read_element( std::string str )
{
  if( str.length() > 2 )
    return periodic_table::count;
  str[0] = toupper(str[0]);
  if(str.length() > 1 )
    str[1] = tolower(str[1]);
  for( auto el : periodic_table::elements )
  {
    if( el.symbol == str )
      return get_element_at(el.number);
  }
  return periodic_table::count;
}

std::vector<periodic_table::Element> read_elements( std::vector<std::string> str_list )
{
  std::vector<Element> el_list;
  for( auto str : str_list )
    el_list.push_back( read_element(str) );
  return el_list;
}
"""

def make_element_info(el):

    def get_val( x, f ):
        try:
            return f(x)
        except:
            return float("nan")

    inf = {
        "symbol": el.symbol,
        "name": el.name,
        "number": el.number,
        "mass": el.mass,
        "density": el.density,
        "crystal_lattice_distance": get_val(el,lambda el:el.crystal_structure["a"]),
    }
    for k in [ k for k in inf.keys()]:
        if inf[k] == None:
            inf[k] = float("nan")
    if el.mass_units != "u":
        inf["mass"] = float("nan")

    return element_info.format(**inf).replace("nan","NAN")

def print_constants():
    c_list = [ ( k, v ) for k,v in pt.constants.__dict__.items()
        if (type(v) == float) and (type(k) == str) ]
    c_list = sorted(c_list,key=lambda t:t[0])
    s = ""
    s += "namespace constants {\n"
    for k,v in c_list:
        s += "const double {:s} = {:.20g};\n".format(k,v)
    s += "}; // namespace constants\n"
    return s

with open("periodic_table.h", "wt") as f, open("periodic_table.cpp", "wt") as f_impl :
    f.write(header)
    f.write("namespace periodic_table {\n")
    f.write("\n");

    f_impl.write("""#include "periodic_table.h"\n""")
    f_impl.write("namespace periodic_table {\n")
    f_impl.write("\n");

    f.write(print_constants())
    f.write("\n");
    f.write(element_struct)
    f.write("\n")
    last_element = max( [ el.number for el in pt.elements ] )
    se = "enum Element {\n"
    s = "element elements[] = {"
    i=0
    for el in pt.elements:
      if i != el.number:
        i-=1
        import sys
        sys.exit(1)
        break
      se += "{:s} = {:d},\n".format( el.symbol, el.number )
      s += make_element_info(el)
      s += ",\n"
      i+=1
    s += element_info.format(
      **{
        "symbol": "XX",
        "name": "UndefinedElement",
        "number": last_element+1,
        "mass": float("nan"),
        "density": float("nan"),
        "crystal_lattice_distance": float("nan"),
      } ).replace("nan","NAN")
    se += "{:s} = {:d},\n".format( "count", last_element+1 )
    se += "};\n";
    s += "\n};"
    f.write(se)
    f.write("\n")
    f.write("""extern element elements[{:d}];\n""".format(
      last_element+2 ) )
    f_impl.write(s)
    f_impl.write("\n")
    f.write(helper_functions_def)
    f.write("\n")
    f_impl.write(helper_functions_impl)
    f_impl.write("\n")
    f.write("}; // namespace periodic_table \n")
    f_impl.write("\n")
    f_impl.write("}; // namespace periodic_table \n")
    f.write("\n")
    f.write(footer)
