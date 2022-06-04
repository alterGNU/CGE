tX, tY, x, y = map(int,input().split())
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.
    res=""
    if tY!=y: 
        if tY>y:
            res+="S"
            y+=1
        else:
            res+="N"
            y-=1
    if tX!=x:
        if tX>x:
            res+="E"
            x+=1
        else:
            res+="W"
            x-=1
    print(res)
