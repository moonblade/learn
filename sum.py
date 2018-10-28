from __future__ import print_function
class node:
    def __init__(self, num, link=None):
        self.num = num
        self.link = link
    
    def setLink(self, link):
        self.link = link
    
    def pnt(self):
        print(str(self.num) + " ", end="")
    
    def printAll(self):
        self.pnt()
        if self.link is not None:
            self.link.printAll()

a=node(20)
a=node(-10,a)
a=node(8, a)
a=node(-5, a)
a=node(-3, a)
head=node(10, a)

head.printAll()

def removeZero(head):
    s = head
    while(s is not None and s.link is not None):
        e = s
        sum = 0
        zerosum=False
        while (e is not None and e.link is not None):
            sum+=e.num
            if sum==0:
                s.link = e.link
                if (s==head):
                    head = e.link
                zerosum = True
                break
            else:
                e=e.link
        if (not zerosum):
            s=s.link
    return head
        
print("\nremoved")
head=removeZero(head)
head.printAll()