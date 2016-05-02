target:
	gcc sort_test.c ./common/*.c ./sort/*.c -o sort_test
clean:
	rm sort_test
