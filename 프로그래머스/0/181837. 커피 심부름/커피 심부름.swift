import Foundation

func solution(_ order:[String]) -> Int {
    var result = 0
    order.forEach {
        ($0.contains("americano") || $0.contains("anything")) ? (result += 4500) : (result += 5000)
    }
    return result
}