#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    // strpos() 関数を使って、文字列 "xy" が含まれる単語を echo "$line"; で表示しなさい。
    // 文字列を扱う時には、真理値で判断
    if( strops($line, "xy") !== false ) {
	echo "$line";
    }
  } 
?>