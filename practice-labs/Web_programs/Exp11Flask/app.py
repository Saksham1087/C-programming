from flask import Flask, jsonify, request
from flask_cors import CORS

app = Flask(__name__)
CORS(app)  # Enable CORS for all routes

users = []

@app.route('/add', methods=['POST'])
def add_user():
    data = request.get_json()
    users.append(data)
    return jsonify({
        "message": "User added",
        "data": data
    })

@app.route('/get', methods=['GET'])
def get_users():
    return jsonify(users)

if __name__ == '__main__':
    app.run(debug=True)