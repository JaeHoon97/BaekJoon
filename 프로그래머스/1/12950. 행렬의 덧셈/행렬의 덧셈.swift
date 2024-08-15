import Foundation

func solution(_ arr1:[[Int]], _ arr2:[[Int]]) -> [[Int]] {
    var result: [[Int]] = Array(repeating: Array(repeating: 0, count: arr1[0].count), count: arr1.count)
    for y in 0..<arr1.count {
        for x in 0..<arr1[0].count {
            result[y][x] = arr1[y][x] + arr2[y][x]
        }
    }
    return result
}
