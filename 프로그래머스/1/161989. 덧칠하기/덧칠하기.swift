import Foundation

func solution(_ n:Int, _ m:Int, _ section:[Int]) -> Int {
    var now = section[0] // 페인트를 칠해야되는 첫번째 섹션
    var counter = 0 // 페인트 칠한 수

    for s in section {
        if s >= now { // 현재 위치보다 페인트 칠해야하는 섹션이 뒤에 있을 경우
            counter += 1 // 페인트 칠한 수 +1 증가
            now = s + m // 다음 위치 갱신
        }
    }

    return counter
}
