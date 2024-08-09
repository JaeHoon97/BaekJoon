import Foundation

func solution(_ common:[Int]) -> Int {
    print(isArithmeticSequence(common))
    if isArithmeticSequence(common) { // 등차수열
        let d = common[common.count-1] - common[common.count-2]
        return common[common.count-1] + d
    } else { // 등비수열
        let r = common[common.count-1] / common[common.count-2]
        return common[common.count-1] * r
    }
}

// 등차수열인지 판단
func isArithmeticSequence(_ arr:[Int]) -> Bool {
    if !arr.count.isMultiple(of: 2) {
        return (arr[0] + arr[arr.count - 1]) == arr[arr.count / 2 ] * 2
    } else {
        return arr[0] + arr[arr.count - 1] == arr[1] + arr[arr.count - 2]
    }
}