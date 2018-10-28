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

a=node(-10)
a=node(8, a)
a=node(-5, a)
a=node(-3, a)
head=node(10, a)

head.printAll()