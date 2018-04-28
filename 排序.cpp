#include <iostream> 
#include <conio.h> 
 using  namespace std; 
 
 
 int main() 
 {
 int a,d,m[9999],m1[9999],t;
   for(int g = 1; g == 1;)
 {
   cout << "请输入排序的项数: ";
   cin >> a;
   for(int e = 1; e <= a; e ++)
   {
   	 cout << "请输入第" << e << "项: ";
     cin >> m[e];
	 m1[e] = m[e]; 
   }
   for(int b = 1; b <= a; b ++)
   {
 	  for(int c = b; c <= a; c ++)
 	  {
 	  	 if(m[b]>m[c])
 	  	 {
 	  	 t = m[c];
 	  	 m[c] = m[b];
 	  	 m[b] = t;
 	  	 }
 	  }
   }
   cout << "原数列为: "; 
   for(int f = 1; f <= a; f ++)
   {
   	cout << "   " << m1[f];
   }
   cout << "\n";
   cout << "从小到大排序后: "; 
   for(int f = 1; f <= a; f ++)
   {
   	cout << "   " << m[f];
   }
   cout << "\n";
   cout << "从大到小排序后: "; 
   for(int f = a; f >= 1; f --)
   {
   	cout << "   " << m[f];
   }
   cout << "\n";
   cout << "输入1继续运算，其他数字停止运算!" << "\n请输入: ";
   cin >> g;
 }
 getch();
 return 0;
}
