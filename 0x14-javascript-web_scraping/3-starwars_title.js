#!/usr/bin/node
// Uses Star Wars API to display title of film by id/release order
const request = require('request');

const url = 'https://swapi-api.alx-tools.com/api/films/:id' + process.argv[2];
request(url, function (error, response, body) {
  if (error) {
    console.error(error);
  }
  const film = JSON.parse(body);
  console.log(film.title);
});
