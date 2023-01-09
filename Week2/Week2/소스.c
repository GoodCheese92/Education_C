#include <stdio.h>

void add(int a, int b) {
	a += b;
	printf("a(add ÇÔ¼ö) : %d ", a);
}

void add_p(int* a, int* b) {
	*a += *b;
}

int main() {
	struct student {
		char name[20];
		int num, kor, eng, mat;
		double avg;
	};

	struct student s1;
	
	struct point {
		int x;
		int y;
	} p1, p2;

	union sungjuk {
		char grade;
		int score;
	};

	union sungjuk std = { 'B' };
	printf("%c  %d\n", std.grade, std.score);
	std.score = 97;
	printf("%c  %d\n", std.grade, std.score);
	printf("size %d", sizeof(std));
	
	printf("\n");

	enum color { red = 10, green = 20, blue = 30};
	enum week {mon, tue, wed};

	enum week weekday;
	weekday = mon;

	int a = 5, b = 3;
	add(a, b);
	printf("a(argument) : %d ", a);


	return 0;
}
