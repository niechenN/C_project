<?php 
	$arr = [23,14,56,100];
	$len = count($arr);
	for($i = 0; $i < ($len - 1); ++$i) {
		for($j = 0; $j < $len - $i - 1) {
			if($arr[$j] > $arr[$j + 1]) {
				$middle = $arr[$j];
				$arr[$j] = $arr[$j + 1];
				$arr[$j + 1] = $middle;
			}
		}
	}

	echo "<pre>";
	print_r($arr);
	echo "</pre>";
 ?>