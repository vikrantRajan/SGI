function f(n) {
    const a=[]
    const h=[1] // [0] => 1

    while(a.length<n) { 
    // Loop until specified size

        // remove the smallest item in 'h' and copy it to k
        const k=h.pop() // add the  k = [last index] => "Number" (which is the smallest number since we reversed the order)
        // if a[1] doesn't exist then add values
        // if the index does exist, we avoid duplicates
        if(a.indexOf(k)===-1){
            
            a.push(k)
            h.push(k*2)
            h.push(k*3)
            h.push(k*5)
            // sort 'h' in descending order
            h.sort((a,b)=>b-a)

        }
        console.log(k)
    }
    return a
}

f(1500);

// BREAKING DOWN THE ABOVE CODE....

// Iteration # 1
/*
a[] = empty
h = [1]
k = [1] (We pop h into k);
h = [] (empty)

if (a[1] doesn't exist)
{
    add a = [1]
    add h = [1*2] = [2]
    add h = [1*3] = [2, 3]
    add h = [1*5] = [2, 3, 5]
    sort h = [5, 3, 2]
}

// Iteration # 2

a = [1]
h = [5, 3, 2]
k = [1, 2] (We pop last value of h into k);
h = [5, 3]

if (a[2] doesn't exist)
{
    add a = [2]
    add h = [2*2] = [5, 3, 4]
    add h = [2*3] = [5, 3, 4, 6]
    add h = [2*5] = [5, 3, 4, 6, 10]
    sort h = [10, 6, 5, 4, 3]
}

// Iteration # 3

a = [1, 2]
h = [10, 6, 5, 4, 3]
k = [1, 2, 3] (We pop last value of h into k);
h = [10, 6, 5, 4]

if (a[3] doesn't exist)
{
    add a = [3] = [1, 2, 3]
    add h = [3*2] = [10, 6, 5, 4, 6]
    add h = [3*3] = [10, 6, 5, 4, 6, 9]
    add h = [3*5] = [10, 6, 5, 4, 6, 9, 15]
    sort h = [15, 10, 9, 6, 6, 5, 4]
}


// Iteration # 4

a = [1, 2, 3]
h = [15, 10, 9, 6, 6, 5, 4]
k = [1, 2, 3, 4] (We pop last value of h into k);
h = [15, 10, 9, 6, 6, 5]

if (a[4] doesn't exist)
{
    add a = [4] = [1, 2, 3, 4]
    add h = [4*2] = [15, 10, 9, 6, 6, 5, 8]
    add h = [4*3] = [15, 10, 9, 6, 6, 5, 8, 12]
    add h = [4*5] = [15, 10, 9, 6, 6, 5, 8, 12, 20]
    sort h = [20, 15, 12, 10, 9, 8, 6, 6, 5]
}


// Iteration # 5

a = [1, 2, 3, 4]
h = [20, 15, 12, 10, 9, 8, 6, 6, 5]
k = [1, 2, 3, 4, 5] (We pop last value of h into k);
h = [20, 15, 12, 10, 9, 8, 6, 6]

if (a[5] doesn't exist)
{
    add a = [5] = [1, 2, 3, 4, 5]
    add h = [5*2] = [20, 15, 12, 10, 9, 8, 6, 6, 10]
    add h = [5*3] = [20, 15, 12, 10, 9, 8, 6, 6, 10, 15]
    add h = [5*5] = [20, 15, 12, 10, 9, 8, 6, 6, 10, 15, 25]
    sort h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 6]
}


// Iteration # 6

a = [1, 2, 3, 4, 5]
h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 6]
k = [1, 2, 3, 4, 5, 6] (We pop last value of h into k);
h = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6]

if (a[6] doesn't exist)
{
    add a = [6] = [1, 2, 3, 4, 5, 6]
    add h = [6*2] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12]
    add h = [6*3] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12, 18]
    add h = [6*5] = [25, 20, 15, 15, 12, 10, 10, 9, 8, 6, 12, 18, 30]
    sort h = [30, 25, 20, 18, 15, 15, 12, 12 10, 10, 9, 8, 6]
}


// Iteration # 7

a = [1, 2, 3, 4, 5, 6]
h = [30, 25, 20, 18, 15, 15, 12, 12 10, 10, 9, 8, 6]
k = [1, 2, 3, 4, 5, 6, 6] (We pop last value of h into k);
h = [25, 20, 15, 15, 12, 10, 10, 9, 8]

if (a[6] doesn't exist)
!! 6 does exist so the loop doesn't run on the 7th iteration
By always checking if the last index of A = smallest value of H
and adding based on that we avoid putting any number that is not a multiple of 2,3 or 5!


*/