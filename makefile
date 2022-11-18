FLAGS = -Wall
all: mains maindloop maindrec loops

mains: main.o libclassrec.a NumClass.h
	gcc $(FLAGS) -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so NumClass.h
	gcc $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so NumClass.h
	gcc $(FLAGS) -o maindrec main.o ./libclassrec.so

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

main.o: main.c NumClass.h
	gcc $(FLAGS) -c main.c

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared -fPIC -o libclassloops.so basicClassification.o advancedClassificationLoop.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -fPIC -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	

	
basicClassification.o: basicClassification.c 
	gcc $(FLAGS) -c basicClassification.c
	
advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc $(FLAGS) -c advancedClassificationRecursion.c


	
.PHONY: clean recursives recursived loops loopd all

clean:
	rm -f *.o *.so *.a mains maindloop maindrec 
	

