#include "periodic_table.h"
namespace periodic_table {

element elements[] = {{
.symbol = "n",
.name = "neutron",
.number = 0,
.mass = 1.0086649159700000755,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "H",
.name = "hydrogen",
.number = 1,
.mass = 1.0079400000000000581,
.density = 0.070800000000000001821,
.crystal_lattice_distance = NAN,
},
{
.symbol = "He",
.name = "helium",
.number = 2,
.mass = 4.0026020000000004373,
.density = 0.12199999999999999734,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Li",
.name = "lithium",
.number = 3,
.mass = 6.9409999999999998366,
.density = 0.5340000000000000302,
.crystal_lattice_distance = 3.4900000000000002132,
},
{
.symbol = "Be",
.name = "beryllium",
.number = 4,
.mass = 9.012181999999999249,
.density = 1.848000000000000087,
.crystal_lattice_distance = 2.2900000000000000355,
},
{
.symbol = "B",
.name = "boron",
.number = 5,
.mass = 10.810999999999999943,
.density = 2.3399999999999998579,
.crystal_lattice_distance = 8.7300000000000004263,
},
{
.symbol = "C",
.name = "carbon",
.number = 6,
.mass = 12.010699999999999932,
.density = 2.2000000000000001776,
.crystal_lattice_distance = 3.5699999999999998401,
},
{
.symbol = "N",
.name = "nitrogen",
.number = 7,
.mass = 14.006700000000000372,
.density = 0.80800000000000005151,
.crystal_lattice_distance = NAN,
},
{
.symbol = "O",
.name = "oxygen",
.number = 8,
.mass = 15.999399999999999622,
.density = 1.1399999999999999023,
.crystal_lattice_distance = NAN,
},
{
.symbol = "F",
.name = "fluorine",
.number = 9,
.mass = 18.998403199999998492,
.density = 1.5,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Ne",
.name = "neon",
.number = 10,
.mass = 20.179700000000000415,
.density = 1.2070000000000000728,
.crystal_lattice_distance = 4.4299999999999997158,
},
{
.symbol = "Na",
.name = "sodium",
.number = 11,
.mass = 22.989770000000000039,
.density = 0.97099999999999997424,
.crystal_lattice_distance = 4.2300000000000004263,
},
{
.symbol = "Mg",
.name = "magnesium",
.number = 12,
.mass = 24.304999999999999716,
.density = 1.7379999999999999893,
.crystal_lattice_distance = 3.2099999999999999645,
},
{
.symbol = "Al",
.name = "aluminum",
.number = 13,
.mass = 26.981538000000000466,
.density = 2.6989000000000000767,
.crystal_lattice_distance = 4.0499999999999998224,
},
{
.symbol = "Si",
.name = "silicon",
.number = 14,
.mass = 28.085499999999999687,
.density = 2.3300000000000000711,
.crystal_lattice_distance = 5.4299999999999997158,
},
{
.symbol = "P",
.name = "phosphorus",
.number = 15,
.mass = 30.973760999999999655,
.density = 1.8200000000000000622,
.crystal_lattice_distance = 7.1699999999999999289,
},
{
.symbol = "S",
.name = "sulfur",
.number = 16,
.mass = 32.064999999999997726,
.density = 2.0699999999999998401,
.crystal_lattice_distance = 10.470000000000000639,
},
{
.symbol = "Cl",
.name = "chlorine",
.number = 17,
.mass = 35.453000000000002956,
.density = 1.5600000000000000533,
.crystal_lattice_distance = 6.2400000000000002132,
},
{
.symbol = "Ar",
.name = "argon",
.number = 18,
.mass = 39.948000000000000398,
.density = 1.3999999999999999112,
.crystal_lattice_distance = 5.2599999999999997868,
},
{
.symbol = "K",
.name = "potassium",
.number = 19,
.mass = 39.09830000000000183,
.density = 0.86199999999999998845,
.crystal_lattice_distance = 5.2300000000000004263,
},
{
.symbol = "Ca",
.name = "calcium",
.number = 20,
.mass = 40.078000000000002956,
.density = 1.5500000000000000444,
.crystal_lattice_distance = 5.5800000000000000711,
},
{
.symbol = "Sc",
.name = "scandium",
.number = 21,
.mass = 44.955910000000002924,
.density = 2.9889999999999998792,
.crystal_lattice_distance = 3.3100000000000000533,
},
{
.symbol = "Ti",
.name = "titanium",
.number = 22,
.mass = 47.866999999999997328,
.density = 4.5400000000000000355,
.crystal_lattice_distance = 2.9500000000000001776,
},
{
.symbol = "V",
.name = "vanadium",
.number = 23,
.mass = 50.941499999999997783,
.density = 6.1100000000000003197,
.crystal_lattice_distance = 3.0200000000000000178,
},
{
.symbol = "Cr",
.name = "chromium",
.number = 24,
.mass = 51.996099999999998431,
.density = 7.1900000000000003908,
.crystal_lattice_distance = 2.8799999999999998934,
},
{
.symbol = "Mn",
.name = "manganese",
.number = 25,
.mass = 54.938048999999999467,
.density = 7.3300000000000000711,
.crystal_lattice_distance = 8.8900000000000005684,
},
{
.symbol = "Fe",
.name = "iron",
.number = 26,
.mass = 55.844999999999998863,
.density = 7.873999999999999666,
.crystal_lattice_distance = 2.8700000000000001066,
},
{
.symbol = "Co",
.name = "cobalt",
.number = 27,
.mass = 58.933199999999999363,
.density = 8.9000000000000003553,
.crystal_lattice_distance = 2.5099999999999997868,
},
{
.symbol = "Ni",
.name = "nickel",
.number = 28,
.mass = 58.693399999999996908,
.density = 8.9019999999999992468,
.crystal_lattice_distance = 3.5200000000000000178,
},
{
.symbol = "Cu",
.name = "copper",
.number = 29,
.mass = 63.545999999999999375,
.density = 8.9600000000000008527,
.crystal_lattice_distance = 3.6099999999999998757,
},
{
.symbol = "Zn",
.name = "zinc",
.number = 30,
.mass = 65.409000000000006025,
.density = 7.1330000000000000071,
.crystal_lattice_distance = 2.6600000000000001421,
},
{
.symbol = "Ga",
.name = "gallium",
.number = 31,
.mass = 69.722999999999998977,
.density = 5.9039999999999999147,
.crystal_lattice_distance = 4.5099999999999997868,
},
{
.symbol = "Ge",
.name = "germanium",
.number = 32,
.mass = 72.640000000000000568,
.density = 5.3230000000000003979,
.crystal_lattice_distance = 5.6600000000000001421,
},
{
.symbol = "As",
.name = "arsenic",
.number = 33,
.mass = 74.921599999999997976,
.density = 5.7300000000000004263,
.crystal_lattice_distance = 4.1299999999999998934,
},
{
.symbol = "Se",
.name = "selenium",
.number = 34,
.mass = 78.959999999999993747,
.density = 4.7900000000000000355,
.crystal_lattice_distance = 4.3600000000000003197,
},
{
.symbol = "Br",
.name = "bromine",
.number = 35,
.mass = 79.903999999999996362,
.density = 3.1200000000000001066,
.crystal_lattice_distance = 6.6699999999999999289,
},
{
.symbol = "Kr",
.name = "krypton",
.number = 36,
.mass = 83.798000000000001819,
.density = 2.1600000000000001421,
.crystal_lattice_distance = 5.7199999999999997513,
},
{
.symbol = "Rb",
.name = "rubidium",
.number = 37,
.mass = 85.467799999999996885,
.density = 1.5320000000000000284,
.crystal_lattice_distance = 5.5899999999999998579,
},
{
.symbol = "Sr",
.name = "strontium",
.number = 38,
.mass = 87.620000000000004547,
.density = 2.5400000000000000355,
.crystal_lattice_distance = 6.0800000000000000711,
},
{
.symbol = "Y",
.name = "yttrium",
.number = 39,
.mass = 88.905850000000000932,
.density = 4.4690000000000003055,
.crystal_lattice_distance = 3.6499999999999999112,
},
{
.symbol = "Zr",
.name = "zirconium",
.number = 40,
.mass = 91.224000000000003752,
.density = 6.5060000000000002274,
.crystal_lattice_distance = 3.2299999999999999822,
},
{
.symbol = "Nb",
.name = "niobium",
.number = 41,
.mass = 92.906379999999998631,
.density = 8.5700000000000002842,
.crystal_lattice_distance = 3.2999999999999998224,
},
{
.symbol = "Mo",
.name = "molybdenum",
.number = 42,
.mass = 95.939999999999997726,
.density = 10.220000000000000639,
.crystal_lattice_distance = 3.1499999999999999112,
},
{
.symbol = "Tc",
.name = "technetium",
.number = 43,
.mass = 98,
.density = 11.5,
.crystal_lattice_distance = 2.7400000000000002132,
},
{
.symbol = "Ru",
.name = "ruthenium",
.number = 44,
.mass = 101.06999999999999318,
.density = 12.410000000000000142,
.crystal_lattice_distance = 2.7000000000000001776,
},
{
.symbol = "Rh",
.name = "rhodium",
.number = 45,
.mass = 102.90550000000000352,
.density = 12.410000000000000142,
.crystal_lattice_distance = 3.7999999999999998224,
},
{
.symbol = "Pd",
.name = "palladium",
.number = 46,
.mass = 106.42000000000000171,
.density = 12.019999999999999574,
.crystal_lattice_distance = 3.8900000000000001243,
},
{
.symbol = "Ag",
.name = "silver",
.number = 47,
.mass = 107.86820000000000164,
.density = 10.5,
.crystal_lattice_distance = 4.0899999999999998579,
},
{
.symbol = "Cd",
.name = "cadmium",
.number = 48,
.mass = 112.41100000000000136,
.density = 8.6500000000000003553,
.crystal_lattice_distance = 2.9799999999999999822,
},
{
.symbol = "In",
.name = "indium",
.number = 49,
.mass = 114.81799999999999784,
.density = 7.3099999999999996092,
.crystal_lattice_distance = 4.5899999999999998579,
},
{
.symbol = "Sn",
.name = "tin",
.number = 50,
.mass = 118.70999999999999375,
.density = 7.3099999999999996092,
.crystal_lattice_distance = 5.8200000000000002842,
},
{
.symbol = "Sb",
.name = "antimony",
.number = 51,
.mass = 121.76000000000000512,
.density = 6.6909999999999998366,
.crystal_lattice_distance = 4.5099999999999997868,
},
{
.symbol = "Te",
.name = "tellurium",
.number = 52,
.mass = 127.59999999999999432,
.density = 6.2400000000000002132,
.crystal_lattice_distance = 4.4500000000000001776,
},
{
.symbol = "I",
.name = "iodine",
.number = 53,
.mass = 126.90447000000000344,
.density = 4.9299999999999997158,
.crystal_lattice_distance = 7.2699999999999995737,
},
{
.symbol = "Xe",
.name = "xenon",
.number = 54,
.mass = 131.29300000000000637,
.density = 3.5200000000000000178,
.crystal_lattice_distance = 6.2000000000000001776,
},
{
.symbol = "Cs",
.name = "cesium",
.number = 55,
.mass = 132.90545000000000186,
.density = 1.8729999999999999982,
.crystal_lattice_distance = 6.0499999999999998224,
},
{
.symbol = "Ba",
.name = "barium",
.number = 56,
.mass = 137.32699999999999818,
.density = 3.5,
.crystal_lattice_distance = 5.0199999999999995737,
},
{
.symbol = "La",
.name = "lanthanum",
.number = 57,
.mass = 138.90549999999998931,
.density = 6.1449999999999995737,
.crystal_lattice_distance = 3.75,
},
{
.symbol = "Ce",
.name = "cerium",
.number = 58,
.mass = 140.11600000000001387,
.density = 6.7699999999999995737,
.crystal_lattice_distance = 5.1600000000000001421,
},
{
.symbol = "Pr",
.name = "praseodymium",
.number = 59,
.mass = 140.90764999999998963,
.density = 6.7729999999999996874,
.crystal_lattice_distance = 3.6699999999999999289,
},
{
.symbol = "Nd",
.name = "neodymium",
.number = 60,
.mass = 144.24000000000000909,
.density = 7.0080000000000000071,
.crystal_lattice_distance = 3.6600000000000001421,
},
{
.symbol = "Pm",
.name = "promethium",
.number = 61,
.mass = 145,
.density = 7.2640000000000002345,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Sm",
.name = "samarium",
.number = 62,
.mass = 150.36000000000001364,
.density = 7.5199999999999995737,
.crystal_lattice_distance = 9,
},
{
.symbol = "Eu",
.name = "europium",
.number = 63,
.mass = 151.96399999999999864,
.density = 5.2439999999999997726,
.crystal_lattice_distance = 4.6100000000000003197,
},
{
.symbol = "Gd",
.name = "gadolinium",
.number = 64,
.mass = 157.25,
.density = 7.900999999999999801,
.crystal_lattice_distance = 3.6400000000000001243,
},
{
.symbol = "Tb",
.name = "terbium",
.number = 65,
.mass = 158.9253400000000056,
.density = 8.2300000000000004263,
.crystal_lattice_distance = 3.6000000000000000888,
},
{
.symbol = "Dy",
.name = "dysprosium",
.number = 66,
.mass = 162.5,
.density = 8.5510000000000001563,
.crystal_lattice_distance = 3.5899999999999998579,
},
{
.symbol = "Ho",
.name = "holmium",
.number = 67,
.mass = 164.93031999999999471,
.density = 8.7949999999999999289,
.crystal_lattice_distance = 3.5800000000000000711,
},
{
.symbol = "Er",
.name = "erbium",
.number = 68,
.mass = 167.25899999999998613,
.density = 9.0660000000000007248,
.crystal_lattice_distance = 3.5600000000000000533,
},
{
.symbol = "Tm",
.name = "thulium",
.number = 69,
.mass = 168.93421000000000731,
.density = 9.32099999999999973,
.crystal_lattice_distance = 3.5400000000000000355,
},
{
.symbol = "Yb",
.name = "ytterbium",
.number = 70,
.mass = 173.03999999999999204,
.density = 6.9660000000000001918,
.crystal_lattice_distance = 5.4900000000000002132,
},
{
.symbol = "Lu",
.name = "lutetium",
.number = 71,
.mass = 174.96700000000001296,
.density = 9.8409999999999993037,
.crystal_lattice_distance = 3.5099999999999997868,
},
{
.symbol = "Hf",
.name = "hafnium",
.number = 72,
.mass = 178.49000000000000909,
.density = 13.310000000000000497,
.crystal_lattice_distance = 3.2000000000000001776,
},
{
.symbol = "Ta",
.name = "tantalum",
.number = 73,
.mass = 180.94790000000000418,
.density = 16.653999999999999915,
.crystal_lattice_distance = 3.3100000000000000533,
},
{
.symbol = "W",
.name = "tungsten",
.number = 74,
.mass = 183.84000000000000341,
.density = 19.300000000000000711,
.crystal_lattice_distance = 3.1600000000000001421,
},
{
.symbol = "Re",
.name = "rhenium",
.number = 75,
.mass = 186.20699999999999363,
.density = 21.019999999999999574,
.crystal_lattice_distance = 2.7599999999999997868,
},
{
.symbol = "Os",
.name = "osmium",
.number = 76,
.mass = 190.22999999999998977,
.density = 22.570000000000000284,
.crystal_lattice_distance = 2.7400000000000002132,
},
{
.symbol = "Ir",
.name = "iridium",
.number = 77,
.mass = 192.21700000000001296,
.density = 22.420000000000001705,
.crystal_lattice_distance = 3.8399999999999998579,
},
{
.symbol = "Pt",
.name = "platinum",
.number = 78,
.mass = 195.07800000000000296,
.density = 21.449999999999999289,
.crystal_lattice_distance = 3.9199999999999999289,
},
{
.symbol = "Au",
.name = "gold",
.number = 79,
.mass = 196.96655000000001223,
.density = 19.300000000000000711,
.crystal_lattice_distance = 4.0800000000000000711,
},
{
.symbol = "Hg",
.name = "mercury",
.number = 80,
.mass = 200.59000000000000341,
.density = 13.545999999999999375,
.crystal_lattice_distance = 2.9900000000000002132,
},
{
.symbol = "Tl",
.name = "thallium",
.number = 81,
.mass = 204.38329999999999131,
.density = 11.849999999999999645,
.crystal_lattice_distance = 3.4599999999999999645,
},
{
.symbol = "Pb",
.name = "lead",
.number = 82,
.mass = 207.19999999999998863,
.density = 11.349999999999999645,
.crystal_lattice_distance = 4.9500000000000001776,
},
{
.symbol = "Bi",
.name = "bismuth",
.number = 83,
.mass = 208.9803799999999967,
.density = 9.7469999999999998863,
.crystal_lattice_distance = 4.75,
},
{
.symbol = "Po",
.name = "polonium",
.number = 84,
.mass = 209,
.density = 9.3200000000000002842,
.crystal_lattice_distance = 3.3500000000000000888,
},
{
.symbol = "At",
.name = "astatine",
.number = 85,
.mass = 210,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Rn",
.name = "radon",
.number = 86,
.mass = 222,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Fr",
.name = "francium",
.number = 87,
.mass = 223,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Ra",
.name = "radium",
.number = 88,
.mass = 226,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Ac",
.name = "actinium",
.number = 89,
.mass = 227,
.density = NAN,
.crystal_lattice_distance = 5.3099999999999996092,
},
{
.symbol = "Th",
.name = "thorium",
.number = 90,
.mass = 232.03809999999998581,
.density = 11.720000000000000639,
.crystal_lattice_distance = 5.0800000000000000711,
},
{
.symbol = "Pa",
.name = "protactinium",
.number = 91,
.mass = 231.0358799999999917,
.density = 15.369999999999999218,
.crystal_lattice_distance = 3.9199999999999999289,
},
{
.symbol = "U",
.name = "uranium",
.number = 92,
.mass = 238.02890999999999622,
.density = 18.949999999999999289,
.crystal_lattice_distance = 2.8500000000000000888,
},
{
.symbol = "Np",
.name = "neptunium",
.number = 93,
.mass = 237,
.density = 20.25,
.crystal_lattice_distance = 4.7199999999999997513,
},
{
.symbol = "Pu",
.name = "plutonium",
.number = 94,
.mass = 244,
.density = 19.839999999999999858,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Am",
.name = "americium",
.number = 95,
.mass = 243,
.density = 13.669999999999999929,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Cm",
.name = "curium",
.number = 96,
.mass = 247,
.density = 13.509999999999999787,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Bk",
.name = "berkelium",
.number = 97,
.mass = 247,
.density = 14,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Cf",
.name = "californium",
.number = 98,
.mass = 251,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Es",
.name = "einsteinium",
.number = 99,
.mass = 252,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Fm",
.name = "fermium",
.number = 100,
.mass = 257,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Md",
.name = "mendelevium",
.number = 101,
.mass = 258,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "No",
.name = "nobelium",
.number = 102,
.mass = 259,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Lr",
.name = "lawrencium",
.number = 103,
.mass = 262,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Rf",
.name = "rutherfordium",
.number = 104,
.mass = 261,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Db",
.name = "dubnium",
.number = 105,
.mass = 262,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Sg",
.name = "seaborgium",
.number = 106,
.mass = 266,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Bh",
.name = "bohrium",
.number = 107,
.mass = 264,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Hs",
.name = "hassium",
.number = 108,
.mass = 277,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Mt",
.name = "meitnerium",
.number = 109,
.mass = 268,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Ds",
.name = "darmstadtium",
.number = 110,
.mass = 281,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Rg",
.name = "roentgenium",
.number = 111,
.mass = 272,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Cn",
.name = "copernicium",
.number = 112,
.mass = 285,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Nh",
.name = "nihonium",
.number = 113,
.mass = 286,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Fl",
.name = "flerovium",
.number = 114,
.mass = 289,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Mc",
.name = "moscovium",
.number = 115,
.mass = 289,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Lv",
.name = "livermorium",
.number = 116,
.mass = 293,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Ts",
.name = "tennessine",
.number = 117,
.mass = 294,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "Og",
.name = "oganesson",
.number = 118,
.mass = 294,
.density = NAN,
.crystal_lattice_distance = NAN,
},
{
.symbol = "XX",
.name = "UndefinedElement",
.number = 119,
.mass = NAN,
.density = NAN,
.crystal_lattice_distance = NAN,
}
};


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


}; // namespace periodic_table 
