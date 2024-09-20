import Foundation

func solution(_ nums:[Int]) -> Int {
    var answer = 0
    
    for i in 0..<nums.count {
        for j in i+1..<nums.count {
            for k in j+1..<nums.count {
                let sum = nums[i] + nums[j] + nums[k]
                if isPrimeNumber(sum) { answer += 1 }
            }
        }
    }

    return answer
}

func isPrimeNumber(_ num: Int) -> Bool {
    for val in 2..<num {
        if num.isMultiple(of: val) { return false }
    }
    return true
}