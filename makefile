all: data_types data_types2 references boolean_operators arithmetic_operators

data_types: data_types.o 
	g++ -o data_types data_types.o 
data_types.o: data_types.cc
	g++ -c data_types.cc

data_types2: data_types2.o 
	g++ -o data_types2 data_types2.o 
data_types2.o: data_types2.cc
	g++ -c data_types2.cc

references: references.o 
	g++ -o references references.o 
references.o: references.cc
	g++ -c references.cc

boolean_operators: boolean_operators.o 
	g++ -o boolean_operators boolean_operators.o 
boolean_operators.o: boolean_operators.cc
	g++ -c boolean_operators.cc

arithmetic_operators: arithmetic_operators.o 
	g++ -o arithmetic_operators arithmetic_operators.o 
arithmetic_operators.o: arithmetic_operators.cc
	g++ -c arithmetic_operators.cc

clean:
	rm *.o 

cleanall:
	rm data_types data_types2 references boolean_operators arithmetic_operators
