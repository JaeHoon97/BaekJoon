import Foundation

func solution(_ arr:[Int], _ queries:[[Int]]) -> [Int] {
    var result: [Int] = []
    queries.forEach { innerArr in
        let num = arr[innerArr[0]...innerArr[1]].sorted().first { $0 > innerArr[2] } ?? -1
        result.append(num)
    }
    
    return result
}