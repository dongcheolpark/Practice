arr = []
arr2 = []
print("세자리 정수 5개를 순차적으로 키보드로 입력하세요.")
for i in range(0,5) :
    arr.append(input())
print("리스트에 저장된 값은 = ",arr)
print("500단위 정수는 다음과 같습니다.")
sum = 0
n = 0
for i in range(0,5) :
    if int(arr[i]) >=500 and int(arr[i]) < 600 :
        arr2.append(arr[i])
        sum+=int(arr[i])
        n+=1
print("리스트 = ",arr2)
print("500대 수는 모두 %d개이고 그들의 합은 %d입니다."%(n,sum))