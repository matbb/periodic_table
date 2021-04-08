.PHONY: test_print_periodic_table

periodic_table.h: generate_periodic_table.py
	python3 generate_periodic_table.py

test_print_periodic_table: test_print_periodic_table.cpp periodic_table.h periodic_table.cpp
	g++ -std=c++11 $^ -o "$@"
	./"$@"

