void Reverse(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
//ֱ�Ӳ�������
void InsertSort_o(int a[],int n)//xuanze
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
void InsertSort(int a[],int n)//o(n2),�ȶ�
{
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp)//�˴�����Ϊtemp������Ϊa[i]����Ϊ�����a[j+1]=a[j]��ı�a[i],
		{                       // ���Ԫ�ص�˳��ı䣿a[j]>=temp���ӵȺţ��ȶ�
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;//ע���1
	}
}

void BinaryInsertSort(int a[],int n)//o(n2),�ȶ�
{
	for(int i=1;i<n;i++)
	{
		int low=0;
		int high=i-1;
		int temp=a[i];
		while(low<=high)
		{
			int mid=(low+high)/2;
			if(temp<a[mid]) high=mid-1;
			else low=mid+1;
			mid=(low+high)/2;
		}
		for(int j=i-1;j>=low;j--)
		{
			a[j+1]=a[j];
		}
		a[low]=temp;
	}
}

void BubbleSort(int a[],int n)//o(n2),�ȶ�
{
	for(int i=1;i<n-1;i++)//���� i: ��0��ʼ��j > i
	{
	    bool flag = false;
		for(int j=n-1;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				flag=true;
			}
		}
		if(!flag)
			return;
	}
}

void QuickSort(int a[], int left,int right)//o(nlog2n)~o(n2),���ȶ�
{
	int i=left;
	int j=right;
	int temp=a[i];
	while(i<j)
	{
		while(temp<a[j] && i<j)
			j--;
		if(i<j)
		{
			a[i]=a[j];
		    //a[j]=temp;//a
		    i++;
		}
		
		while(temp>a[i] && i<j)
			i++;
		if(i<j)
		{

		    a[j]=a[i];
		    //a[i]=temp;//b
		    j--;
		}
	}
	a[i]=temp;//c //һ�λ��ֵõ���׼ֵ����ȷλ�ã�c ���Բ���a,b
	if(i-1>left) QuickSort(a,left,i-1);//ע��Ƚ������ޣ����������ѭ��
	if(i+1<right) QuickSort(a,i+1,right);//ע��Ƚ�������
}

void SelectSort(int a[], int n)//o(n2),���ȶ�
{
	for(int i=0;i<n-1;i++)
	{
		int temp=a[i];
		int j=i+1;
		int index=i;
		for(;j<n;j++)
		{
			if(a[j]<temp)
			{
				temp=a[j];
				index=j;
			}
		}
		if(index!=i)
		{
			a[index]=a[i];
			a[i]=temp;
		}
	}
}

