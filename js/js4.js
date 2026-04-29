/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

 //https://leetcode.com/problems/counter-ii/?envType=study-plan-v2&envId=30-days-of-javascript
var createCounter = function (init) {
    let og = init;
    return{

        increment: () => {
            init++;
            return init;
        },
        decrement: () => {
            init--;
            return init;
        },
        reset: () => {
            init = og;
            return init;
        }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */