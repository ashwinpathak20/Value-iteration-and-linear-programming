#array = [[50,50,50,50,50,50],[50,0,0,49,0,50],[50,0,-49,50,0,50],[50,0,0,0,0,50],[50,50,50,50,50,50]]
array = [[50,50,50,50,50,50],[50,50,50,49,50,50],[50,0,0,0,0,50],[50,0,-49,50,0,50],[50,0,0,0,0,50],[50,50,50,50,50,50]]
for i in range(1,5):
	for j in range(1,5):
		for k in range(1,5):
			for l in range(1,5):
				flow=0
				if(i==k and j==l):
					flow=1
				if(array[k][l]==49 or array[k][l]==-49):
					print flow,
				elif(array[k][l]==0):
					flow=0
					if(i==k and j==l):
						flow=1
					a=k
					b=l
					c=a-1
					d=b+1
					e=b-1
					if(array[c][b]==50):
						c=a
					if(array[a][d]==50):
						d=b
					if(array[a][e]==50):
						e=b
					if(c==i and b==j):
						flow-=0.8
					if(a==i and d==j):
						flow-=0.1
					if(a==i and e==j):
						flow-=0.1
					print flow,
					flow=0
					if(i==k and j==l):
						flow=1
					a=k
					b=l
					c=a+1
					d=b+1
					e=b-1
					#print flow,"hi"
					if(array[c][b]==50):
						c=a
					if(array[a][d]==50):
						d=b
					if(array[a][e]==50):
						e=b
					if(c==i and b==j):
						flow-=0.8
					if(a==i and d==j):
						flow-=0.1
					if(a==i and e==j):
						flow-=0.1
					print flow,
					flow=0
					if(i==k and j==l):
						flow=1
					a=k
					b=l
					c=b-1
					d=a+1
					e=a-1
					if(array[a][c]==50):
						c=b
					if(array[d][b]==50):
						d=a
					if(array[e][b]==50):
						e=a
					if(a==i and c==j):
						flow-=0.8
					if(d==i and b==j):
						flow-=0.1
					if(e==i and b==j):
						flow-=0.1
					print flow,
					flow=0
					if(i==k and j==l):
						flow=1
					a=k
					b=l
					c=b+1
					d=a+1
					e=a-1
					if(array[a][c]==50):
						c=b
					if(array[d][b]==50):
						d=a
					if(array[e][b]==50):
						e=a
					if(a==i and c==j):
						flow-=0.8
					if(d==i and b==j):
						flow-=0.1
					if(e==i and b==j):
						flow-=0.1
					print flow,
print ''