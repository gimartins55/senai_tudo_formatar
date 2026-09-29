const express = require("express");
const express = require("cors");

const api = express();

api.use(cors);
api.use(express.json());

api.listen(3000);