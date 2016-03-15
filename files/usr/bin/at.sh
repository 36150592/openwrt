if [ $# -ne 1  ]; then
   #echo Usage: $0 \"AT command\" 
    echo Error
    
    exit 1
fi
modem="/dev/ttyACM0"

#check if modem is connected
#check for LT1001 and LT1000

if [ ! -c $modem ]; then
  modem="/dev/ttyUSB2"
  if [ ! -c $modem ]; then
    echo "No modem detected"
    exit 0
  fi
fi


s=`/usr/sbin/chat -V -t2 '' $1 OK '' 2>&1 > $modem < $modem` 

if [ -z "$s" ]; then
  echo "Failed to execute command"
  exit 0
fi

echo $s  | cut -d' ' -f2- 

exit 0