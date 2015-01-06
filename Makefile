myprog: rot13lib.c main.c
	gcc -Wall main.c rot13lib.c -o proj2

demo:
	gcc -Wall main.c rot13lib.o -o proj2

clean:
	rm rot13lib.o proj2

test:
	@echo -n "Testcase 1: "
	@./proj2 testcases/1.d testcases/1.e
	
	@echo -n "Testcase 2: "
	@./proj2 testcases/2.d testcases/2.e
	
	@echo -n "Testcase 3: "
	@./proj2 testcases/3.d testcases/3.e
	
	@echo -n "Testcase 4: "
	@./proj2 testcases/4.d testcases/4.e
