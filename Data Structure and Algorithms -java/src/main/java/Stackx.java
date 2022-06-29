/*
سهيلة احمد عبد العزيز شاهين سكشن 2
 */
/*public class Stackx{
    private Node top;
    private int size;
    private class Node{
        private int data;
        private Node next;
        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
public void push(int data)
{
    Node tempnode=new Node(data);
    tempnode.next=top;
    top=tempnode;
    size++;
}
public int pop()
{
    int result=top.data;
    top=top.next;
    size--;
    return result;
}
public int getsize()
{
    return size;
}
public void display()
{
    Node current=top;
    while(current !=null){
    System.out.print(current.data+"");
    current=current.next;
    }
    
}
public int peek()
{
    return top.data;
}
public static void main(String[] args)
{
    Stackx s=new Stackx();
    System.out.print(s.getsize()+" ");
    s.push(40);
        s.push(50);
    s.push(30);
   s.push(20);
  // s.display();
   System.out.print(s.getsize()+" ");
   System.out.println(s.pop());
   System.out.println(s.peek());
}
}*/
public class Stackx{
    private int[] stackArr;
    private int top;
    private int maxsize;
    public Stackx(int max)
    {
        maxsize=max;
        stackArr=new int[maxsize];
        top=-1;
    }
    public void push(int val)
    {
        if(isFull())
        System.out.print("Stack overflow");
        else{
        top++;
        stackArr[top]=val;
        }
    }
    public boolean isFull()
    {
        if(top==maxsize-1)
        return true;
        else
        return false;
    }
    public boolean isEmpty()
    {
        if(top==-1)
        return true;
        else
        return false;
    }
    public int pop()
    {
        if(isEmpty())
        return 0;
        else
        {
        return stackArr[top--];
        
    }
}
public int peek()
{
    return stackArr[top];
}
public static void main(String[] args)
{
    Stackx theStack=new Stackx(5);
    theStack.push(2);
    theStack.push(5);
    theStack.push(10);
      theStack.push(70);
       theStack.push(50);
     System.out.println(theStack.isFull());
    while(!theStack.isEmpty()){
        int x=theStack.pop();
    System.out.println(x);
    /*System.out.println(theStack.pop());
    System.out.println(theStack.pop());*/
    }
    theStack.push(40);
    System.out.println(theStack.peek());
}
}
