<?php
//variable koneksi dengan database mysql
$host       = "localhost";
$user       = "root";
$pass       = "";
$db         = "pids_tmii";

//proses koneksi
$koneksi    = mysqli_connect($host, $user, $pass, $db);

//cek koneksi
if (!$koneksi) { //cek koneksi
    die("Tidak bisa terkoneksi ke database");
}
//else {
//    echo "koneksi berhasil";
//}

?>