'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.replace(/\s+/g, " ").trim();
    });
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function readIntArr() {
    let str = readLine();
    str = str.split(" ");
    let arr = [];
    for (let i = 0; i < str.length; i++) {
        arr.push(parseInt(str[i], 10));
    }
    return arr;
}

function print(x) {
    process.stdout.write(x + "");
}

// TODO: Implement this method
function reverseNum(n) {
    let rev_num = 0;
    while(n > 0)
        {
            rev_num = rev_num * 10 + n % 10;
            n = Math.floor(n / 10);
        }
        return rev_num;
}

// NOTE: Please do not modify this function
function main() {
    let n = parseInt(readLine(), 10);
    let result = reverseNum(n);
    console.log(result);
}

