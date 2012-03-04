<?php
require_once( 'pachube_functions.php' );
$pachube = new Pachube($_GET['k']);
$feed = $_GET['f'];
$r = $_GET['r'];
$g = $_GET['g'];
$b = $_GET['b'];

$url = "http://www.pachube.com/api/$feed.csv";
$data = "$r,$g,$b";
$update_status = $pachube->updatePachube ( $url, $data );	
$pachube->debugStatusCode($update_status);

//leifp.com/pachube_php/xbeeup.php?r=123&g=223&b=169&f=50477&k=rewjrtZS0MqOWG4R-j4EJ5u9yPYOvCwKUMuK8O_cwbk
?>