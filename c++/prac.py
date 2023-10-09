s="yogi.is.cool"
arr=s.split(".")
s2=""


for i in reversed(range(len(arr))):
    if(i!=0):
        s2+=arr[i]+"."
    else:
        s2+=arr[i]
print(s2)