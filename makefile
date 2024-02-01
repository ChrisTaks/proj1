# Copyright 2024 Chris Taks

# uses g++ compiler
cc = g++

# path for include directive and linger
path = ..

# compile with C++ 20 standard
standard = -std=c++2a

flags += -Wall # compile with all warnings
flags += -pedantic # even more warnings
flags += -I $(path) # add parent to preprocessor include path
flags += -g # include gdb instrumentation

link = $(cc) $(flags) -o # final linked build to binary executable

compile = $(cc) $(flags) -c -o # compilation to intermediary .o files

all: main calculator

calculate : main.o calculator.o
	$(link) $@ $^

main.o : main.cc
	$(compile) $@ $<

calculator.o : calculator.cc calculator.h
	$(compile) $@ $<

lint : calculator.cc calculator.h main.cc
	cpplint --root=$(path) $^

clean: 
	$(RM) *.o $(all)