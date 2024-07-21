import Foundation

func solution(_ numbers:[Int]) -> Int {
    return numbers.sorted().reversed()[0] * numbers.sorted().reversed()[1]
}
