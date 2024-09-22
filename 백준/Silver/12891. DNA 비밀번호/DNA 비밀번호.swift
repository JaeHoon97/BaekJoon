import Foundation

func isValidate() -> Bool {
    for i in 0..<4 {
        if save[i] < validation[i] {
            return false
        }
    }
    return true
}

func add(char: Character) {
    if char == "A" { save[0] += 1 }
    else if char == "C" { save[1] += 1 }
    else if char == "G" { save[2] += 1 }
    else { save[3] += 1 }
}

func subtract(char: Character) {
    if char == "A" { save[0] -= 1 }
    else if char == "C" { save[1] -= 1 }
    else if char == "G" { save[2] -= 1 }
    else { save[3] -= 1 }
}

let input: [Int] = readLine()!.split(separator: " ").map { Int($0)! } // 입력
let S: Int = input[0] // DNA 문자열의 길이
let P: Int = input[1] // 비밀번호 문자열의 길이
let dnaStr: [String.Element] = Array(readLine()!) // DNA 문자열
let validation: [Int] = readLine()!.split(separator: " ").map { Int($0)! } // {A C G T}의 최소 개수
var save: [Int] = Array(repeating: 0, count: 4) // 저장소
var result: Int = 0 // 결과


for i in 0..<P {
    add(char: dnaStr[i])
}

if isValidate() { result += 1 }

for i in P..<S {
    add(char: dnaStr[i]) // 추가
    subtract(char: dnaStr[i - P])  // 제거
    if isValidate() { result += 1 }
}

print(result)
