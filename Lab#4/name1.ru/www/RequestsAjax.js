function AJAX() {
    try {
        removeChildren(name1);
    }
    catch (e) {console.log(e);}
    try {
        removeChildren(datan);
    }
    catch (e) {console.log(e);}
    try {
        removeChildren(motto);
    }
    catch (e) {console.log(e);}
    try {
        removeChildren(photo);
    }
    catch (e) {console.log(e);}
    try {
        removeChildren(symbols);
    }
    catch (e) {console.log(e);}
    try {
        removeChildren(horos);
    }
    catch (e) {console.log(e);}
    $.ajax({
        type: "POST",
        url: "http://name1.ru/fromDB.php",
        data: "value=" + document.getElementById("mylistid").value,
        dataType: "json"
    }).done(function (data) {
        console.log(data);
        for (var i = 0; i < data.length; i++) {
            addChild("name1", data[i].name);
            addChild("datan", data[i].datan);
            addChild("motto", data[i].motto);
            addChild("symbols", data[i].symbols);
            addChild("horos", data[i].horos);
            var t = document.createElement("img");
            t.src = data[i].photo;
            document.getElementById("photo").appendChild(t);
        }
    })


}
function removeChildren(node) {
    var children = node.childNodes;

    while (children && children.length) {
        node.removeChild(children[0])
    }
}

function addChild(node, data){
    var t = document.createElement('p');
    t.innerHTML = data;
    document.getElementById(node).appendChild(t);
}
