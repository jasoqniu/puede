import java.util.*;
import java.io.*; 

public class LinkedList 
{ 

	Node head; // head of list 

	static class Node 
    { 

		int data; 
		Node next; 

		// Constructor 
		Node(int d) 
		{ 
			data = d; 
			next = null; 
		} 
	} 

	// Method to insert a new node 
	public  LinkedList insert(LinkedList list, int data) 
	{ 
		// Create a new node with given data 
		Node new_node = new Node(data); 
		new_node.next = null; 

		// If the Linked List is empty, 
		// then make the new node as head 
		if (list.head == null) 
        { 
			list.head = new_node; 
		} 
		else 
        { 
			// Else traverse till the last node 
			// and insert the new_node there 
			Node last = list.head; 
			while (last.next != null) { 
				last = last.next; 
			} 

			// Insert the new_node at last node 
			last.next = new_node; 
		} 

		// Return the list by head 
		return list; 
	} 

	// Method to print the LinkedList. 
	public  void printList(LinkedList list) 
	{ 
		Node currNode = list.head; 

		System.out.print("LinkedList: "); 

		// Traverse through the LinkedList 
		while (currNode != null) { 
			// Print the data at current node 
			System.out.print(currNode.data + " "); 

			// Go to next node 
			currNode = currNode.next; 
		} 
	} 


	



	public  LinkedList front(LinkedList list, int data)
    {
		Node new_node = new Node(data); 
		new_node.next=list.head;
		list.head=new_node;
		return list;
    }
	
	public  boolean search(LinkedList list, int data)
	{
		Node currNode = list.head; 
		while(currNode!=null)
		{
			if(currNode.data==data)
			{
				return true;
			}
			currNode = currNode.next;
		}
		return false;
	}




} 