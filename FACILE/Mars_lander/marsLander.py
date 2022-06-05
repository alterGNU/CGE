def testVLand(x,r,h,z):
    """ int*int*int*list(int)->boolean : return True if cond. for vertical landing are ok, false if not"""
    return z[0]<=x and x<=z[1] and r==0 and h==0
def p4vl(y, v, z):
    """ int*int->int : return the power for a vertical landing"""
    if v<=-40: return 4
    return 0

S = [[*map(int,input().split())]for i in"*"*int(input())]
Z = [(a[0],b[0],a[1])for a,b in zip(S[:-1], S[1:])if a[1]==b[1]]
z = Z[0]

while True:
    x, y, h, v, f, r, p = [int(i) for i in input().split()]
    if testVLand(x,r,h,z):print("0 "+str(p4vl(y,v,z[-1])))
