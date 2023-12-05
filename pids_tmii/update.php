<?php
include 'koneksi.php';
$Runtext      = "";
$error         = "";
$sukses        = "";
if (isset($_POST['Update'])){
    $Runtext       = $_POST['Runtext'];
    if($Runtext){
        $sql1   = "UPDATE `pids-tmii` SET `Runtext`='$Runtext' WHERE 1";
        $q1     = mysqli_query($koneksi,$sql1);
        if($q1){
            $sukses = "berhasil update data";
        }else{
            $error = "gagal update data";
        }
    }else{
        $error = "silahkan masukan text data";
    }
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DATA PIDS TMII</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-BmbxuPwQa2lc/FVzBcNJ7UAyJxM6wuqIj61tLrc4wSX0szH/Ev+nYRRuWlolflfl" crossorigin="anonymous">
    <style>
        .mx-auto {
            width: 900px
        }
    </style>
</head>

<body>
    <div class="mx-auto">
        <div class="card">
            <div class="card-header text-white bg-secondary">
                UPDATE DATA RUNNING TEXT
            </div>
            <div class="card-body">
                <?php
                if($error){
                ?>
                    <div class="alert alert-danger" role="alert">
                        <?php echo $error ?>
                    </div>
                <?php
                }
                ?>
                <?php
                if($sukses){
                ?>
                    <div class="alert alert-success" role="alert">
                        <?php echo $sukses ?>
                    </div>
                <?php
                }
                ?>
                <form action="" method="POST">
                    <div class="mb-3 row">
                        <label for="Runtext" class="col-sm-2 col-form-label">Running text</label>
                        <div class="col-sm-10">
                            <input type="text" class="form-control" id="Runtext" name="Runtext" value="<?php echo $Runtext ?>">
                        </div>
                    </div>
                    <div class="col-12">
                        <input type="submit" name="Update" value="Update Data" class="btn btn-primary" />
                    </div>
                </FORM>
            </div>
        </div>


        <div class="card">
            <div class="card-header text-white bg-secondary">
                UPDATE DATA VIDEO
            </div>
            <div class="card-body">

            </div>
        </div>


    </div>
</body>

</html>