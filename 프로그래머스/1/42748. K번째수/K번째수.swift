import Foundation

func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {
    
    return commands.map { arr in
        let start = arr[0] - 1
        let end = arr[1] - 1
        let index = arr[2] - 1
        
        return array[start...end].sorted()[index]
    }
}
