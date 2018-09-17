main: main.o preorder.o postorder.o inorder.o ins.o search.o ndelete.o min.o max.o
	gcc -g -o main main.o preorder.o postorder.o inorder.o ins.o search.o ndelete.o min.o max.o
main.o: main.c
	gcc -g -c main.c -o main.o
ins.o: ins.c
	gcc -g -c ins.c -o ins.o
preorder.o: preorder.c
	gcc -g -c preorder.c -o preorder.o
postorder.o: postorder.c
	gcc -g -c postorder.c -o postorder.o
postorder.o: postorder.c
	gcc -g -c postorder.c -o postorder.o
inorder.o: inorder.c
	gcc -g -c inorder.c -o inorder.o
search.o: search.c
	gcc -g -c search.c -o search.o
ndelete.o: ndelete.c
	gcc -g -c ndelete.c -o ndelete.o
min.o: min.c
	gcc -g -c min.c -o min.o
max.o: ndelete.c
	gcc -g -c max.c -o max.o
clean:
	rm -r *.o main
