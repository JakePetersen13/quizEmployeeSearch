CC=gcc 

all: program 

employeeTable.o: employeeTable.c 

	$(CC) -c employeeTable.c -o employeeTable.o 

employeeTwo.o: employeeTwo.c 

	$(CC) -c employeeTwo.c -o employeeTwo.o 

program: employeeMain.c employeetable.c employeeTwo.c 

	$(CC) -o program employeeMain.c employeetable.c employeeTwo.c 

clean:  

	del program.exe employeeTable.o employeeTwo.o 