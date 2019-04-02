//Bil pay
#include<fstream>
using namespace std;
int S;
int k;
int V[100];
int suma:
int read_data()
{
   count<<"suma=";cin>>V[100];
   count<<"numarul de bacnote";cin>>k;
}
int sort_data()
{
int aux,schimb,i;
   do{  schimb=0;
        for (i=0;i<n-1;++i)
        if (sfarsit[nr[i]]>sfarsit[nr[i+1]])

			{   aux=nr[i];
				nr[i]=nr[i+1];
				nr[i+1]=aux;
                schimb=1;}
            }
	         while (schimb);

}
int greedy()
{for(int i=1;i<=n;i++)

     if(V[i].suma<=k)

       { cout<<V[i].numar<<" ";

         k=k-V[i].suma;
}
int main()
{
read_data();
sort_data();
cout<<" utilizez "<<greedy()<<" bancnote ";
}
