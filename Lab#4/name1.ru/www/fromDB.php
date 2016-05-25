<?php
include("JSON.php");
if( !function_exists('json_encode') ) {
    function json_encode($data) {
        $json = new Services_JSON();
        return( $json->encode($data) );
    }
}
     $server="localhost";
     $database="horoscope";
	 $val=$_REQUEST['value'];
	 $table="inform";
$link = @mysqli_connect($server, "root", "", $database);
if (mysqli_connect_errno())  {
   header ('Location: http://name1.ru');
   header("Content-Type: image/jpg");
}


$sql = "SELECT * FROM $table WHERE name=UPPER('$val')";
$result = mysqli_query($link, $sql);
$array_user = array();
while ($data = mysqli_fetch_assoc($result)){
	$array_user[] = $data;
}
echo json_encode($array_user);
?>
