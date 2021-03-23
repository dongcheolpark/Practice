name = input("이름을 입력하세요 : ")
h = float(input("키를 입력하세요 : "))
w = int(input("몸무게를 입력하세요 : "))
print(name,"님의 체질량(BMI) 지수는 ","%.2f"%(w/(h*h)),"입니다.",sep = '')