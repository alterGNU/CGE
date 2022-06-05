w = int(input())
h = int(input())
mat = [list(input())for l in range(h)]

def rN(x, y):
    for c in range(y+1,w):
        if mat[x][c]=="0": return f"{c} {x}"
    return "-1 -1"

def dN(x, y):
    for l in range(x+1,h):
        if mat[l][y]=="0": return f"{y} {l}"
    return "-1 -1"

for x in range(h):
    for y in range(w):
        if mat[x][y]=="0": print(f"{y} {x} {rN(x,y)} {dN(x,y)}")
