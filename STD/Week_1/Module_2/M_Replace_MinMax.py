n=int(input())
arr=list(map(int,input().split()))
minimum=min(arr)
maximum=max(arr)
min_idx=arr.index(minimum)
max_idx=arr.index(maximum)
arr[min_idx],arr[max_idx]=arr[max_idx],arr[min_idx]
print(*arr)