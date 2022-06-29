/* سهيلة احمد عبد العزيز شاهين سكشن 2*/
   
 public class orderedarray{
    int[] arr;
    int nElements;
    orderedarray()
    {
        nElements=0;
        
    }
    orderedarray(int max)
    {
        arr=new int[max];
        nElements=0;
    }
    public int getelement()
    {
        return nElements;
    }
    public int find(int val)
    {
        int low=0;
        int high=nElements-1;
        int mid;
        while(true)
        {mid=(low+high)/2;
            
              if(val==arr[mid])
              return mid;
              if(high<low)
              return nElements;
              else
              {
                  if(val>arr[mid])
                  low=mid+1;
                  else
                  high=mid-1;
              }
            }
        
        }
        public void insert(int element)
        {
            int x;
            for(x=0;x<nElements;x++)
            {
                if(element<arr[x])
                break;
            }
            for(int z=x;z<nElements;z++)
            {
                arr[z]=arr[z-1];
            }
            arr[x]=element;
            nElements++;
        }
        public boolean remove(int del)
        {
            int j=find(del);
            if(j==nElements)
            return false;
            else
            {
                for(int k=j;k<nElements;k++)
                {
                    arr[k]=arr[k+1];
                }
                nElements--;
                return true;
            }
        }
        public void display()
        {
            System.out.println();
            for(int i=0;i<nElements;i++)
            {
                System.out.print(arr[i]+" ");
            }
        }
    
    public static void main(String[] args)
    {
        orderedarray a=new orderedarray(5);
        a.insert(10);
        a.insert(20);
        a.insert(30);
        int b=20;
        int c=a.find(b);
       if(c==1)
       System.out.print("found "+b);
       else
       System.out.print("not found "+b);
       a.display();
       a.remove(10);
       a.display();
       System.out.println(a.getelement());
        
    }
}

    

