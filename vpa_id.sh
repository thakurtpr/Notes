#!/bin/bash

input=$1

echo "Select * from soundbox_mapping where vpa in ('$1');"
echo "select * from soundbox_mapping_status where vpa_id='$1';"

