#include<iostream.h>

int main()
{
	int i, x;bool ketemu;
	int A[10]={33,12,19,20,11,15,17,18,16,18};
	i=0 ; ketemu = false;
	cout<<"MASUKKAN BILANGAN YANG DICARI = ";
	cin>> x;
	while ((i<10) && (!ketemu))
	{
		if(A[i]==x)
		{
			ketemu = true;
		} else
		{
			i++;
		}
	}
	if (ketemu)
	{
		cout<< x << "Berada di indexs ke-" << i;
	}else {
		cout<<"Data tidak ditemukan";
	}
	return 0;
}