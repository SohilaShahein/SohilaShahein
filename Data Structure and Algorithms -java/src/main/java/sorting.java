/*
 سهيلة احمد عبد العزيز شاهين سكشن 2
 */
public class sorting {

     public void merge(int arr[],int l,int m,int r){
        int n1=m-l+1;
        int n2=r-m;
        int L[]=new int[n1];
        int R[]=new int[n2];
        for(int i=0;i<n1;i++)
        
            L[i]=arr[l+i];
        
        for(int j=0;j<n2;j++)
        
            R[j]=arr[m+1+j];
        
        int i=0,j=0;
        int k=l;
        while(i<n1&&j<n2)
        {
            if(L[i]<R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else
            {
                arr[k]=R[j];
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
    void sortx(int arr[],int l,int r)
    {
        if(l<r){
          int m=l+ (r-l)/2;
        sortx(arr,l,m);
        sortx(arr,m+1,r);
        
        merge(arr,l,m,r);
        }
       
    }
     public int shellsort(int[] arr)
    {
        int n=arr.length;
        for(int gap=n/2;gap>0;gap/=2)
        {
            int i;
            for(i=gap;i<n;i++)
            {
                int temp=arr[i];
                int j;
                for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap)
                arr[j]=arr[j-gap];
                arr[j]=temp;
            }
        }
        return 0;
    }
    public void Quick(int[] arr,int low,int high)
    {
       
        int i=low;
        int j=high;
        int pivot=arr[i];
        while(i<=j)
        {
            while(arr[i]<pivot){
            i++;
            
            }
            while(arr[j]>pivot){
            j--;
            }
        
        if(i<=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
        }
        }
        if(low<j)
        Quick(arr,low,j);
        if(high>i)
        Quick(arr,i,high);
    }
    public  void  bubble(int[] A)
{
    for(int i=0;i<A.length-1;i++)
    {
        for(int j=0;j<A.length-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
}

     public void printArray(int arr[])
    {
        
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args)
    {
        int[] arr={24,56,78,99,10};
        sorting s=new sorting();
        s.Quick(arr, 0, arr.length-1);
        s.bubble(arr);
        s.shellsort(arr);
        s.printArray(arr);
    }}

