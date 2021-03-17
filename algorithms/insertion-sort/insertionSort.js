let arr = [2,9,4,3,7,5,8,1,0]

function insertionSort(arr) {
    
    let snaps = []

    for (let i = 1; i < arr.length; i++) {
        let hold = arr[i]
        let k = i - 1
        while(k >= 0 && arr[k] > hold) {
            arr[k + 1] = arr[k]
            arr[k] = hold
            k--
        }
    }

    return arr
}