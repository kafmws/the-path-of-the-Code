#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
enum weekday {
    Mon,
    Tues,
    Wednes=6,
    Thurs,
    Friday
};
int main() {
	enum weekday day;
	day=Tues;
	int c=day;
	printf("%d %d",day,c);//���Ϊ1 1
	++day;//C�п��ԣ�C++������
	if(day==Wednes) {
		printf("yes");
	}//���yes
}
