function randomArray(length, min, max) {
    let array = []
    for (let i = 0; i < length; i++) {
        array.push(min + Math.random()*max)
    }
    return array
}

let arr = randomArray(54, 1, 100)

let data = {
    snaps: [],
    pointers: [],
    sortedArray: null,
    capture: function(what, ptrObj){
        this.snaps.push(Array.from(what))
        this.pointers.push(ptrObj)
    }
}

function insertionSort(arr) {

    for (let i = 1; i < arr.length; i++) {
        let hold = arr[i]
        let k = i - 1
        while(k >= 0 && arr[k] > hold) {
            data.capture(arr, {"i": i, "k": k})
            arr[k + 1] = arr[k]
            k--
        }
        arr[k + 1] = hold
        data.capture(arr, {"i": i, "k": k, "kp": k + 1})
    }

    data.sortedArray = arr

    return data
}

let sortData = insertionSort(arr)