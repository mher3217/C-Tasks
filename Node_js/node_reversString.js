var fs = require("fs");

var fileContent = fs.readFileSync("test_read.txt", "utf8");

var sub1 = fileContent.slice(0,fileContent.indexOf("\n"));
var sub2 = fileContent.slice(fileContent.lastIndexOf("\n") );
var fileContent = fileContent.slice(fileContent.indexOf("\n"),fileContent.lastIndexOf("\n" ));

fileContent = sub2 + fileContent + "\n"+ sub1;
fs.writeFile('mynewfile.txt', fileContent, function (err) {
  if (err) throw err;
  console.log('Saved!');
});

fs.readFile("mynewfile.txt", "utf8",
            function(error,data){
                if(error) throw error;
                console.log(data);
});
//console.log(fileContent);
