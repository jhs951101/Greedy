package pkg;

import java.util.Arrays;

public class Remains {

	public void main() {
		int money = 15500;
		int[] coins = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
		
		// money: 거스를 돈
		// coins: 동전 또는 지폐의 종류

		int[] nums = new int[coins.length];
    	// nums: 거스를 때 필요한 동전 또는 지폐의 개수

		// 가장 큰 금액부터 나누어나가서 개수를 저장
		// 거스름돈을 해당 지폐로 나누었을 때, 지폐가 필요한 갯수가 몫, 이 양만큼 차감한 금액이 나머지
		for(int i=0; i<coins.length; i++){
			nums[i] = money / coins[i];
			money %= coins[i];
		}

		System.out.println("동전 및 지폐의 최소 개수: " + Arrays.stream(nums).sum() + "개" + "\n");

		for(int i=0; i<coins.length; i++){
			System.out.println(coins[i] + "원: " + nums[i] + "개");
		}
	}

	public static void main(String[] args) {
		Remains main = new Remains();
		main.main();
	}
}
