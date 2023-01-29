# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 14:05:35 2022

@author: Ismail
"""
import numpy as np

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        

class LinkedList(object):
 # Function to initialize head
    def __init__(self):
        self.head = None        
    def insertAfter(self,prev_node, new_data):
        # 1. check if the given prev_node exists 
        if prev_node is None: 
            print ("The given previous node must inLinkedList.")
            return
        # 2. Create new node & 
        # 3. Put in the data 
        new_node = ListNode(new_data,prev_node) 
        # 4. Make next of new Node as next of prev_node 
        new_node.next = prev_node.next
        # 5. make next of prev_node as new_node 
        prev_node.next = new_node
 
    # This function prints contents of linked list
    # starting from head
    def printList(self,list1):
        #temp = self.val
        while (list1):
            print (list1.val)
            list1 = list1.next   
       
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
 
        lt1 =np.array(())
        lt2 =np.array(())
        while l1 is not None:
            lt1= np.append(lt1,int(l1.val))
            l1 = l1.next

        while l2 is not None:
            lt2= np.append(lt2,l2.val)
            l2 = l2.next
            
        ll1 = [list(map(int,lt1)),list(map(int,lt2))] # convertint to ints
        sums = 0
        for x in np.arange(0,2):
            st = ll1[x][::-1]
            st = str(st)
            stdd = st.replace('[', '')
            stdd = stdd.replace(']', '')
            stdd = stdd.replace(',', '')
            stdd = stdd.replace(" ", "")
            sums += int(stdd)
           
        stdd = str(sums)
        lt1 =np.array(())
        for i in np.arange(0,len(stdd)):
            lt1 = np.append(lt1,int(stdd[i]))
        
        lt1 = list(map(int,lt1[::-1])) # reverse the list
        
        k3 = ListNode(lt1[len(lt1)-1],None)
        for i in np.arange(len(lt1)-2,-1,-1):
            k3 = ListNode(lt1[i],k3)
        return k3
        

    
l1 = [2,4,3]

k1 = ListNode(l1[len(l1)-1],None) # Last Node initializations
#reverse linked lists update
for i in np.arange(len(l1)-2,-1,-1):
    k1 = ListNode(l1[i],k1)


l2 = [5,6,4]

k2 = ListNode(l2[len(l2)-1],None) # Last Node initializations
#reverse linked lists update
for i in np.arange(len(l2)-2,-1,-1):
    k2 = ListNode(l2[i],k2)


result = Solution().addTwoNumbers(k1, k2)

new_data = 5
LinkedList().insertAfter(result, new_data)
print(LinkedList().printList(result))

new_data = 1
LinkedList().insertAfter(result, new_data)
print(LinkedList().printList(result))

new_data = 6
LinkedList().insertAfter(result, new_data)
print(LinkedList().printList(result))

        

#-----------------------------------------
# l2 = [5,6,4]

# k2 = ListNode(l2[len(l2)-1],None) # Last Node initializations
# #reverse linked lists update
# for i in np.arange(len(l2)-2,-1,-1):
#     k2 = ListNode(l2[i],k2)

# LinkedList()
# k1.insertAfter(k0, l0[1])
# k1.insertAfter(k0, l0[2])

# k1.printList()
    
# l1 = [2,4,3]
# #dict1 = {'val':l1[len(l1)-1],'next':None}
# k1 = ListNode()
# k1.next = None
# k1.val = l1[len(l1)-1]
# k2 = ListNode()
# k2.val = l1[len(l1)-2]
# k2.next = k1

# k3 = ListNode()
# k3.val = l1[len(l1)-3]
# k3.next = k2




# # while k3 is not None:
# #          print (k3.val)
# #          k3 = k3.next