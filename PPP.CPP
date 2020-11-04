// All Pattern programming using C++ 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class allpattern
{
 public:
 int i,sp,p,ch,ch2,num,p1;  // 'i' is for lines in pattern, 'sp' is for space
 void symbolpattern1(int ch2);     // 'p' is for pattern printing
 void symbolpattern2(int ch2);
 void numericpattern(int ch2);
 void characterpattern(int ch2);
 void numberseries(int ch2);
 void diamondpattern(int ch2);
 void homepattern(int ch2);
 void alphabetAsPattern(int ch2);
};

void allpattern::alphabetAsPattern(int ch2)
{
	switch(ch2)
	{
	case 1:
		cout<<"\n\t\t\t\t  'A' as Pattern\n\n";
		for(i=1;i<10;i++)
		{
		cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 ||p==1 || p==8 || i==5)
			{
				if(i==1 && p==1)
					cout<<" ";
				else
					cout<<" *";
			}
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 2:
		cout<<"\n\t\t\t\t   'B' as Pattern\n\n";
		for(i=1;i<=9;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 || p==1 || i==5 ||i==9 || p==8)
				{
					if((p==8 && i==1)||(p==8 && i==9) || (i==5 && p==8))
						cout<<" ";
					else
						cout<<" *";
				}
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 3: 
		cout<<"\n\t\t\t\t  'C' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 || p==1 ||i==10)
				{
					if((p==2 && i==1)||(p==1 && i==1) || (i==10 && p==1)||(i==10 && p==2))
						cout<<" ";
					else
						cout<<" *";
				}
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 4:
		cout<<"\n\t\t\t\t  'D' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 || p==1 ||i==10 || p==8)
				{
					if((i==1 && p==8) ||(i==10 && p==8))
						cout<<" ";
					else
						cout<<" *";
				}
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 5:
		cout<<"\n\t\t\t\t  'E' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 ||i==10 || (i==5 && p<=6)|| p==1)
				{	
					cout<<" *";
				}
			else
				cout<" ";
		}
		cout<<"\n";
		}
		break;
	case 6:
		cout<<"\n\t\t\t\t  'F' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 || (i==5 && p<=6)|| p==1)
				{	
					cout<<" *";
				}
			else
				cout<" ";
		}
		cout<<"\n";
		}
		break;
	case 7:
		cout<<"\n\t\t\t\t  'G' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(i==1 || p==1 ||i==10 || (p==4 && i>=5) )
				{
					if((p==2 && i==1)||(p==1 && i==1) || (i==10 && p==1)||(i==10 && p==2))
						cout<<" ";
					else
						cout<<" *";
				}
			else
				cout<<"  ";
		}	
		cout<<"\n";
		}
		break;
	case 8:
		cout<<"\n\t\t\t\t  'H' as Pattern\n\n";
		for(i=1;i<=9;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=8;p++)
		{
			if(p==1 || p==8 || i==5)
				cout<<" *";
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 9:
		cout<<"\n\t\t\t\t  'I' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
		for(p=1;p<=9;p++)
		{
			if(i==1 || p==5 || i==10 )
				cout<<" *";
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 10:
		cout<<"\n\t\t\t\t  'J' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
		cout<<"\t\t\t\t";
		for(p=1;p<=5;p++)
		{
			if(i==1 || p==5 || (i>7 && p==1) || (i==10 && (p>1 && p<5)))
				{
					cout<<" *";
				}
			else
				cout<<"  ";
		}
		cout<<"\n";
		}
		break;
	case 11:
		num=6;
		cout<<"\n\t\t\t  'K' as Pattern\n\n";
		for(i=1;i<=11;i++)
		{
			cout<<"\t\t\t\t";
			cout<<"**";
			for(p=1;p<=6;p++)
			{
			if(p==num)
			{
				cout<<"**";
			}
			else
				cout<<"  ";
			}
			if(i<=5)
			{
				num--;
			}
			else if(i<=10)
			{
				num++;
			}
			cout<<"\n";
		}
		break;
	case 12:
		cout<<"\n\t\t\t\t 'L' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
			cout<<"**";
			if(i==10)
			{
				for(p=1;p<=10;p++)
				{
					cout<<"**";
				}
			}
			cout<<"\n";
		}
		break;
	case 13:
		cout<<"\n\t\t\t\t\t 'M' as Pattern\n\n";
		num=15;
		for(i=1;i<=num;i++)
		{
			cout<<"\t\t\t\t";
			for(p=1;p<=i;p++)
			{
				if(p==1 || p==i || p==num)
					cout<<"*";
				else
					cout<<" ";
			}
			for(sp=num-1;sp>=i;sp--)
			{
				cout<<"  ";
			}
			for(p=1;p<=i;p++)
			{
				if(p==1 || p==i || p==num)
					cout<<"*";
				else
					cout<<" ";
			}
			cout<<"\n";
		}
		for(i=1;i<=4;i++)
		{
			cout<<"\t\t\t\t";
			for(p=1;p<=2*num;p++)
			{
				if(p==1 || p==2*num )
					cout<<"*";
				else
					cout<<" ";
			}
			cout<<"\n";
		}
		break;
	case 14:
		cout<<"\n\t\t\t\t 'N' as Pattern\n\n";
		num=20;
		for(i=1;i<=num;i++)
		{
			cout<<"\t\t\t\t";
			for(p=1;p<=num;p++)
			{
				if(p==1 || p==i || p==num)
					cout<<"*";
				else
					cout<<" ";
			}
			cout<<"\n";
		}
		break;
	case 15:
		cout<<"\n\t\t\t\t 'O' as Pattern\n\n";
		for(i=1;i<=10;i++)
		{
			cout<<"\t\t\t\t";
			for(p=1;p<=10;p++)
			{
				if(i==1 || i==10 || p==1 || p==10)
				{
					if((i==1 && p==1) || (i==1 && p==10) || (i==10 && p==1) || (i==10 && p==10))
						cout<<"  ";
					else
						cout<<"* ";
				}
				else
					cout<<"  ";
			}
			cout<<"\n";
		}
		break;
	case 16:
		cout<<"\n\t\t\t\t 'P' as Pattern\n\n";
		for(i=1;i<=15;i++)
		{
			cout<<"\t\t\t\t";
			for(p=1;p<=8;p++)
			{
				if(i==1 || i==7 ||p==1 || i==2 ||i==8 || ( i<=8 && p==8))
					{
						if((i==1 && p==8) || (i==8 && p==8))
							cout<<"  ";
						else
							cout<<"** ";
					}
				else 
					cout<<"   ";
			}
			cout<<"\n";
		}
		break;	
	}
}

void allpattern::symbolpattern1(int ch2)
{
  switch(ch2)
     {
      case 1:
	  cout<<"\n\t\t\t   Triangle Pattern-1\n\n";
	  for(i=1;i<=5;i++)
	  {
	   cout<<"\t\t\t\t";
	   for(p=1;p<=i;p++)
	   {
	    cout<<" *";
	   }
	    cout<<endl;
	  }
      break;
      case 2:
	  cout<<"\n\t\t\t   Triangle Pattern-2\n\n";
	  for(i=1;i<=5;i++)
	  {
	   cout<<"\t\t\t\t";
	   for(p=i;p<=5;p++)
	   {
	    cout<<" *";
	   }
	    cout<<endl;
	   }
      break;
      case 3:
	   cout<<"\n\t\t\t   Triangle Pattern-3\n\n";
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(sp=1;sp<=5-i;sp++)
	    {
	     cout<<" ";
	    }
	     for(p=1;p<=i;p++)
	     {
	       cout<<" *";
	     }
	       cout<<"\n";
	    }
      break;
      case 4:
	     cout<<"\n\t\t\t   Triangle Pattern-4\n\n";
	     for(i=1;i<=5;i++)
	     {
	      cout<<"\t\t\t\t";
	      for(sp=1;sp<=i;sp++)
	      {
	       cout<<" ";
	      }
	      for(p=0;p<=5-i;p++)
	      {
	       cout<<" *";
	      }
	      cout<<"\n";
	     }
      break;
      case 5:
	    cout<<"\n\t\t\t   Triangle Patter-5\n\n";
	    for(i=1;i<=5;i++)
	    {
	     cout<<"\t\t\t\t";
	     for(sp=1;sp<=5-i;sp++)
	     {
	      cout<<"  ";
	     }
	      for(p=1;p<=i;p++)
	      {
	       cout<<" *";
	      }
	     cout<<"\n";
	     }
      break;
      case 6:
	   cout<<"\n\t\t\t   Triangle Pattern-6\n\n";
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(sp=2;sp<=i;sp++)
	    {
	     cout<<"  ";
	    }
	     for(p=5;p>=i;p--)
	     {
	      cout<<" *";
	     }
	     cout<<endl;
	    }
       break;
     case 7:
	   cout<<"\n\t\t\t   Triangle Pattern-7\n\n";
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(p=1;p<=i;p++)
	    {
	     cout<<" *";
	    }
	    cout<<"\n";
	   }
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(p=4;p>=i;p--)
	    {
	     cout<<" *";
	    }
	     cout<<"\n";
	   }
      break;
      case 8:
	  cout<<"\n\t\t\t   Triangle Pattern-8\n\n";
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(sp=5;sp>=i;sp--)
	    {
	     cout<<" ";
	    }
	    for(p=1;p<=i;p++)
	    {
	     cout<<"*";
	    }
	     cout<<"\n";
	   }
	   for(i=1;i<=5;i++)
	   {
	    cout<<"\t\t\t\t";
	    for(sp=1;sp<=i;sp++)
	    {
	      cout<<" ";
	    }
	     for(p=5;p>=i;p--)
	     {
	      cout<<"*";
	     }
	      cout<<"\n";
	    }
	break;
      case 9:
      cout<<"\n\t\t\t\tTriangle Pattern-9\n\n";
      for(i=1;i<=5;i++)
      {
       cout<<"\t\t\t\t";
       for(sp=4;sp>=i;sp--)
       {
	cout<<" ";
       }
       for(p=1;p<=i;p++)
       {
	cout<<" *";
       }
       for(sp=4;sp>=i;sp--)
       {
	cout<<"  ";
       }
       for(p=1;p<=i;p++)
       {
	cout<<" *";
       }
      cout<<"\n";
     }
     break;
     case 10:
      cout<<"\n\t\t\t   Triangle Pattern-10\n\n";
      for(i=1;i<=5;i++)
      {
       cout<<"\t\t\t\t";
       for(p=1;p<=i;p++)
       {
	cout<<"*";
       }
       for(sp=4;sp>=i;sp--)
       {
	cout<<"  ";
       }
       for(p=1;p<=i;p++)
       {
	cout<<"*";
       }
      cout<<"\n";
    }
     break;
    case 11:
      cout<<"\n\t\t\t   Triangle Pattern-11\n\n";
	for(i=1;i<=5;i++)
	{
	 cout<<"\t\t\t\t";
	 for(p=5;p>=i;p--)
	 {
	  cout<<"*";
	 }
	 for(sp=2;sp<=i;sp++)
	 {
	  cout<<"  ";
	 }
	 for(p=5;p>=i;p--)
	 {
	   cout<<"*";
	 }
      cout<<"\n";
       }
      break;
      case 12:
      cout<<"\n\t\t\t   Triangle Pattern-12\n\n";
	for(i=1;i<=5;i++)
	{
	 cout<<"\t\t\t\t";
	 for(p=5;p>=i;p--)
	 {
	  cout<<"*";
	 }
	 for(sp=2;sp<=i;sp++)
	 {
	  cout<<"  ";
	 }
	 for(p=5;p>=i;p--)
	 {
	   cout<<"*";
	 }
	cout<<"\n";
	}
	for(i=1;i<=5;i++)
	{
	 cout<<"\t\t\t\t";
	 for(p=1;p<=i;p++)
	 {
	  cout<<"*";
	 }
	 for(sp=4;sp>=i;sp--)
	 {
	  cout<<"  ";
	 }
	 for(p=1;p<=i;p++)
	 {
	  cout<<"*";
	 }
	cout<<"\n";
      }
      break;
    case 13:
     cout<<"\n\t\t\t    Triangle Pattern-13\n\n";
     for(i=1;i<=7;i++)
     {
      cout<<"\t\t\t\t";
      for(sp=7;sp>=i;sp--)
      {
       cout<<" ";
      }
       for(p=1;p<=i;p++)
       {
	if(p==1 || p==i)
	 cout<<"#";
	else
	 cout<<" ";
       }
       cout<<endl;
      }
     cout<<"\t\t\t\t";
     for(p=1;p<=8;p++)
     {
      cout<<"#";
     }
     break;
      default:
	   cout<<"\nEnter Valid Choice For Triangle Pattern Printing!!!!!!!!!!\n\n";
      }
  }
void allpattern::symbolpattern2(int ch2)
{
 switch(ch2)
 {
  case 1:
     cout<<"\n\t\t\t\tSquare Pattern-1\n\n";
     for(i=1;i<=5;i++)
     {
      cout<<"\t\t\t\t  ";
      for(p=1;p<=5;p++)
      {
       cout<<" *";
      }
      cout<<"\n";
     }
  break;
  case 2:
     cout<<"\n\t\t\t\tSquare Pattern-2\n\n";
     for(i=1;i<=5;i++)
     {
      cout<<"\t\t\t\t  ";
      for(p=1;p<=5;p++)
      {
       if(i==1 || i==5 ||p==1||p==5)
       {
	cout<<" *";
       }
       else
       {
	cout<<" @";
       }
      }
      cout<<"\n";
     }
   break;
    case 3:
	cout<<"\n\t\t\t\tSquare Pattern-3\n\n";
       for(i=1;i<=5;i++)
       {
	cout<<"\t\t\t\t  ";
	  for(p=1;p<=5;p++)
	  {
	    if(p==1 || p==5 || i==1 ||i==5)
	    {
	     cout<<" *";
	    }
	    else
	    {
	      cout<<"  ";
	    }
	  }
	  cout<<"\n";
       }
   break;
    case 4:
     cout<<"\n\t\t\t\tSquare Pattern-4\n\n";
     for(i=1;i<=5;i++)
     {
      cout<<"\t\t\t\t  ";
      for(p=1;p<=5;p++)
      {
       if((i+p)%2==0)
       {
	cout<<" *";
       }
       else
       {
	 cout<<" $";
       }
      }
      cout<<"\n";
     }
   break;
   case 5:
   cout<<"\n\t\t\t\tSquare Pattern-5\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t   ";
    for(p=1;p<=5;p++)
    {
      if(i==1 || i==5 || p==1 || p==5 || p==3)
	cout<<"# ";
      else
	cout<<"  ";
    }
     cout<<endl;
   }
   break;
   case 6:
   cout<<"\n\t\t\t\tSquare Pattern-6\n\n";
   for(i=1;i<=7;i++)
   {
    cout<<"\t\t\t\t  ";
    for(p=1;p<=7;p++)
    {
     if(i==1 || i==7 || i==4 || p==1 || p==4 || p==7)
      cout<<"# ";
     else
      cout<<"  ";
    }
      cout<<endl;
   }
    break;
   case 7:
    cout<<"\n\t\t\t\tSquare Pattern-7\n\n";
     for(i=1;i<=5;i++)
     {
      cout<<"\t\t\t\t  ";
      for(sp=5;sp>=i;sp--)
      {
       cout<<" ";
      }
      for(p=1;p<=i;p++)
      {
	cout<<"# ";
      }
       cout<<endl;
     }
     for(i=1;i<=4;i++)
     {
      cout<<"\t\t\t\t   ";
      for(sp=1;sp<=i;sp++)
      {
       cout<<" ";
      }
      for(p=4;p>=i;p--)
      {
       cout<<"# ";
      }
      cout<<endl;
     }
   break;
   case 8:
    cout<<"\n\t\t\t\tSquare Pattern-8\n\n";
    for(i=1;i<=5;i++)
     {
       cout<<"\t\t\t\t   ";
      for(sp=5;sp>=i;sp--)
       {
	cout<<" ";
       }
       for(p=1;p<=i;p++)
       {
	if(p==1 || p==i)
	cout<<"# ";
	else
	cout<<"  ";
       }
      cout<<endl;
     }
    for(i=1;i<=5;i++)
    {
     cout<<"\t\t\t\t   ";
     for(sp=1;sp<=i;sp++)
     {
      cout<<" ";
     }
     for(p=5;p>=i;p--)
     {
      if(p==5 || p==i)
       cout<<"# ";
      else
       cout<<"  ";
     }
     cout<<endl;
    }
    break;
    case 9:
    cout<<"\n\t\t\t\t  Square Pattern-9\n\n";
    cout<<"\t\t\t\t   ";
    for(p=1;p<=7;p++)
    {
      cout<<"# ";
    }
      cout<<endl;
    for(i=1;i<=5;i++)
    {
     cout<<"\t\t\t\t   ";
     for(p=1;p<=i;p++)
     {
      if(p==1)
      cout<<"# ";
     }
     for(sp=4;sp>=i;sp--)
     {
      cout<<" ";
     }
     for(p=1;p<=5;p++)
     {
      if(p==1 || p==i)
       cout<<"# ";
      else
       cout<<"  ";
     }
      cout<<endl;
    }
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t   ";
    for(p=1;p<=1;p++)
    {
     cout<<"# ";
    }
    for(sp=1;sp<i;sp++)
    {
     cout<<" ";
    }
    for(p=5;p>=i;p--)
    {
     if(p==5 || p==i)
      cout<<"# ";
     else
      cout<<"  ";
    }
   cout<<endl;
  }
  cout<<"\t\t\t\t   ";
  for(i=1;i<=7;i++)
  {
   cout<<"# ";
  }
  break;
   default:
      cout<<"\nEnter Valid Choice For Square Pattern Printing!!!!!!!!!!\n\n";
   }
 }
void allpattern::numericpattern(int ch2)
{
 int n=1;
 switch(ch2)
 {
  case 1:
  cout<<"\n \t\t\tNumeric Triangle Pattern-1\n\n";
  for(i=1;i<=5;i++)
  {
   cout<<"\t\t\t\t";
   for(p=1;p<=i;p++)
   {
    cout<<i<<" ";
   }
    cout<<endl;
  }
  break;
  case 2:
  cout<<"\n \t\t\tNumeric Triangle Pattern-2\n\n";
  for(i=1;i<=5;i++)
  {
   cout<<"\t\t\t\t";
   for(p=1;p<=i;p++)
   {
    cout<<n<<" ";
    n++;
   }
   cout<<endl;
  }
  break;
  case 3:
  cout<<"\n \t\t\tNumeric Triangle Pattern-3\n\n";
  for(i=1;i<=5;i++)
  {
   cout<<"\t\t\t\t";
   for(p=1;p<=i;p++)
   {
    cout<<p<<" ";
   }
   cout<<endl;
  }
  break;
  case 4:
  cout<<"\n \t\t\tNumeric Triangle Pattern-4\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    for(sp=5;sp>=i;sp--)
    {
     cout<<" ";
    }
    for(p=1;p<=i;p++)
    {
     cout<<i;
    }
   cout<<endl;
   }
  break;
  case 5:
   cout<<"\n \t\t\tNumeric Triangle Pattern-5\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    for(sp=2;sp<=i;sp++)
    {
     cout<<" ";
    }
    for(p=5;p>=i;p--)
    {
    cout<<p;
    }
    cout<<endl;
   }
  break;
  case 6:
  cout<<"\n \t\t\tNumeric Triangle Pattern-6\n\n";
  for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    for(sp=5;sp>=i;sp--)
    {
     cout<<" ";
    }
    for(p=1;p<=i;p++)
    {
     cout<<i<<" ";
    }
   cout<<endl;
   }
  break;
  case 7:
  cout<<"\n \t\t\tNumeric Triangle Pattern-7\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    for(sp=2;sp<=i;sp++)
    {
     cout<<" ";
    }
    for(p=5;p>=i;p--)
    {
    cout<<p<<" ";
    }
    cout<<endl;
   }
  break;
  default:
      cout<<"\nEnter Valid Choice For Numeric Triangle Pattern Printing!!!!!!!!!!\n\n";
 }
}
void allpattern::numberseries(int ch2)
{
 int a,d,n,i,A;
 switch(ch2)
 {
  case 1:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter difference: ";
   cin>>d;
   cout<<"Enter number of element: ";
   cin>>n;
   cout<<"\n \t\t\t\tArithmetic Series\n\n";
   A=a+d;
   cout<<"\t\t\t";
   cout<<a<<",";
   for(i=1;i<=n;i++)
   {
    cout<<A<<",";
    A=A+d;
   }
   cout<<endl;
   break;
  case 2:
   cout<<"\nEnter first term: ";
   cin>>a;
   cout<<"Enter number of element: ";
   cin>>n;
   cout<<"\n \t\t\t\tGeometric Series\n\n";
   A=a;
   cout<<"\t\t\t";
   for(i=1;i<=n;i++)
   {
     cout<<A<<",";
     A=2*A;
   }
   cout<<endl;
   break;
  case 3:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter series last term: ";
   cin>>d;
   cout<<"\n \t\t\t\tOdd Number Series"<<"(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t";
    for(i=a;i<=d;i++)
    {
     if(i%2!=0)
     cout<<i<<",";
    }
   cout<<endl;
   break;
  case 4:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter series last term: ";
   cin>>d;
   cout<<"\n \t\t\t\tEven Number Series"<<"(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t";
   for(i=a;i<=d;i++)
   {
    if(i%2==0)
     cout<<i<<",";
   }
   cout<<endl;
   break;
  case 5:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter series last term: ";
   cin>>d;
   cout<<"\n \t\t\t\tSquare Series"<<"(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t\t";
   for(i=a;i<=d;i++)
   {
    cout<<i*i<<",";
   }
   cout<<endl;
   break;
  case 6:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter series last term: ";
   cin>>d;
   cout<<"\n \t\t\t\tCube Series"<<"(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t\t";
   for(i=a;i<=d;i++)
   {
    cout<<i*i*i<<",";
   }
   cout<<endl;
   break;
  case 7:
   cout<<"\nEnter series first term: ";
   cin>>a;
   cout<<"Enter series last term: ";
   cin>>d;
   cout<<"\n \t\t\tPrime Number Series"<<"(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t\t";
   for(i=a;i<=d;i++)
   {
    n=0;
    for(int j=2;j<=i/2;j++)
    {
     if(i%j==0)
     {
      n++;
      break;
     }
    }
     if(n==0)
     {
      cout<<i<<",";
     }
   }
   cout<<endl;
   break;
  case 8:
   cout<<"\nEnter number of element in series: ";
   cin>>d;
   a=1;
   n=1;
   cout<<"\n \t\t\t\tFibonacci Series\n\n";
   cout<<"\t\t\t";
   cout<<a<<","<<a<<",";
   for(i=1;i<=d;i++)
   {
    A=a+n;
    cout<<A<<",";
    a=n;
    n=A;
   }
   cout<<endl;
   break;
  case 9:
   int rem1,rem2,count,num1,num2,sum;
   cout<<"\nEnter first number: ";
   cin>>a;
   cout<<"Enter last number: ";
   cin>>d;
   cout<<"\n \t\t\tArmstrong Number Series(From "<<a<<" to "<<d<<")\n\n";
   cout<<"\t\t\t";
   for(i=a;i<=d;i++)
   {
    num1=i;
    num2=i;
    sum=0;
    count=0;
    while(num1>0)
    {
     rem1=num1%10;
     count++;
     num1=num1/10;
    }
    while(num2>0)
    {
     rem2=num2%10;
     sum=sum+pow(rem2,count);
     num2=num2/10;
    }
    if(sum==i)
    {
     cout<<i<<",";
    }
   }
    cout<<endl;
    break;
  default:
   cout<<"\nEnter Valid Choice For Number Series Printing!!!!!!!!!!\n\n";
 }
}

void allpattern::diamondpattern(int ch2)
{
	int num;
	switch(ch2)
	{
		case 1:
			cout<<"\n \t\t\tHalf Diamond Pattern - 1\n\n";
			cout<<"Enter a number: ";
			cin>>num;
			for(i=1;i<num;i++)
			{
				cout<<"\t\t\t\t";
			for(p=1;p<=i;p++)
			{
				cout<<"*";
			}
				cout<<endl;
			}
			cout<<"\t\t\t\t";	
			for(i=1;i<=num;i++)
			{
				cout<<"*";
			}
				cout<<endl;
			for(i=1;i<num;i++)
			{
				cout<<"\t\t\t\t";
			for(p=num;p>i;p--)
			{
				cout<<"*";
			}
			cout<<endl;
			}
			cout<<endl;
			break;
		case 2:
			cout<<"\n \t\t\tHalf Diamond Pattern - 2\n\n";
			cout<<"Enter a number: ";
			cin>>num;
			for(i=1;i<num;i++)
			{
				cout<<"\t\t\t\t";
			for(sp=num;sp>i;sp--)
			{
				cout<<" ";
			}
			for(p=1;p<=i;p++)
			{
				cout<<"*";
			}
				cout<<endl;
			}
			for(i=1;i<=1;i++);
			{
				cout<<"\t\t\t\t";
			for(sp=1;sp<=num;sp++)
			{	cout<<"*";}
				cout<<endl;
			}
			for(i=1;i<num;i++)
			{
				cout<<"\t\t\t\t";
			for(sp=1;sp<=i;sp++)
			{
				cout<<" ";
			}
			for(p=num-1;p>=i;p--)
			{
				cout<<"*";
			}
			cout<<endl;
			}
			cout<<endl;
			break;
		case 3:
			cout<<"\n \t\t\tHalf-Half Diamond Pattern - 3\n\n";
			cout<<"Enter a number: ";
			cin>>num;
			for(i=1;i<=num;i++)
			{
				cout<<"\t\t\t\t";
			for(p=1;p<=i;p++)
			{
				cout<<"*";
			}
			for(sp=num;sp>=i;sp--)
			{
				cout<<" ";
			}
			for(sp=num;sp>i;sp--)
			{
				cout<<" ";
			}
			for(p=1;p<=i;p++)
			{
				cout<<"*";
			}
			cout<<endl;
			}
			cout<<"\t\t\t\t";
			for(i=0;i<=2*num;i++)
			{
				cout<<"*";
			}
			cout<<endl;
			for(i=1;i<=num;i++)
			{
				cout<<"\t\t\t\t";
			for(p=num;p>=i;p--)
			{
				cout<<"*";
			}
			for(sp=1;sp<=i;sp++)
			{
				cout<<" ";
			}
			for(sp=1;sp<i;sp++)
			{
				cout<<" ";
			}
			for(p=num;p>=i;p--)
			{
				cout<<"*";
			}
				cout<<endl;
			}
			cout<<endl;
			break;
		case 4:
			cout<<"\n \t\t\tComplete Diamond Pattern - 4\n\n";
			cout<<"\nEnter a number: ";
			cin>>num;
			for(i=1;i<=num;i++)
			{
				cout<<"\t\t\t";
			for(sp=num;sp>=i;sp--)
			{
				cout<<" ";
			}
			for(p=1;p<=i;p++)
			{
				cout<<"*";
			}
			for(p=1;p<i;p++)
			{
				cout<<"*";
			}
				cout<<endl;
			}
			for(i=1;i<num;i++)
			{
				cout<<"\t\t\t";
			for(sp=0;sp<=i;sp++)
			{
				cout<<" ";
			}
			for(p=num;p>i;p--)
			{
				cout<<"*";
	    	}
	    	for(p=num-1;p>i;p--)
	    	{
	    	cout<<"*";
			}
				cout<<endl;
			}
			cout<<endl;
			break;
	}
}
void allpattern::homepattern(int ch2)
{
	switch(ch2)
	{
		case 1:
		cout<<"\n\t\t\t\t\t\tHome Pattern\n\n";
		// first part
	for(i=1;i<=10;i++)
	{
		cout<<"\t\t\t\t";
		for(sp=10;sp>=i;sp--)
		{
			printf(" ");
		}
		for(p=1;p<=i;p++)
		{
			if(p==1 || p==i || i==10)
				printf(" *");
			else
				printf("  ");
		}
		for(p1=1;p1<=19;p1++)
		{
			if(p1==10 || i==1 || i==10|| p1==19)
				printf(" *");
			else
				printf("  ");
		}
		printf("\n");
	}
	// Second part
	for(i=1;i<=4;i++)
	{
		cout<<"\t\t\t\t";
		for(p=1;p<=20;p++)
		{
			if(p==1 || p==7 ||p==20 ||i==1)
				printf("  *");
			else
				printf("   ");
		}
		printf("\n");
	}
	for(i=1;i<=11;i++)
	{
		cout<<"\t\t\t\t";
		for(p=1;p<=20;p++)
		{
			if(p==1 || (p>=3 && p<=5)|| p==7 || p==20 || i==11 ||i==10 || (((p>=10 && p<=13 ) || (p>=15 && p<=18)) && (i>=1 && i<=3)))
				printf("  *");
			else
				printf("   ");
		} 
		printf("\n");
	}
	// Third Part
	for(i=1;i<10;i++)
	{
		cout<<"\t\t\t\t";
		for(sp=1;sp<=i;sp++)
		{
			printf("  ");
		}
		for(p=5;p>1;p--)
		{
			printf(" ___ ");
		}
		if(i>=5)
		{
			printf("\n");
		}
		printf("\n");
	}
		break;
	case 2:
		cout<<"\n\t\t\t\t Hut Pattern\n\n";
		for(i=0;i<8;i++)
		{
		cout<<"\t\t\t\t";
		for(sp=i;sp<8;sp++)
		{
			printf(" ");
		}
		for(p=0;p<(2*i+1);p++)
		{
			printf("*");
		}
		printf("\n");
		}
		for(i=0;i<4;i++)
		{
		cout<<"\t\t\t\t";
		for(p=0;p<10;p++)
		{
			if(p==1 || p==2 || p==3 ||p==7||p==8||p==9)
				printf("*");
			else
				printf("  ");
		}
		printf("\n");
		}
		break;
		default:
		cout<<"\nEnter Valid Choice For Pattern Printing!!!!!!!!!!\n\n";
	}
}

void allpattern::characterpattern(int ch2)
{
	int num=0;
  switch(ch2)
  {
  case 1:
   num=65;
    cout<<"\n \t\t\tCharacter Pattern Printing-1\n\n";
    for(i=1;i<=5;i++)
    {
     cout<<"\t\t\t\t";
     char ch=char(num);
    for(p=1;p<=i;p++)
    {
     cout<<ch<<" ";
    }
     num++;
     cout<<endl;
    }
     cout<<endl;
   break;
  case 2:
   num=65;
   cout<<"\n \t\t\tCharacter Pattern Printing-2\n\n";
   for(i=1;i<=5;i++)
    {
     cout<<"\t\t\t\t";
    char ch=char(num);
    for(sp=5;sp>=i;sp--)
    {
     cout<<"  ";
    }
    for(p=1;p<=i;p++)
    {
     cout<<ch<<" ";
    }
    cout<<endl;
    num++;
   }
    break;
  case 3:
   num=65;
   cout<<"\n \t\t\tCharacter Pattern Printing-3\n\n";
   for(i=1;i<=5;i++)
   {
    char ch=char(num);
    cout<<"\t\t\t\t";
    for(p=5;p>=i;p--)
    {
      cout<<ch<<" ";
    }
      cout<<endl;
      num++;
    }
     cout<<endl;
    break;
   case 4:
    num=65;
    cout<<"\n \t\t\tCharacter Pattern Printing-4\n\n";
    for(i=1;i<=5;i++)
    {
     cout<<"\t\t\t\t";
     char ch=char(num);
     for(sp=5;sp>=i;sp--)
     {
      cout<<" ";
     }
     for(p=1;p<=i;p++)
     {
      cout<<ch<<" ";
     }
     cout<<endl;
     num++;
    }
    cout<<endl;
   break;
  case 5:
   num=65;
   cout<<"\n \t\t\tCharacter Pattern Printing-5\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    char ch=char(num);
    for(sp=1;sp<=i;sp++)
    {
     cout<<" ";
    }
    for(p=5;p>=i;p--)
    {
     cout<<ch<<" ";
    }
    num++;
    cout<<endl;
   }
   cout<<endl;
   break;
  case 6:
   num=65;
   cout<<"\n \t\t\tCharacter Pattern Printing-6\n\n";
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    char ch=char(num);
    for(sp=5;sp>=i;sp--)
    {
     cout<<" ";
    }
    for(p=1;p<=i;p++)
    {
     cout<<ch<<" ";
    }
     num++;
     cout<<endl;
   }
   num=70;
   for(i=1;i<=4;i++)
   {
    cout<<"\t\t\t\t";
    char ch=char(num);
     for(sp=1;sp<=i;sp++)
     {
      cout<<" ";
     }
     for(p=4;p>=i;p--)
     {
      cout<<" "<<ch;
     }
     cout<<endl;
     num++;
   }
   break;
  case 7:
   cout<<"\n \t\t\tCharacter Pattern Printing-7\n\n";
   num=65;
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    char ch=char(num);
   for(p=1;p<=5;p++)
   {
    cout<<ch<<":";
   }
    cout<<endl;
    num++;
   }
    cout<<endl;
   break;
  case 8:
   cout<<"\n \t\t\tCharacter Pattern Printing-8\n\n";
   num=65;
   for(i=1;i<=5;i++)
   {
    cout<<"\t\t\t\t";
    char ch=char(num);
    for(sp=5;sp>=i;sp--)
    {
     cout<<"  ";
    }
    for(p=1;p<=i;p++)
    {
     cout<<ch<<" ";
    }
    cout<<endl;
    num++;
   }
  for(i=1;i<=5;i++)
  {
   cout<<"\t\t\t\t";
   char ch=char(num);
   for(sp=1;sp<=i;sp++)
   {
    cout<<"  ";
   }
   for(p=5;p>=i;p--)
   {
    cout<<ch<<" ";
   }
   num++;
   cout<<endl;
  }
  cout<<endl;
  break;
 case 9:
  num=65;
  sp=10;
  cout<<"\n \t\t\tCharacter Pattern Printing-9\n\n";
  for(i=0;i<sp;i++)
  {
   char ch=char(num);
   cout<<"\t\t\t\t";
   for(p=0;p<sp;p++)
   {
    if(i==p || i+p==sp-1)
     cout<<ch;
    else
     cout<<" ";
   }
    num++;
    cout<<endl;
  }
  cout<<endl;
  break;
  default:
   cout<<"\nEnter Valid Choice For Character Pattern Printing!!!!!!!!!!\n\n";
  }
}
 int main()
 {
   int num2,ch,ch2;
   allpattern obj;
   do
   {
   system("cls");
   system("color F");
   cout<<"******####****\t\t    PATTERN AND SERIES PRINTING\t\t*****####*****\n\n\n";
   cout<<"\t\t!!!!!\tWELCOME IN SYMBOL PATTERN PRINTING\t!!!!!\t\n\n\n";
   cout<<"\t\t\tPRESS 1. FOR TRIANGLE PRINTING\n";
   cout<<"\t\t\tPRESS 2. FOR SQUARE PRINTING\n";
   cout<<"\t\t\tPRESS 3. FOR NUMERIC PATTERN PRINTING\n";
   cout<<"\t\t\tPRESS 4. FOR NUMBER SERIES PRINTING\n";
   cout<<"\t\t\tPRESS 5. FOR CHARACTER PATTERN PRINTING\n";
   cout<<"\t\t\tPRESS 6. FOR DIAMOND PATTERN PRINTING\n";
   cout<<"\t\t\tPRESS 7. FOR HOME AS PATTERN\n";
   cout<<"\t\t\tPRESS 8. FOR ALPHABET AS PATTERN\n\n";
   cout<<"\t!!!!!!!!!!**********############################**********!!!!!!!!!!\n\n\n";
   cout<<"Enter your choice: ";
   cin>>ch;
   switch(ch)
    {
    case 1:
    	system("color 2");
     cout<<"--------------------------------------------------------------------------------\n";
     cout<<"\t\t\tPRESS 1. FOR TRIANGLE PATTERN-1\n";
     cout<<"\t\t\tPRESS 2. FOR TRIANGLE PATTERN-2\n";
     cout<<"\t\t\tPRESS 3. FOR TRIANGLE PATTERN-3\n";
     cout<<"\t\t\tPRESS 4. FOR TRIANGLE PATTERN-4\n";
     cout<<"\t\t\tPRESS 5. FOR TRIANGLE PATTERN-5\n";
     cout<<"\t\t\tPRESS 6. FOR TRIANGLE PATTERN-6\n";
     cout<<"\t\t\tPRESS 7. FOR TRIANGLE PATTERN-7\n";
     cout<<"\t\t\tPRESS 8. FOR TRIANGLE PATTERN-8\n";
     cout<<"\t\t\tPRESS 9. FOR TRIANGLE PATTERN-9\n";
     cout<<"\t\t\tPRESS 10. FOR TRIANGLE PATTERN-10\n";
     cout<<"\t\t\tPRESS 11. FOR TRIANGLE PATTERN-11\n";
     cout<<"\t\t\tPRESS 12. FOR TRIANGLE PATTERN-12\n";
     cout<<"\t\t\tPRESS 13. FOR TRIANGLE PATTERN-13\n\n";
     cout<<"Enter your choice for TRIANGLE PRINTING: ";
     cin>>ch2;
     cout<<"--------------------------------------------------------------------------------";
     obj.symbolpattern1(ch2);
     break;
     case 2:
      system("color 3");
      cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR SQUARE PATTERN-1\n";
      cout<<"\t\t\tPRESS 2. FOR SQUARE PATTERN-2\n";
      cout<<"\t\t\tPRESS 3. FOR SQUARE PATTERN-3\n";
      cout<<"\t\t\tPRESS 4. FOR SQUARE PATTERN-4\n";
      cout<<"\t\t\tPRESS 5. FOR SQUARE PATTERN-5\n";
      cout<<"\t\t\tPRESS 6. FOR SQUARE PATTERN-6\n";
      cout<<"\t\t\tPRESS 7. FOR SQUARE PATTERN-7\n";
      cout<<"\t\t\tPRESS 8. FOR SQUARE PATTERN-8\n";
      cout<<"\t\t\tPRESS 9. FOR SQUARE PATTERN-9\n\n";
      cout<<"Enter your choice for SQUARE PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.symbolpattern2(ch2);
      break;
     case 3:
       system("color C");
      cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR NUMERIC TRIANGLE-1\n";
      cout<<"\t\t\tPRESS 2. FOR NUMERIC TRIANGLE-2\n";
      cout<<"\t\t\tPRESS 3. FOR NUMERIC TRIANGLE-3\n";
      cout<<"\t\t\tPRESS 4. FOR NUMERIC TRIANGLE-4\n";
      cout<<"\t\t\tPRESS 5. FOR NUMERIC TRIANGLE-5\n";
      cout<<"\t\t\tPRESS 6. FOR NUMERIC TRIANGLE-6\n";
      cout<<"\t\t\tPRESS 7. FOR NUMERIC TRIANGLE-7\n\n";
      cout<<"Enter your choice for NUMERIC PATTERN PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.numericpattern(ch2);
      break;
     case 4:
     	system("color 5");
      cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR ARITHMETIC SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 2. FOR GEOMETRIC SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 3. FOR ODD NUMBER SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 4. FOR EVEN NUMBER SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 5. FOR SQUARE SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 6. FOR CUBE SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 7. FOR PRIME NUMBER SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 8. FOR FIBONACCI SERIES PRINTING\n";
      cout<<"\t\t\tPRESS 9. FOR ARMSTRONG NUMBER SERIES PRINTING\n\n";
      cout<<"\nEnter your choice for NUMBER SERIES PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.numberseries(ch2);
      break;
     case 5:
     	system("color 6");
      cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR CHARACTER PATTERN-1\n";
      cout<<"\t\t\tPRESS 2. FOR CHARACTER PATTERN-2\n";
      cout<<"\t\t\tPRESS 3. FOR CHARACTER PATTERN-3\n";
      cout<<"\t\t\tPRESS 4. FOR CHARACTER PATTERN-4\n";
      cout<<"\t\t\tPRESS 5. FOR CHARACTER PATTERN-5\n";
      cout<<"\t\t\tPRESS 6. FOR CHARACTER PATTERN-6\n";
      cout<<"\t\t\tPRESS 7. FOR CHARACTER PATTERN-7\n";
      cout<<"\t\t\tPRESS 8. FOR CHARACTER PATTERN-8\n";
      cout<<"\t\t\tPRESS 9. FOR CHARACTER PATTERN-9\n";
      cout<<"\t\t\tPRESS 10. FOR CHARACTER PATTERN-10\n\n";
      cout<<"\nEnter your choice for CHARACTER PATTERN PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.characterpattern(ch2);
      break;
     case 6:
     	system("color D");
      cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR HALF DIAMOND PATTERN-1\n";
      cout<<"\t\t\tPRESS 2. FOR HALF DIAMOND PATTERN-2\n";
      cout<<"\t\t\tPRESS 3. FOR HALF HALF DIAMOND PATTERN-3\n";
      cout<<"\t\t\tPRESS 4. FOR FULL DIAMOND PATTERN-4\n\n";
      cout<<"\nEnter your choice for DIAMOND PATTERN PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.diamondpattern(ch2);
      break;
    case 7:
    	system("color C");
    	cout<<"--------------------------------------------------------------------------------\n";
      cout<<"\t\t\tPRESS 1. FOR HOME PATTERN\n";
      cout<<"\t\t\tPRESS 2. FOR HUT PATTERN\n";
      cout<<"\nEnter your choice for PATTERN PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.homepattern(ch2);
      break;
    case 8:
    	system("color A");
      cout<<"--------------------------------------------------------------------------------\n";
	  cout<<"\nEnter alphabet number for PATTERN PRINTING: ";
      cin>>ch2;
      cout<<"--------------------------------------------------------------------------------";
      obj.alphabetAsPattern(ch2);
      break;
     default:
     cout<<"Enter Valid Choice For Pattern Printing ------\n\n";
    }
     cout<<"\nPRESS 1 FOR CONTINUED !!!!!!!!!! ";
     cin>>num2;
 }while(num2==1);
 exit(0);
 return 0;
}
