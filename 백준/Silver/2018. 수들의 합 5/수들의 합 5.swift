import Foundation

// 입력된 정수 N
let N = Int(readLine()!)!
// 목표, 시작, 끝, 결과
var sum = 1, start = 1, end = 1, result = 1;

// 엔드 포인터가 N에 도착 전까지
while end != N {
    if sum < N {
        end += 1
        sum += end
    }
    else if sum > N {
        sum -= start
        start += 1
    }
    else {
        result += 1
        end += 1
        sum += end
    }
}

print(result)
