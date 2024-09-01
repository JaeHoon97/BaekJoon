import Foundation

func solution(_ n:Int) -> Int {
    let binary = String(n, radix: 2)
    let countOfOne = binary.filter { $0 == "1" }.count
    var num = n + 1
    
    while true {
        if String(num, radix: 2).filter{ $0 == "1" }.count == countOfOne {
            return num
        }
        num += 1
    }
}