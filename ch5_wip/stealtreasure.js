var treasureCount = 45290;

function initMission() {
	document.getElementById("mission").style.display = "block";
	document.getElementById("treasureCount").innerHTML = treasureCount;
}

function steal(num) {
	if ((treasureCount - num) > 0) {
		treasureCount = treasureCount - num;
		document.getElementById("treasureCount").innerHTML = treasureCount;
	} else {
		document.getElementById("treasureCount").innerHTML = 0;
		$.ajax({
			url: "/flag",
			type: "GET",
			datatype: "json",
			data: {"checkval": "b!1b0"},
			success: function(res) {
				document.getElementById("flag").innerHTML = res;
			}
		});
	}
}
