function steal(num) {
	if ((var treasure_count = document.getElementById("treasure_count")) > 0) {
		document.getElementById("treasure_count").innerhtml = treasure_count - num;
	} else {
		var flagReveal = document.createElement("div");
		var message = document.createTextNode("You successfully stole all the treasure! The flag for this challenge is lotrflag{best_robber_ever}.");
		flagReveal.appendChild(message);
		var body = document.getElementsByTagName("body")[0];
		document.body.insert(flagReveal);
	}
}