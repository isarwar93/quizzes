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
        print(ll1)
        sums = 0
        for x in np.arange(0,2):
            st = ll1[x][::-1]
            st = str(st)
            stdd = st.replace('[', '')
            stdd = stdd.replace(']', '')
            stdd = stdd.replace(',', '')
            stdd = stdd.replace(" ", "")
            #stdd = stdd.strip
            sums += int(stdd)
            print(sums)
           
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

print(result)
