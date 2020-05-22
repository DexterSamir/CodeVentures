n = int(input())
r = input()
a = list(map(int, r.split()))
e = 0
for i in a:
	if (i%2==0):
	   e=e+1
print(e)	