from flask import Flask

app = Flask(__name__)

@app.route('/')
def index():
    return 'Ola Mundo!'
@app.route("/contato")
def contato():
    return "<form><input type='text'></form>"