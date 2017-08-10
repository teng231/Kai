const { app, BrowserWindow } = require("electron");
const robot = require("robotjs");
const url = require("url");
const path = require("path");
var net = require('net');


function createWindow() {
  let win = new BrowserWindow({
    width: 1250,
    height: 200,
  });
  win.loadURL(url.format({
    pathname: path.join(__dirname, "/view/index.html"),
    protocol: "file:",
    slashes: true
  }))
  win.on('closed', function () {
    // Dereference the window object, usually you would store windows
    // in an array if your app supports multi windows, this is the time
    // when you should delete the corresponding element.
    win = null
  })
}
app.on("ready", createWindow);
// Quit when all windows are closed.
app.on('window-all-closed', function () {
  // On OS X it is common for applications and their menu bar
  // to stay active until the user quits explicitly with Cmd + Q
  if (process.platform !== 'darwin') {
    app.quit()
  }
})
app.on('activate', function () {
  // On OS X it's common to re-create a window in the app when the
  // dock icon is clicked and there are no other windows open.
  if (mainWindow === null) {
    createWindow();
  }
})
var server = net.createServer(function (connection) {
  console.log('Client Connected');

  connection.on('end', function () {
    console.log('client disconnected');
  });
  connection.write('Hello World!\r\n');
  connection.pipe(connection);
});


server.listen(4000, function () {
  console.log('Server running on http://localhost:4000');
});

