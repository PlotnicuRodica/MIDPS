<?php
session_start ();





?>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <script src="http://ajax.googleapis.com/ajax/libs/jquery/2.0.2/jquery.min.js"></script>
    <script src="http://name1.ru/RequestsAjax.js"></script>
	<link rel="stylesheet" href="http://name1.ru/style.css" />
    <title>Information</title>
</head>
<body>
<table border=3  white=1000 width="800" align="center">
    <tr>
        <td height=100 colspan=4 align=center>
            <h1>2016 HOROSCOPE</h1>
        </td>
    </tr>
    <tr>
        <td height=100 colspan=4 align=center>
          <span>
            <h2>Choose the zodiac sign you belong to:</h2>
            <select  name = "list" id="mylistid">
              <option value="aries">Aries</option>
              <option value="taurus">Taurus</option>
              <option value="gemini">Gemini</option>
              <option value="cancer">Cancer</option>
              <option value="leo">Leo</option>
              <option value="virgo">Virgo</option>
              <option value="libra">Libra</option>
              <option value="scorpio">Scorpio</option>
              <option value="sagittarius">Sagittarius</option>
              <option value="capricorn">Capricorn</option>
              <option value="aquarius">Aquarius</option>
              <option value="pisces">Pisces</option>

            </select>
          </span>
  <span><input type="submit" value="Ok" onclick="AJAX();return false;"></span>

        </td>
    </tr>
    <tr>
        <td>
            <div>
                <span>
                    <h3>Name:</h3>
                </span>
                <span id="name1"></span>
            </div>
            <div>
                <span>
                    <h3>Date:</h3>
                </span>
                <span id="datan"></span>
            </div>
            <div>
                <span>
                    <h3>Motto:</h3>
                </span>
                <span id="motto"></span>
            </div>
            <div>
                <span>
                    <h3>Symbol:</h3>
                </span>
                <span id="photo"></span>
            </div>
            <div>
                <span>
                    <h3>Description of symbol:</h3>
                </span>
                <span id="symbols"></span>
            </div>
            <div>
                <span>
                    <h3>Horoscope:</h3>
                </span>
                <span id="horos"></span>
            </div>
        </td>
    </tr>
</table>
</body>
</html>
