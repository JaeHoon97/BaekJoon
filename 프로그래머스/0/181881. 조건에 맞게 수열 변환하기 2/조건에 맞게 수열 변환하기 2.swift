import Foundation

func solution(_ arr:[Int]) -> Int {
    var afterArr:[Int] = []
    var beforeArr = arr
    var result = 0
    
    while true {
        afterArr = beforeArr.map { num  in
            if num.isMultiple(of: 2) && num >= 50 { return num / 2 }
            else if !num.isMultiple(of: 2) && num < 50 { return num * 2 + 1 }
            else { return num }
        }
        if afterArr.elementsEqual(beforeArr) { break }
        beforeArr = afterArr
        result += 1
    }
    
    return result
}