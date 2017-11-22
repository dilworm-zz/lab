all: 
	gcc testso.c -g -fPIC -shared -o libtest.so 
	gcc main.c -g -L. -ltest -o t1
	gcc main2.c -g -L. -ltest -o t2
clean:
	rm *.so t1 t2

