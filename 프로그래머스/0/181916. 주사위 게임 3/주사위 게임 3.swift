import Foundation

func solution(_ a:Int, _ b:Int, _ c:Int, _ d:Int) -> Int {
    var s: Set<Int> = []
    let arr: [Int] = [a, b, c, d].sorted()
    arr.forEach { s.insert($0) }
    let cnt = s.count
    if cnt == 1 {
        return 1111 * arr[0]
    } else if cnt == 2 {
        if arr[1] == arr[2] {
            if arr[1] == arr[0] {
                return (10 * arr[0] + arr[3]) * (10 * arr[0] + arr[3])
            } else {
                return (10 * arr[3] + arr[0]) * (10 * arr[3] + arr[0])
            }
        } else {
            return (arr[1] + arr[2]) * (abs(arr[1] - arr[2]))
        }
    } else if cnt == 3 {
        if arr[0] == arr[1] {
            return arr[2] * arr[3]
        } else if arr[1] == arr[2] {
            return arr[0] * arr[3]
        } else  {
            return arr[0] * arr[1]
        }
    } else {
        return arr[0]
    }
}