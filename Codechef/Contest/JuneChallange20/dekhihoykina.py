r=0
l=int(input())
e=0
f=l
while r<l or e<f:
	mid=r+(l-r)//2
	midz=e+(f-e)//2
	print(mid)
	n=input()
	if n=="G":
		r=mid
	elif n=="L":
		l=mid
	else:
		break
	print(midz)
	k=input()
	if k=="G":
		e=midz
	elif k=="L":
		f=midz
	else:
		break