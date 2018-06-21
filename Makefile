build.out : main.o ComplexNumber.o IntegerNumber.o RealNumber.o Number.o
	g++ -o build.out main.o ComplexNumber.o IntegerNumber.o RealNumber.o Number.o -std=gnu++11

ComplexNumber.o : ComplexNumber.cpp ComplexNumber.h Number.h
	g++ -c ComplexNumber.cpp ComplexNumber.h Number.h -std=gnu++11 -std=gnu++11

IntegerNumber.o : IntegerNumber.cpp IntegerNumber.h RealNumber.h
	g++ -c IntegerNumber.cpp IntegerNumber.h RealNumber.h -std=gnu++11

RealNumber.o : RealNumber.cpp RealNumber.h Number.h
	g++ -c RealNumber.cpp RealNumber.h Number.h -std=gnu++11

main.o : main.cpp RealNumber.h ComplexNumber.h IntegerNumber.h
	g++ -c main.cpp RealNumber.h ComplexNumber.h IntegerNumber.h -std=gnu++11

Number.o : Number.cpp Number.h
	g++ -c Number.cpp Number.h -std=gnu++11
