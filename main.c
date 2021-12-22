#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>







//杨辉三角
//int main(void)
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if(i>1 && j<i)
//				arr[i][j + 1] = arr[i - 1][j] + arr[i - 1][j + 1];
//			
//		}
//	}
//	
	/*for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			if (i > 1)
			{
				arr[i][j + 1] = arr[i - 1][j] + arr[i - 1][j + 1];
			}

		}
	}*/

	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//void sc(int* p,int sz)
//{
//    int i=0;
//    _Bool ret=true;
//    for(i=0;i<sz-1;i++)
//    {
//        int j=0;
//        for(j=0;j<sz-i-1;j++)
//        {
//            if((*(p+j))%2==0)
//            {
//                int tmp=*(p+j);
//                *(p+j)=*(p+j+1);
//                *(p+j+1)=tmp;
//                ret=false;
//            }
//        }
//        if(ret)
//            break;
//    }
//}
//
//int main (void)
//{
//    int arr[]={1,3,5,7,9};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    sc(arr,sz);
//    for(int i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//int main (void)
//{
//    int a=20;
//    int sum=a;
//    while(a>=2)
//    {
//        sum+=a/2;
//        a=a/2+a%2;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//int main (void)
//{
//    int a=10;
//    char c='*';
//    int i=0;
//    int j=0;
//    int k=0;
//    for(i=1;i<=a/2*2+1;i++)
//    {
//
//        for (j=0;j<a/2+1;j++)
//        {
//            printf(" ");
//
//        }
//
//        for (k=0;k<a/2-i;k++)
//        {
//
//            printf("%c ",c);
//        }
//        printf("\n");
//
//    }
//
//    return 0;
//}
//水仙花数
//int main (void)
//{
//
//
//    int i=0;
//    for(i=0;i<10000;i++)
//    {
//        int ret=i;
//        int count=1;
//        int sum=0;
//        while(ret/=10)
//        {
//           count++;
//        }
//        ret=i;
//        while(ret)
//        {
//            sum+=pow(ret%10,count);
//            ret/=10;
//        }
//        if(i==sum)
//           printf("%d ",sum);
//    }
//
//    return 0;
//}

//int mypow(int k,int n)
//{
//    int ret=k;
//    for(int i=1;i<n;i++)
//    {
//       ret += k*(int)pow(10,i);
//    }
//    return ret;
//}
//
//int rea(int k, int n)
//{
//    if(n==1)
//        return k;
//    else
//        return mypow(k,n)+rea(k,n-1);
//}

//int main (void)
//{
//    int k=1;
//    int n=5;
//
//    int ret=0;
//    int sum=0;
//    int i=0;
//    for(i=0;i<n;i++)
//    {
//        ret=ret*10+k;
//        sum+=ret;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

#include <stdio.h>

//int main(void)
//{
//    char* c[] = {"ENTER","NEW","POINT","FiRST"};
//    char**cp[] = {c+ 3,c + 2,c + 1,c};
//    char***cpp=cp;
//    printf("%s\n",**++cpp);
//    printf("%s\n",*--*++cpp + 3);
//    printf("%s\n",*cpp[-2]+3);
//    printf("%s\n",cpp[-1][-1]+1);
//    return 0;
//}


//void tmp(char* e1,char* e2,int sz)
//{
//    for(int i=0;i<sz;i++)
//    {
//        char mtp = *e1;
//        *e1 = *e2;
//        *e2 = mtp;
//        e1++;
//        e2++;
//    }
//}
//
//void my_qsort(void* ptr,size_t count,size_t width,int (*cmp)(void* e1,void* e2) )
//{
//    int i=0;
//    for ( i = 0; i < count-1;i++)
//    {
//        int j=0;
//        for(j=0;j < count-i-1;j++)
//        {
//            if(cmp((char*)ptr + j * width,(char*)ptr + (j+1) * width) > 0)
//                tmp((char*)ptr + j * width,(char*)ptr + (j+1) * width,width);
//        }
//    }
//}

//int int_cmp(void* e1,void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//
//}
//

//int main(void)
//{
//    int arr[]={10,9,8,5,6,7,4,3,2,1,};
//    size_t sz=sizeof(arr)/sizeof(arr[0]);
//    my_qsort(arr,sz,sizeof(arr[0]),int_cmp);
//    int i=0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//
//}

//
//typedef struct stu
//{
//    char Name[10];
//    char Sex[5];
//    short Age;
//}stu;
//
//int cmp_stu(void* e1,void* e2)
//{
//    if(  (**(stu**)e1).Age > (**(stu**)e2).Age)
//        return 1;
//    else if((**(stu**)e1).Age == (**(stu**)e2).Age)
//        return 0;
//    else
//        return -1;
//}
//使用qsort函数
//
//int main(void)
//{
//    stu a={"李白","男",18};
//    stu b={"李清照","女",19};
//    stu c = {"杜甫", "男", 17};
//    stu* a1=&a;
//    stu* b1=&b;
//    stu* c1=&c;
//    stu*p[]={a1,b1,c1};
//    //stu* = p;
//    qsort(p,sizeof(p)/sizeof(p[0]),sizeof(p[0]),cmp_stu);
//    for(int i=0;i<3;i++)
//    {
//        printf("%d\n",p[i]->Age);
//    }
//    return 0;
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//
//int main()
//{
//    int (*pa)(int,int)=Add;
//    int (*pass[4])(int,int)={pa};
//    int ret=(*pass)(3,4);
//    printf("%d",ret);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <math.h>
//
//int mypow(int a, int n)
//{
//
//	//int sum = 0;
//	while (a += pow(10, a), n--)
//		continue;
//	return a;
//}
//int intsum(int a,int n)
//{
//	if (n = 1)
//		return a;
//	else
//		return mypow(a,n)+ intsum(a, n - 1);
//}
//int mian(void)
//{
//	printf("%d\n", mypow(1,1));
//	int a = 11;
//	/nt_sum(a,n);
//	return 0;
//}

//逆序字符串
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char*left = str;
//	char* right = str + len-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//递归实现倒叙字符串

//int main(void)
//{
//    char* c[] = {"ENTER","NEW","POINT","FiRST"};
//    char**cp[] = {c+ 3,c + 2,c + 1,c};
//    char***cpp=cp;
//    printf("%s\n",**++cpp);
//    printf("%s\n",*--*++cpp + 3);
//    printf("%s\n",*cpp[-2]+3);
//    printf("%s\n",cpp[-1][-1]+1);
//    return 0;
//}


//void tmp(char* e1,char* e2,int sz)
//{
//    for(int i=0;i<sz;i++)
//    {
//        char mtp = *e1;
//        *e1 = *e2;
//        *e2 = mtp;
//        e1++;
//        e2++;
//    }
//}
//
//void my_qsort(void* ptr,size_t count,size_t width,int (*cmp)(void* e1,void* e2) )
//{
//    int i=0;
//    for ( i = 0; i < count-1;i++)
//    {
//        int j=0;
//        for(j=0;j < count-i-1;j++)
//        {
//            if(cmp((char*)ptr + j * width,(char*)ptr + (j+1) * width) > 0)
//                tmp((char*)ptr + j * width,(char*)ptr + (j+1) * width,width);
//        }
//    }
//}

//int int_cmp(void* e1,void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//
//}
//

//int main(void)
//{
//    int arr[]={10,9,8,5,6,7,4,3,2,1,};
//    size_t sz=sizeof(arr)/sizeof(arr[0]);
//    my_qsort(arr,sz,sizeof(arr[0]),int_cmp);
//    int i=0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//
//}

//
//typedef struct stu
//{
//    char Name[10];
//    char Sex[5];
//    short Age;
//}stu;
//
//int cmp_stu(void* e1,void* e2)
//{
//    if(  (**(stu**)e1).Age > (**(stu**)e2).Age)
//        return 1;
//    else if((**(stu**)e1).Age == (**(stu**)e2).Age)
//        return 0;
//    else
//        return -1;
//}
//使用qsort函数
//
//int main(void)
//{
//    stu a={"李白","男",18};
//    stu b={"李清照","女",19};
//    stu c = {"杜甫", "男", 17};
//    stu* a1=&a;
//    stu* b1=&b;
//    stu* c1=&c;
//    stu*p[]={a1,b1,c1};
//    //stu* = p;
//    qsort(p,sizeof(p)/sizeof(p[0]),sizeof(p[0]),cmp_stu);
//    for(int i=0;i<3;i++)
//    {
//        printf("%d\n",p[i]->Age);
//    }
//    return 0;
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//
//int main()
//{
//    int (*pa)(int,int)=Add;
//    int (*pass[4])(int,int)={pa};
//    int ret=(*pass)(3,4);
//    printf("%d",ret);
//    return 0;
//}

//typedef struct stu
//{
//    char Name[10];
//    char Sex[5];
//    short Age;
//}stu;
//
//int cmp_stu(void* e1,void* e2)
//{
//    return ((stu*)e1)->Age - ((stu*)e2) -> Age;
//}
////使用qsort函数
//int main(void)
//{
//    stu a={"李白","男",18};
//    stu b={"李清照","女",19};
//    stu c = {"杜甫", "男", 17};
//    stu* a1=&a;
//    stu* b1=&b;
//    stu* c1=&c;
//    stu*p[]={a1,b1,c1};
//    //stu* = p;
//    qsort(p,sizeof(p)/sizeof(p[1]),sizeof(p[1]),cmp_stu);
//    for(int i=0;i<3;i++)
//    {
//        printf("%p\n",p[i]);
//    }
//    return 0;
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//
//int main()
//{
//    int (*pa)(int,int)=Add;
//    int (*pass[4])(int,int)={pa};
//    int ret=(*pass)(3,4);
//    printf("%d",ret);
//    return 0;
//}

//int main(vopid)
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	qsort();
//	return 0;
//}

//double mypow( const int k, int n)
//{
//	if (n < 0)
//	{
//		return mypow(k,-n);
//	}
//	else if (n > 0)
//	{
//		return k * mypow(k, n-1);
//	}
//	else if (!n)
//	{
//		return 1;
//	}
//
//}
//
//
//int main(void)
//{
//	int k = 0;
//	int n = 0;
//	if (scanf("%d^%d", &k, &n) == 2)//判断输入是不是两个整数
//	{
//		int a = mypow(k, n);
//		printf("%d\n", a);
//	}
//
//	else
//	{
//		printf("输入错误");
//		while (getchar() != '\n')//否则清空缓冲区
//			continue;
//	}
//
//
//}

//void test(int (*p)[5])
//{
//	printf("%d\n", **p);
//}
//
//int main(void)
//{
//	int arr[3][4] = { 0 };
//	test(arr);
//	return 0;
//}
//void print(int (*p)[5])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(p[i] + j));
//		}
//		printf("\n");
//	}
//
//}
//
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr);
//	return 0;
//}
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	数组指针
//	int(*p)[] = &arr1;
//	printf("%d\n", *(*p+2));
	//for (int i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *( *(parr + i) + j ));
	//	}
	//	printf("\n");
	//}
	//return 0;

//int main(void)
//{
//	char* p1 = "abcde";
//	char* p2 = "abcde";
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}
//int main(void)
//{
//	int i = 0, j = 0, k = 2, m = 0;
//	if (m = j++ && i++ || k++)
//		printf("1\n");
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 0,1,2,3,4 };
//	int p[] = arr;
//	printf("%d", *p);
//	return 0;
//}

////浮点数和整数的区别
//int main(void)
//{
//	int n = 9;
//	float* p = (float*) &n;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	printf("%f\n", n);
//	printf("p==%p\n", p); //p == 006FF794
//	printf("n==%p\n", &n);//n == 006FF794
//	return 0;
//}
//int main(void)
//{
//	char c = -128;
//	//100000000/
//	printf("%u\n", c);
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int ret = 0;
//	while (*str++ != '\0')
//	{PP{{}}}}
//		ret++;
//	}
//	return ret;
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int* const p = &a;
//	double b = 1.0;
//	p = &b;
//	*p = 120;
//}

//void my_strcpy(char* dest ,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++);
//}
//
//
//int main (void)
//{
//	char arr[] = "################";
//	char arr1[] = "bit";
//	my_strcpy(arr, NULL);
//	printf("%s\n", arr);
//	return 0;
//}



//struct 结构体关键字；MyStruct结构体标签      struct MyStruct  结构体类型
//typedef struct MyStruct
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print(stu* p)
//{
//	printf("%d\n", p->age);
//	printf("%s\n", p->name);
//	printf("%s\n", p->tele);
//	printf("%s\n", p->sex);
//}
//int main(void)
//{
//	stu a = { "sda",12,"13217981893", };
//	struct MyStruct b = {"123" };
//	printf("%s\n", a.age);
//	printf("%s\n", b.name);
//	print(&a);
//	return 0;
//}


//int jie_chen(int n)//求阶乘
//{
//	if (1 == n)
//		return 1;
//	else
//		return n * jie_chen(n - 1);
//}
//
//double sinx(double x, int n)//使用递归
//{
//	if (1 == n)
//		return x;
//	else
//		return sinx(x, n - 2) + pow(-1.0, n - 1) * pow(x, 2 * n - 1) / jie_chen(2 * n - 1);
//}
//
//int main(void)
//{
//	double x = 0;
//	int n = 0;
//	scanf("%f%d", &x, &n);
//	printf("%lf", sinx(x, n));
//
//	return 0;
//}
//实现 n的k次方
//double pow(int n, int k)
//{
//	if (!k)
//		return 1;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//	else
//		return 1 / pow(n, -k);
//}
//
//
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%lf", pow(n, k));
//	return 0;
//}
//

//unsigned int Digitsum(unsigned int a)
//{
//	if (a >= 10)
//		return a % 10 + Digitsum(a / 10);
//	else
//		return a;
//
//}
//
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%ud\n",Digitsum(a));
//	return 0;
//}

//
//int my_strlen(char* str)
//{
//	char* a = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - a;
//}
////倒叙字符串
//void reverse_String(char* p)
//{
//	int left = 0;
//    int right =my_strlen(p)-1;
//	while (left<right)
//	{
//		int map = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = map;
//		left++;
//		right--;
//	}
//}

//递归实现倒叙字符串
//void reverse_String(char* p)
//{
//	char right = my_strlen(p)-1;
//	char mtp = *p;
//	*p = *(p+right);
//	*(p+right) = '\0';
//	if(my_strlen(p)>=3)
//		reverse_String(p+1);
//	*(p+right) = mtp;
//}
//
//int main(void)
//{
//	char arr[] = "abcdefgh";
//	reverse_String(arr);
//	printf("%s", arr);
//	return 0;
//}



//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)     //读取输入字符
//	{
//		putchar(ch);       //输出字符
//	}
//	putchar('\n');
//	return 0;
//}
//void Relase(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int mtp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = mtp;
//	}
//}
//
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	Relase(arr1, arr2,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}




//int main(void)
//{
//	short i = 0;
//	printf("%zd", sizeof(i + 1));
//	printf("%zd", sizeof(!i));
//	printf("%zd", sizeof(+i));
//
//	return 0;
//}

//
//int print(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * print(n - 1);
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d", print(n));
//}
//


//void Revrse(int arr[], int sz)
//{
//	int i = 0;
//	int left, right;
//	while(left = i,right = sz - 1 - i, left < right)
//	{
//		int map = arr[right];
//		arr[right] = arr[left];
//		arr[left] = map;
//		i++;
//	}
//
//
//}
//
//int main(void)
//{
//	int arr[] = { 0,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof (arr)/sizeof(arr[0]);
//	Revrse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}








//
//int main(void)
//{
//	short a = 1;
//	printf("%zd\n", sizeof(!a));
//	//printf("%d\n", a);
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的次数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实已经不完全有序
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//
//
//
//
//int main(void)
//{
//	int arr[] = { 8,7,6,5,4,3,2,1,0 ,9};
//	//对arr进行排序，排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Frog1(int n)
//{
//
//		return Frog1(n - 1) + Frog1(n - 2);
//
//}
//
//int main(void)
//{
//	int n = 4;
//	int ret = 0;
//	//scanf("%d", &n);
//	ret = Frog1(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int count = 0;
//int Fib(n)
//{
//	if (3 == n)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//	int i = 1, j = 1, count = 0,add=0;
//	if (n > 2)
//		for (; count < n-2; count++)
//		{
//			add = i + j;
//			j = i;
//			i = add;
//		}
//	else
//		add = 1;
//	return add;
//}
//102334155
// 102334155
// 102334155
//165580141
//int main(void)
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int Facl(int n)
//{
//	/*int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}*/
//	if (n > 1)
//		return n * Facl(n - 1);
//	else
//		return 1;
//}
//int main(void)
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Facl(n);
//	printf("%d", ret);
//	return 0;
//}

//strlen 函数实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//
//int main(void)
//{
//	char str[] = "\0";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}
//int main(void)
//{
//
//	return 0;
//}
//
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != "\0")
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
////	scanf("%s"&arr);
//
//}
//
//int main(void)
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d", a);
//
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			i = 0;
//	{
//		i = 1;
//	}
//	return i;
//}
//int main(void)
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (1 == is_prime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main(void)
//{
//	char arr1[20] = "bit";
//	const char arr2[10] = "#######";
//	memset(arr2, '*', 5);
//	printf("%s\n", arr2);
//	return 0;
//}
/*调用system("cls")清屏*/
//void menu()
//{
//	printf("########################\n");
//	printf("##1.开始#######2.退出##\n");
//	printf("########################\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的起点
//
//	//时间戳
//	//当前计算机的时间减去计算机的起始时间--(1970-01-01-00-00-00)==(xxxx)秒
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//	//printf("猜数字%d\n",ret);
//
//}
//int main(void)
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();//猜字游戏
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//
//	} while (input);
//
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//二分查找，有序的数组查找
//	int p = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > p)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < p)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}*/
//
//	//for (int i = 1; i < 10; i++)
//	//{
//	//	for (int j = 1; j <= i; j++)
//	//	{
//	//		printf("%d*%d=%-2d ",i,j ,i * j);
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//int arr[] = { 12,32,34,54,65,6,7,87,44,14, };
//	//int mix = arr[0];
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//	for (int i = 1; i < sz; i++)
//	//	{
//	//		if (mix < arr[i])
//	//		{
//	//			mix = arr[i];
//	//		}
//	//	}
//	//	printf("%d", mix);
//
//	//
//
//
//
//
//	/*double sum = .0;
//	double flag = 1.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag / i;
//		flag = -flag;
//
//	}
//	printf("%lf", sum);              */
//
//
//
	//int count = 0;
	//for (int i = 9; i <= 100; i++)
	//{
	//	if (9 == i % 10 )
	//	{
	//		count++;
	//		printf("%d\n", i);
	//	}
	//	if (9 == (i / 10) % 10)
	//	{
	//		printf("%d\n", i);
	//		count++;
	//	}
	//}
	//int arr[100]={ 2, };
	//int t = 1;
	//int j = 0;
	//int p ;
	//scanf("%d", &p);
	//for (int i = 3; i < 300; i +=2)
	//{
	//	for ( j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (sqrt(i) < j)
	//	{
	//		//printf("%d\n", i);
	//		arr[t++] = i;
	//	}
	//}

	//	int i = 0;
	//	for (; i <= sqrt(p); i++)
	//	{
	//		if (p % arr[i] == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (i > sqrt(p))
	//	{
	//		printf("%d是质数", p);
	//
	//	}
	//	else
	//	{
	//		printf("%d不是质数", p);
	//	}// 以空间换时间。
	////printf("%d", (int)sqrt(2));
	//*for (int i = 0; i < t; i++)
	//{
	//
	//	printf("%d\n", arr[i]);
	//}*/
//
//	return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int p = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > p)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < p)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//    return 0;
//}
