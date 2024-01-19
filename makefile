FLAGS = -Wall

all: maindrec maindloop mains loops

maindrec: main.o libclassrec.so
	gcc $(FLAGS) -o maindrec main.o ./libclassrec.so
	
maindloop: main.o libclassloops.so
	gcc $(FLAGS) -o maindloop main.o ./libclassloops.so

mains: main.o libclassrec.a
	gcc $(FLAGS) -o mains main.o libclassrec.a

loops: libclassloops.a
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so

main.o: main.c NumClass.h
	gcc -c $(FLAGS) main.c

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared -fPIC -o libclassloops.so basicClassification.o advancedClassificationLoop.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -fPIC -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -c $(FLAGS) advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -c $(FLAGS) advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	gcc -c $(FLAGS) basicClassification.c
	

	
.PHONY: clean 

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
