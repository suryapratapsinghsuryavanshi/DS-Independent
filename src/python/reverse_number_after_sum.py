revr_num = 0
# Function Definition
def reverse_num(num):
    # write the code to implement the logicz
    if num==0:
        return ""
    else:
        revr_num=str(num%10)+str(reverse_num(num//10))

    return int(revr_num)

def Sum(ele):
    # write the code to implement the logic
    list=ele.split(',')
    for i in range(len(list)):
        list[i]=int(list[i])
    a=max(list)
    b=min(list)
    c=a+b 
    revr_num=reverse_num(c)   
    return  revr_num

# Calling  Function  in Main Body    
ele="34, 56, 76, 11, 45, 23, 22"
res=Sum(ele)
print(res)
