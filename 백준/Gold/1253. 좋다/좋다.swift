import Foundation

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

var result = 0

for target in arr.indices {
    var start = 0
    var end = arr.count - 1
    
    while start < end {
        if arr[start] + arr[end] == arr[target] {
            if start != target && end != target {
                result += 1
                break
            }
            if start == target { start += 1 }
            if end == target { end -= 1 }
        } else {
            (arr[start] + arr[end] > arr[target]) ? (end -= 1) : (start += 1)
        }
    }
    
}

print(result)
