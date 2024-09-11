import Foundation

func solution(_ a:Int, _ b:Int, _ n:Int) -> Int {
    // 최종 결과
    var result = 0
    // 현재 보유한 병 수
    var currentBottle = n
    // 현재 보유한 병이 마트에 줘야하는 병보다 크거나 같아야 함
    while currentBottle >= a {
        // a병으로 나눈 몫에서 b만큼 돌려준다
        result += ((currentBottle / a) * b)
        // 돌려 받은 병의 수와 남아있던 병의 수를 더하여 현재 보유한 병의 수를 갱신
        currentBottle = ((currentBottle / a) * b) + (currentBottle % a)
    }
    
    return result
}