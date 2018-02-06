function myFunction() {
	if(document.getElementById('t1').value=="")
		alert("give a valid input");
	else
    	alert(document.getElementById('t1').value);
    document.getElementById("t1").value = "";

}
