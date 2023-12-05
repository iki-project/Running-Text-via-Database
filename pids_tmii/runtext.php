<?php

include 'koneksi.php';

	$sql="SELECT `Runtext` FROM `pids-tmii`";

	$records=mysqli_query($koneksi,$sql);
	$row_query = mysqli_fetch_array($records);
	
	echo $row_query['Runtext']
	
?>
