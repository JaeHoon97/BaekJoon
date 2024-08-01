import Foundation

func solution(_ numbers:[Int], _ k:Int) -> Int {
    
    var index = 0
    var cnt = 0
    
    while true {
        cnt += 1
        if cnt == k { break }
        index = (index + 2) % numbers.count
    }
    
    return numbers[index]
}