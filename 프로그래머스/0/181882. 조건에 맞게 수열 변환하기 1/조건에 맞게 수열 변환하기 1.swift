import Foundation

func solution(_ arr:[Int]) -> [Int] {
    
    return arr.map { num in
        if(num >= 50 && num.isMultiple(of: 2)) {
            return num / 2
        }
        if(num < 50 && !num.isMultiple(of: 2)) {
            return num * 2
        }
        return num
    }
}