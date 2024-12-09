

#include <stdio.h>

 struct time{
                            int hh; // 时
                            int mm; // 分
                            int ss; //秒
                   } ;
struct time to_time(int n){

	struct time tm;
	tm.hh=n/3600;
	tm.mm=n%3600/60;
	tm.ss=n%60;
	return tm;
}
int put_time(struct time tm){
	printf("%02d:%02d:%02d\n",tm.hh,tm.mm,tm.ss);
	return 0;
}
int main()
{
    int n;
    struct time tm;
    while(scanf("%d", &n) != EOF)
    {
        tm = to_time(n);
        put_time(tm);
    }
    return 0;
}
