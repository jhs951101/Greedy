money = 15500  
coins = [50000, 10000, 5000, 1000, 500, 100, 50, 10]  

# money: 거스를 돈
# coins: 동전 또는 지폐의 종류

nums = [0]*(len(coins))  
# nums: 거스를 때 필요한 동전 또는 지폐의 개수

# 가장 큰 금액부터 나누어나가서 개수를 저장
# 거스름돈을 해당 지폐로 나누었을 때, 지폐가 필요한 갯수가 몫, 이 양만큼 차감한 금액이 나머지
for i in range(len(coins)):  
    nums[i] = money // coins[i]
    money %= coins[i]

print('동전 및 지폐의 최소 개수: ', sum(nums), '개', '\n')

for i in range(len(coins)):
    print(coins[i], '원: ', nums[i], '개')

