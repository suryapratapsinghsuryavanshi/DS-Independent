def HF_Search(ele, *args):

    # write the code to implement the logic
    c=0
    a=len(args)
    if a%2==0:
        b=int(a/2)
        for i in range(0,b):
            d=args[i]
            if d==ele:
                c=1
                break
            else:
                continue

        if c==0:
            for i in range(b,len(args)):
                d=args[i]
                if d==ele:
                    c=1
                    break
                else:
                    continue
    elif a%2!=0:
        a=int((len(args)+1)/2)
        for i in range(a-1,len(args)):
            b=args[i]
            if b==ele:
                c=1
                break
            else:
                continue
        if c==0:
            for i in range(0,a):
                b=args[i]
                if b==ele:
                    c=-2
                    break
                else:
                    continue
        if c==0:
            i=-2
    
    return i+1
    


ele = 30
s = HF_Search(ele, 10, 20, 30, 40, 50) 

print(s)