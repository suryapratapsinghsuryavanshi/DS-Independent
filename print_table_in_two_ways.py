def Print_Table(n, order):
    s = ""
    
    #implement your logic here
    if order =="Serial" :

      for i in range(1,11):
        print(n,"x",i,"=",n*i)
    else:
        order=="Reverse"
        i=10
        while i>=1:
            print( n,"x",i,"=",n*i)
            i= i-1
    
    return s

#Calling Print_Table(n, order) function in main program    
n=4
order="Serial"
s=Print_Table(n, order)
print(s)


