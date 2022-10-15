# to find the addition of two matrices...

try: 
    row=int(input("rows:"))
    column=int(input("column:"))

    matr1=[]

    for i in range(row):
        s=[]
        for j in range(column):
            s.append(int(input()))
        matr1.append(s)

    row1=int(input("rows:"))
    column1=int(input("column:"))

    matr2=[]
    
    for p in range(row1):
        r=[]
        for q in range(column1):
            r.append(int(input()))
        matr2.append(r)

    if (row!=row1 or column!=column1):
        print("NOT POSSIBLE")
    else:
        result=[]
        for v in range(len(matr1)):
            for l in range(len(matr2[0])):
                for t in range(len(matr2)):
                    result[v][l] += matr1[v][t] + matr2[l][t]

        for z in result:
            print(z)


except: pass




