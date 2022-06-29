/*
 سهيلة احمد عبد العزيز شاهين سكشن 2
 */
public class unorderedarray {
int[] arr;
    int nElements;
    unorderedarray()
    {
        nElements=0;
        
    }
    unorderedarray(int max)
    {
        arr=new int[max];
        nElements=0;
    }
    public void insert(int value)
    {
        arr[nElements]=value;
        nElements++;
    }
    public boolean find(int searchkey)
    {
         int j;
            for(j=0;j<nElements;j++){
                if(searchkey==arr[j])
                    break;
            }
            if(j==nElements)
            return false;
            else
                return true;
        
    }
   public boolean remove(int del)
        {
            int j;
            for(j=0;j<nElements;j++)
                if(del==arr[j])
                    break;
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
    public static void main(String args[]) {
        
        unorderedarray A=new  unorderedarray(10);
        A.insert(10);
        A.insert(5);
        A.insert(13);
        A.insert(2);
        A.display();
        System.out.print(A.find(13));
        A.remove(5);
        A.display();
        }}
