#!/bin/bash
echo "Starting ack..."

function startAck {
  exec ./ack
}

START=$(date +%s)
echo "Program started @ $START"

startAck & wait $!

END=$(date +%s)
echo "Program ended @ $END"

DIFF=$(echo "$END - $START" | bc)
echo "delta: $DIFF seconds"
