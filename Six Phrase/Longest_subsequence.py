def prt(arr, row, col, s1):
    
    if arr[row][col] == 0:
        return
    if arr[row][col] == arr[row-1][col]:
        prt(arr, row-1, col, s1)
    else:
        prt(arr, row-1, col-1, s1)
        print(s1[row-1], end ="")


s1 = input()
s2 = input()

if len(s2) < len(s1):
    s3 = s1
    s1 = s2
    s2 = s3

n1 = len(s1)
n2 = len(s2)

arr =[ [0 for i in range(n2+1)] for j in range(n1+1) ]


for i in range(n1+1):
    for j in range(n2+1):
        if (i == 0 or j== 0):
            arr[i][j] = 0
            
        elif (s1[i-1] == s2[j-1]):
            arr[i][j] = arr[i-1][j-1] + 1 
            
        else:
            arr[i][j] = max(arr[i-1][j] , arr[i][j-1])
        
max = 0
row = 0
col = 0
for i in range(n1+1):
    for j in range(n2+1):
        if arr[i][j] > max:
            max  = arr[i][j]
            row = i
            col = j
prt(arr, row, col, s1)

