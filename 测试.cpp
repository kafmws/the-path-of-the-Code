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
	printf("%d %d",day,c);//输出为1 1
	++day;//C中可以，C++不允许
	if(day==Wednes) {
		printf("yes");
	}//输出yes
}
