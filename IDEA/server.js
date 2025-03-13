const express = require('express');
const bodyParser = require('body-parser');
const app = express();
const PORT = 3000;

// Middleware to parse incoming JSON and URL-encoded requests
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

// Serve the static files (HTML, CSS)
app.use(express.static(__dirname));

// Hardcoded login credentials
const validCredentials = {
    user_id: 'abcd',
    password: '1234',
};

// Login endpoint
app.post('/login', (req, res) => {
    const { user_id, password } = req.body;

    if (user_id === validCredentials.user_id && password === validCredentials.password) {
        res.status(200).send({ message: 'Login successful!' });
    } else {
        res.status(401).send({ message: 'Invalid credentials. Please try again.' });
    }
});

// Start the server
app.listen(PORT, () => {
    console.log(`Server running on http://localhost:${PORT}`);
});
