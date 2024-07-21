import Foundation

func solution(_ arr:[Int], _ idx:Int) -> Int {
    
    let result = arr.enumerated().filter { $1 == 1 && $0 >= idx}
    
    guard let first = result.first else { return -1}
    return first.offset
}