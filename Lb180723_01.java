/*
    Program 448

    Data structure in java
    Singly LL templete
*/

import java.util.*;

class Node
{
    public int data;
    public Node next;   // reference

    public Node(int No)
    {
        this.data = No;
        this.next = null;
    }
}
class SinglyLL
{
   public Node First;
   public int iCount;

   public SinglyLL()
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
public class Lb180723_01 
{
    public static void main(String args[])
    {
       SinglyLL obj = new SinglyLL();
    }
}
