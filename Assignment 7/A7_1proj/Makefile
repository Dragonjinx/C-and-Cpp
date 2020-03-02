
#Trying out macros:
GW = gcc -Wall -o
A = use_linked_list
L = linked_list

#Trying out targets :
all: $(A).o $(L).o
	$(GW) use_linked_list $(A).o $(L).o

$(A).o : $(L).h $(A).c

$(L).o : $(L).h $(L).c

clean:
	rm *.o