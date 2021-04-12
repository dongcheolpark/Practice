a = int(input("중간고사 성적을 입력하세요 : "))
b = int(input("기말고사 성적을 입력하세요 : "))

if (a>100 or a < 0) or (b>100 or b<0) :
    print("0~100의 값이 아닙니다.")
else :
    print("평균 : %.2f"%float((a+b)/2))
    Class = (a+b)%10
    if(Class == 1 or Class == 2) : 
        print("다음 학년은 1반 입니다")
    elif(Class == 3 or Class == 4) : 
        print("다음 학년은 2반 입니다")
    elif(Class == 5 or Class == 6) : 
        print("다음 학년은 3반 입니다")
    elif(Class == 7 or Class == 8) : 
        print("다음 학년은 4반 입니다")
    elif(Class == 9 or Class == 0) : 
        print("다음 학년은 5반 입니다")
