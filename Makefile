CXX = g++ 
CXXFLAGS = -Wall 
all: app 
app: main.o SchoolClass.o SchoolDatabase.o
	$(CXX) $(CXXFLAGS) main.o SchoolClass.o SchoolDatabase.o -o app
main.o: main.cpp SchoolClass.h SchoolDatabase.h
	$(CXX) $(CXXFLAGS) -c main.cpp 
SchoolClass.o: SchoolClass.cpp SchoolClass.h 
	$(CXX) $(CXXFLAGS) -c SchoolClass.cpp 
SchoolDatabase.o: SchoolDatabase.cpp SchoolDatabase.h 
	$(CXX) $(CXXFLAGS) -c SchoolDatabase.cpp 
clean: 
	rm -f *.o main  
