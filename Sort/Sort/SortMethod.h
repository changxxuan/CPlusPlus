void Reverse(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
//直接插入排序
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
void InsertSort(int a[],int n)//o(n2),稳定
{
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp)//此处必须为temp，不能为a[i]，因为下面的a[j+1]=a[j]会改变a[i],
		{                       // 相等元素的顺序改变？a[j]>=temp不加等号，稳定
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;//注意加1
	}
}

void BinaryInsertSort(int a[],int n)//o(n2),稳定
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

void BubbleSort(int a[],int n)//o(n2),稳定
{
	for(int i=1;i<n-1;i++)//或者 i: 从0开始，j > i
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

void QuickSort(int a[], int left,int right)//o(nlog2n)~o(n2),不稳定
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
	a[i]=temp;//c //一次划分得到基准值的正确位置，c 可以不用a,b
	if(i-1>left) QuickSort(a,left,i-1);//注意比较上下限，否则造成死循环
	if(i+1<right) QuickSort(a,i+1,right);//注意比较上下限
}

void SelectSort(int a[], int n)//o(n2),不稳定
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

