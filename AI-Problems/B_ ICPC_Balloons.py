
test=int(input())
count=1

while count<=test:
    a=input()
    result=input()
    distrinct=len(set(result))
    non_distrinct=len(result)-distrinct
    sum=(2*distrinct)+(1*non_distrinct)
    print(sum,end="\n")
    count+=1
