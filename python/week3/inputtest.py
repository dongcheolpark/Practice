'''
km = float(int(input()))
mile = km * 0.621371 
print('킬로미터 단위 거리 입력 : ',km)
print('입력값 : ',km,'km')
print('변환값 : ',mile,'miles')
'''

신장 = int(input('키가 몇cm이에요?'))

적정 = (신장 - 100) * 0.9
과체중 = 적정 * 1.2
저체중 = 적정 * 0.9

print('당신의 신장 : ',신장 )
print('적정 몸무게 : ',적정)
print('과체중 위험 기준 : ',과체중)
print('저체중 위험 기준 : ',"%.2f"%저체중)
