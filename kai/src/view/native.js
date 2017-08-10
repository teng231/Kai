const http = require('http');
var net = require('net');

const R = '♦';
const C = '♥';
const B = '♠';
const T = '♣';

String.prototype.insertAt = function (index, string) {
  return this.substr(0, index) + string + this.substr(index);
}
/**
 * add \n cho string
 * @param {string} str 
 */
function formatString(str, beauty) {
  str = str.insertAt(6, "\n");
  str = str.insertAt(17, "\n");
  if (beauty) {
    return str.replace(/r/g, R).replace(/c/g, C).replace(/t/g, T).replace(/b/g, B);
  }
  return str;
}

function getData(url, cards1, cards2, cards3) {
  var options = {
    host: url,
    // host: 'localhost',
    // port: 3100,
    headers: {
      'Content-Type': 'application/json',
    },
    path: '/poker?cards1=' + cards1 + '&cards2=' + cards2 + '&cards3=' + cards3,
  };

  var done = function (response) {
    var str = ''
    response.on('data', function (chunk) {
      str += chunk;
    });
    response.on('error', function (e) {
      alert("Error:" + e);
    });
    response.on('end', function () {
      // alert(str);
      var list = str.trim().split("\n");
      document.getElementById("ocards1").value = formatString(list[0], true);
      document.getElementById("ocards2").value = formatString(list[1], true);
      document.getElementById("ocards3").value = formatString(list[2], true);


      var client = net.connect({ port: 4000 }, function () {
        console.log('Connection established!');
      });
      client.on('data', function (data) {
        document.write(data.toString());
        client.end();
      });
      client.on('end', function () {
        console.log('Disconnected :(');
      });
    });
  }
  http.request(options, done).end();
}

/**
 * Lấy data khi bấm phím
 */
function layData() {
  var cards1, cards2, cards3, url;
  url = document.getElementById("server").value.replace(/\n|\n\r|\s/g, '');
  cards1 = document.getElementById("icards1").value.replace(/\n|\n\r|\s/g, '');
  cards2 = document.getElementById("icards2").value.replace(/\n|\n\r|\s/g, '');
  cards3 = document.getElementById("icards3").value.replace(/\n|\n\r|\s/g, '');

  document.getElementById("icards1").value = formatString(cards1, true);
  document.getElementById("icards2").value = formatString(cards2, true);
  document.getElementById("icards3").value = formatString(cards3, true);
  getData(url, cards1, cards2, cards3);
}
