def add(cnt,level):
    if level > 5:
        return cnt
    cnt+= level
    add(cnt,level+1)


cnt2 =0
cnt2 = add(cnt2,1)
print (cnt2)