from flask import Flask, render_template, url_for
app = Flask(__name__)

"""
THIS CODE IS IMCOMPLET YET, IM DEVELOPING THE DESIGN OF THE SITE BY THE MOMENT
"""
@app.route("/")
def index():
    return render_template("index.html")
    

@app.route("/pcs")
def windows_remotes():
	return render_template("pcs.html")

@app.route("/androids")
def android_remotes():
	return render_template("androids.html")
	
if __name__ == "__main__":
    app.run(debug=True)
