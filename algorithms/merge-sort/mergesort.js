function merge(lsa, rsa){

    let i = 0
    let j = 0
    let mrg = []

    while(i < lsa.length && j < rsa.length){
        if(lsa[i] < rsa[j]){
            mrg.push(lsa[i])
            i++
        }else{
            mrg.push(rsa[j])
            j++
        }
    }

    if(i < lsa.length){
        lsa.slice(i, lsa.length).forEach(e => mrg.push(e))
    }

    if(j < rsa.length){
        rsa.slice(j, rsa.length).forEach(e => mrg.push(e))
    }
    
    return mrg
}

function mergeSort(arr){

    if(arr.length <= 1){
        return arr
    }
    var mid = Math.floor(arr.length / 2)
    return merge(mergeSort(arr.slice(0, mid)), mergeSort(arr.slice(mid, arr.length)))    
}

console.log(mergeSort([6,3,1,2,8,7,9,4,5]))