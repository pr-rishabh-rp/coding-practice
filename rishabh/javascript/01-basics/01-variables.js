const accountId = 414243
let accountEmail = "reddeadredemption.com"
var accountPassword = "12345"
accountCity = "Guwahati"
let accountState;       /*      The value in this initialised but undeclared let variable will be undefined, along with its typeof.      */

// accountId = 2        --->        This isn't allowed.

accountEmail = "reddeadredemption2.com"
accountPassword = "Morgan123"
acountcity = "Bengaluru"

console.table([
    { key: 'accountId', value: accountId, type: typeof accountId },
    { key: 'accountEmail', value: accountEmail, type: typeof accountEmail },
    { key: 'accountPassword', value: accountPassword, type: typeof accountPassword },
    { key: 'accountCity', value: accountCity, type: typeof accountCity },
    { key: 'accountState', value: accountState, type: typeof accountState}
]);


/*      Never use var ever again. That shit does not follow block-scope and functional-cope.    */