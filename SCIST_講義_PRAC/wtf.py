ary = [40,80,75,20,96,69,50]

a = 0
b = 0
for i in range(7):
  if(ary[i] < 60):
    a+=1
  elif ary[i] >90 :
    b+=1

print("<60分: ", a, "個")
print(">90分: ", b,  "個\n") 