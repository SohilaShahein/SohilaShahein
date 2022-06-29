/*
سهيلة احمد عبد العزيز شاهين سكشن 2
 */
public class queue{
    private int[] A;
    private int max;
    private int front;
    private int rear;
    private int nElements;
    queue(int s)
    {
        max=s;
        A=new int[max];
        front=0;
        rear=-1;
        nElements=0;
    }
    public boolean isEmpty()
    {
        if(front==-1&&rear==0)
        return true;
        else if(front>rear)
        return true;
        else
        return false;
    }
    public boolean isFull()
    {
        if(rear==max-1)
        return true;
        else
        return false;
    }
    public void enQueue(int x)
    {
        if(isFull())
        System.out.print("over flow");
        else
        {
            rear++;
            A[rear]=x;
            nElements++;
        }
    }
    public void deQueue()
    {
        if(isEmpty())
        System.out.println("is Empty");
        else{
        
        
            front++;
            nElements--;
        }
            
        
            
        
    }
    public int f()
    {
        return front;
    }
    public int peek()
    {
        return A[front];
    }
    public  int size(){
        return nElements;
    }
    public void display()
    {
        for(int c=0;c<nElements;c++)
        {
            System.out.print(A[c]+"\t");
        }
    }
    public static void main(String[] args)
    {
        queue i=new queue(4);
        System.out.print(i.isEmpty()+"\t");
        i.enQueue(20);
        i.enQueue(30);
        i.enQueue(50);
        i.enQueue(70);
        //i.display();//
        //i.display();
        System.out.print(i.peek()+"\t");
        System.out.print(i.isEmpty()+"\t");
        i.deQueue();
        i.deQueue();
        i.deQueue();
        System.out.print(i.peek()+"\t");

        i.deQueue();
        //i.display();
       //System.out.println(i.f());
        System.out.print(i.isEmpty()+"\t");

    }
    
    
}
