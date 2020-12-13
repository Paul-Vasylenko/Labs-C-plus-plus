a=int(input("Enter a: "))
starta=a
a=starta-1
step1=0
step2=0
preva = None
nexta = None
while starta>2 and preva == None:
    if a ==2:
        preva=2
    else:
        d=2
        while a%d != 0 and d!=a:
            if d== a-1:
                preva = a
            d=d+1
    step1=step1+1
    a=a-1
a=starta+1
while nexta == None:
    if a==3:
        nexta=3
    else:
        d=2
        while a%d!=0 and d!=a:
            if d==a-1:
                nexta=a
            d=d+1
    step2=step2+1
    a=a+1
if(starta == 1):
    print(2)
elif step1==0:
    print(nexta)
elif step1<step2:
    print(preva)
elif step1>step2:
    print(nexta)
else:
    print(preva)
    print(nexta)
