#include<iostream>
#include<string.h>

typedef struct person {
	int weight;
	int height;
	int grade;
}person;

void add_person(person* per) {
	std::cin >> per->weight;
	std::cin >> per->height;
}

int main()
{
	person* list[50];
	int p_num = 0;

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		list[p_num] = new person;
		add_person(list[p_num]);

		p_num++;
	}

	for (int a = 0; a < p_num; a++) {
		int gra = 1;
		for (int b = 0; b < p_num; b++) {
			if (list[a]->weight < list[b]->weight && list[a]->height < list[b]->height) {
				gra++;
			}
		}
		list[a]->grade = gra;
		std::cout << list[a]->grade << " ";
	}

	for (int d = 0; d < p_num; d++) {
		delete list[d];
	}
}
