#include <stdio.h>
// 设置常量 
#define N 3 


struct student {
	char name[20];
	int chinese;
	int math000;
	int english;
	int sum;
};

int main() {
	struct student str[N+1];
	int i=1,m_average=0,e_average=0,c_average=0;
//	str[0].math000 =0;
//	str[0].english =0;
//	str[0].chinese =0;
	
	//printf("%d\n",str[0].math000);
	for(i=1;i<=N;i++){
		//printf("i=%d\n",i);
		printf("请输入第%d个学生的成绩\n",i);
		scanf("%s",&str[i].name);
		scanf("%d%d%d",&str[i].math000,&str[i].chinese,&str[i].english);
		str[i].sum = str[i].math000+str[i].chinese+str[i].english;
		
		str[0].math000 += str[i].math000;
		str[0].english += str[i].english;
		str[0].chinese += str[i].math000;
		
	}
	
	m_average = str[0].math000/3;
	e_average = str[0].english/3;
	c_average = str[0].chinese/3;
	
	
	printf("\t姓名\t数学\t语文\t英语\t总成绩\n");
	for(i=1;i<=N;i++){
		printf("\t%s\t%d\t%d\t%d\t%d\n",str[i].name,str[i].math000,str[i].chinese,str[i].english,str[i].sum);
	}
	printf("\t\t%d\t%d\t%d\t\n",m_average,c_average,e_average);
	
	
	
	return 0;
}
