# hypo1: sorted de python est ultra opti vs moi!(same 4 len)
# hypo2: dans tab trié, ne comparer que les éléments contigues.
C=sorted([*map(int,open(0))])
res=C[1]-C[0]
for i in range(1,len(C)-1):
    diff = C[i+1]-C[i]
    if diff<res:
        res=diff
print(res)
