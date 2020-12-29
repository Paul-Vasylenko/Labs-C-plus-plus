def fact(x):
    if(x==0):
        res= 1
    else:
        res= x*fact(x-1)
    return res
def printk(x,eps,):
    if(x<0):
        print("Error")
    elif(x<=2):
        res=firstVar(x,eps)
        print(res)
    else:
        res=secondVar(x,eps)
        print(res)

def firstVar(x,eps):
    e1=evalue(x,eps)
    e2=evalue(2*x,eps)
    return e1+e2

def secondVar(x,eps):
    e1=evalue(x+5,eps)
    e2=evalue(x+2,eps)
    return (1/e1)-e2

def evalue(x,eps):
    n1=0
    n2=0
    i=1
    res=1
    while True:
        n2=n1
        if(i%2 !=0):
            n1=-((x**i)/fact(i))
        else:
            n1=((x**i)/fact(i))
        res=res+n1
        i=i+1
        if abs(n1+n2)<eps:
            break
    return res
    
x=int(input("Enter int x: "))
eps=float(input("Enter eps: "))
printk(x,eps)
