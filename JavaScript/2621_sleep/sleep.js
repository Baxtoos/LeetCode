/**
 * @param {number} millis - mili segundos
 * @return {Promise} - funcao assincrona sleep
 */

millis.setTimeout(() => {
  let t = Date.now();
  sleep(100).then(() => console.log(Date.now() - t));
}, 1000);
