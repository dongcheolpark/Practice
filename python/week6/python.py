def func(n,price) :
    return arr[n-1]*price/100

arr = [1.2,2,1.8,1.5]
n = int(input("어떤 상품을 구매하셨나요? (화장품(1),커피(2),도서(3),의류(4)"))
price = int(input("구입 가격은 얼마인가요?"))
print("적립된 포인트는 %.1f입니다."%func(n,price))