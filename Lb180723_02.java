/*
    Program 449

    Data structure in java
    Doubly LL templete
*/

import java.util.*;

class Node
{
    public int data;
    public Node next;   // reference
    public Node prev;

    public Node(int No)
    {
        this.data = No;
        this.next = null;
        this.prev = null;
    }
}
class DoublyLL
{
   public Node First;
   public int iCount;

   public DoublyLL()
   {
        this.First = null;
        this.iCount = 0;
   }

   public void Display()
   {}
   public int Count()
   {
    return 0;
   }
   public void InsertFirst(int iNo)
   {}
   public void InsertLast(int iNo)
   {}
   public void InsertAtPos(int iPos,int iNo)
   {}
   public void DeleteFirst()
   {}
   public void DeleteLast()
   {}
   public void DeleteAtPos(int iPos)
   {}
}
public class Lb180723_02
{
    public static void main(String args[])
    {
       DoublyLL obj = new DoublyLL();
    }
}
