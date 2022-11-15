#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int> list){
    int result = 0;

    for(int i=0; i<list.size(); i++)
        result += list[i];

    return result;
}

int main(){
    int money = 15500;
    vector<int> coins = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    
    // money: 거스를 돈
    // coins: 동전 또는 지폐의 종류
    
    vector<int> nums(coins.size());
    // nums: 거스를 때 필요한 동전 또는 지폐의 개수
    
    // 가장 큰 금액부터 나누어나가서 개수를 저장
    // 거스름돈을 해당 지폐로 나누었을 때, 지폐가 필요한 갯수가 몫, 이 양만큼 차감한 금액이 나머지
    for(int i=0; i<coins.size(); i++){
        nums[i] = money / coins[i];
        money %= coins[i];
    }

    cout << "동전 및 지폐의 최소 개수: " << sum(nums) << "개" << endl << endl;

    for(int i=0; i<coins.size(); i++){
        cout << coins[i] << "원: " << nums[i] << "개" << endl;
    }
        
    return 0;
}