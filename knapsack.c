#include<iostream>
using namespace std;

/************** For sorting elements in decreasing order ***************/
void sort(float *a,int size)
{
int temp;

 for(int i = 0;i < size;i++)
  {
   for(int j = i+1; j < size;j++)
    {
     if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }
    }
  }
}

/************** For printing elemets ***************/
void print(float *a,int size)
{
  for(int i = 0; i < size; i++ )
  {
    cout<<a[i]<<" ";
  }
}

int main()
{
  int n;
  
  cout<<"Enter the no of elements in : "<<endl;
  cin>>n;
  
  float p[n],w[n];
  float div[100];
  int index[100];
  int m=0;

  cout<<"Enter the profit elements : "<<endl;
  for(int i = 0;i < n; i++)
  {
     cin>>p[i];
  }

  cout<<"Enter the weight elements : "<<endl;
  for(int i = 0;i < n; i++)
  {
     cin>>w[i];
  }
   int k=0;
 
  for(int i = 0;i < n;i++)
 {
   div[k] = p[i]/w[i];
   //index[m] = k;
   k++;
}
  for(int i = 0 ;i < n;i++)
  {
     index[m] = i;
  }  
  
  cout<<"Elements after dividing profit by weight : "<<endl;
  for(int k= 0;k < n ;k++)
  {
  cout<<div[k]<<" ";
  }
  cout<<endl;
  cout<<"index after dividing profit by weight : "<<endl;
  for(int m = 0;m < n ;m++)
  {
  cout<<index[m]<<" ";
  }

  int size = sizeof(div)/sizeof(div[0]);
  sort(div,n);
  cout<<"divided elements in decreasing order : "<<endl;
  print(div,n);
 return 0;
}