<?php
     $server="localhost";
     $login=$_POST['login'];
     $password=$_POST['password'];
     $database="names";
	 $table="init";

$link = mysqli_connect($server, "root", "", $database);
if (mysqli_connect_errno())  {

   header ('Location: http://name1.ru');
}

if (mysqli_query($link,"INSERT INTO $table (login, password) VALUES ('$login', '$password')")) {
   session_start ();
   $_SESSION['login']=$login;
   $_SESSION['password']=$password;
   header ('Location: http://name1.ru/main2.php');
}
else {
header ('Location: http://name1.ru');
}

?>
