#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<=0 || b<=0 || c<=0)
	{
		printf("error");
		return 0;
	}
	if(a+b>c && c+a>b && b+c>a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}


//输入三角形三边长度，判断是否为三角形。是，输出yes；否输出no。边长不为正数时，输出error。
//输入三个边的长度以逗号分隔，例如：
//输入：1,2,3回车
//输出：no
