from flask import Flask
from flask import request, render_template

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("smaugslair.html")

@app.route("/flag", methods=['GET'])
def flag():
    print('in post')
    print(request.args)
    key = request.args.get("checkval", "")
    print(key)
    
    if key == "b!1b0":
        return "lotrflag{best_robber_ever}"

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000, threaded=True)