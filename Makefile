output: test.c dArray.o 
	@echo "Linking and creating test.c exe file"
	gcc test.c dArray.o -o test.out 

test.o: test.c
	@echo "Creating test.c exe file"
	gcc test.c

dArray.o: dArray.c dArray.h
	@echo "Creating dArray.c obj file"
	gcc -c dArray.c

run: 
	./test.out

clean: 
	@echo "Clearing all the exe and obj files"
	rm *.o
	rm *.out
