#include <turtle.h>
using namespace std;
int main(){
	initWorld(1500,1000);
	setSpeed(100000);
	float angle=360/3+0.8;
	for (int i=1;i<=925;i=i+2){
		if (i%3==0) setPenColor(RED);
		if (i%3==1) setPenColor(GREEN);
		if (i%3==2) setPenColor(BLUE);
		fd(i);
		rt(angle);
	}
	hide();
	pause();
	return 0;
}
