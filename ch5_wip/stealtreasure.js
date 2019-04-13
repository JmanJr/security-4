var treasureCount = 45290;

function initMission() {
	console.log("hello");
	document.getElementById("mission").style.display = "block";
	document.getElementById("treasureCount").innerHTML = treasureCount;
	console.log("goodbye");
}

function steal(num) {
	if ((treasureCount - num) > 0) {
		treasureCount = treasureCount - num;
		document.getElementById("treasureCount").innerHTML = treasureCount;
	} else {
		document.getElementById("treasureCount").innerHTML = 0;
		var flagReveal = document.createElement("div");
		var message = document.createTextNode("You successfully stole all the treasure! The flag for this challenge is lotrflag{best_robber_ever}.");
		flagReveal.appendChild(message);
		var body = document.getElementsByTagName("body")[0];
		document.body.appendChild(flagReveal);
	}
}