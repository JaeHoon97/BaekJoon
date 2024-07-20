import Foundation

let n = readLine()!.components(separatedBy: [" "]).map { Int($0)! }

for i in 0..<n[0] {
    for _ in 0...i {
        print("*", terminator: "")
    }
    print("")
}
