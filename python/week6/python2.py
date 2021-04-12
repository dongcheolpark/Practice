n = 3
sub = ["국어","수학","영어"]
def sub_input(score) :
    sum = 0
    for i in range(0,n) :
        print(sub[i],"점수를 입력해 주세요.",end="")
        num = int(input())
        score.append(num)
        sum += num
    return sum


name = input("이름을 입력해 주세요.")
score = []
sum = sub_input(score) 

print(name ,"=", score)
print(name,"님의 합계 = ",sum,sep="")
print(name,"님의 평균 = ",float(sum/n),sep="")

