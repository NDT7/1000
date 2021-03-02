/*
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
	if(a> b)
		return a;
	else 
	return b;
}

int max(float a, float b)
{
	if(a> b)
		return a;
	else 
		return b;
}

int main()
{
	cout << "int max = " << max(4, 5) << endl;
	cout << "float max " << max(4.5, 5.5) <<endl;
	return 0;
}

*/
/*

//nhap vao 3 canh va cho biet co la tam giac khong, va neu co la loai tam giac gi
#include<iostream>
using namespace std;
main()
{
	int a,b,c,t,t1,t2,t3;
	cout<<" canh a lon hon 0: ";
	cin>>a;
	cout<<" canh b lon hon 0: ";
	cin>>b;
	cout<<" canh c lon hon 0: ";
	cin>>c;
	//sap xep lai cac canh tu lon toi be
	a>b?(a=a,b=b):(t=a,a=b,b=t);
	a>c?(a=a,c=c):(t=a,a=c,c=t);
	b>c?(b=b,c=c):(t=b,b=c,c=t);
	(c+b>a)?cout<<"day la tam giac":(cout<<"day khong phai tam giac");
	t1=a*a;
	t2=b*b;
	t3=c*c;
	(t1==t2+t3)&&(c+b>a)?cout<<" vuong":cout<<" ";
	(a==b)&&(b==c)?(cout<<" deu"):((a==b)||(b==c)&&(b+c>a)?cout<<" can":cout<<" ");	
	c+b<a?"":(t1>t2+t3?cout<<" co 1 goc tu":cout<<" co 1 goc nhon");
}
*/


/*/ nhap vao ba canh cua 1 tam giac ktra xem co tao thanh tam giac khong
- Neu co, thi no la tam giac gi 
*/

#include<iostream>
using namespace std;



int main()
{
	return 0;
}
