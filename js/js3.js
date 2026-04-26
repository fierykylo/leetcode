
//https://leetcode.com/problems/to-be-or-not-to-be/?envType=study-plan-v2&envId=30-days-of-javascript
/**
 * @param {string} val
 * @return {Object}
 */
var expect = val => ({
    toBe: x => {
        if (val === x) return true;
        throw new Error("Not Equal");
    },
    notToBe: x => {
        if (val !== x) return true;
        throw new Error("Equal");
    }
});

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */