n=int(input())
for i in range(n):
	t= int(input())
	b=0.0
	c=0.0
	d=0
	for j in range(t):
		a,k= input().split()
		m=float(a)
		h=float(k)
		if m>=80   :
		 b+=4.00*h
		elif m>=75 :
		 b+=3.75*h
		elif m>=70 :
		 b+=3.50*h
		elif m>=65 :
		 b+=3.25*h
		elif m>=60 :
		 b+=3.00*h
		elif m>=55 :
		 b+=2.75*h
		elif m>=50 :
		 b+=2.50*h
		elif m>=45 :
		 b+=2.25*h
		elif m>=40 :
		 b+=2.00*h
		elif m>=0: 
		 d+=1
		c+=h
	if d==0:	
	 print("Case "+str(i+1)+": "+str(round(float(b/float(c)), 2)))
	elif d==1:
	 print("Case "+str(i+1)+": Sorry, you have failed in "+str(d)+" course!")
	else:
	 print("Case "+str(i+1)+": Sorry, you have failed in "+str(d)+" courses!")
