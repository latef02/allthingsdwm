#!/bin/bash



# List all USB drives currently mounted
USB_DRIVES=$(lsblk -lp | grep -E '/usb' | awk '{print $1, "(" $4 ")"}')

# Show the list of USB drives in dmenu and get the selected drive
SELECTED_DRIVE=$(echo "$USB_DRIVES" | dmenu -i -p "Select a USB drive to open:" | awk '{print $1}')

# Check if a drive was selected
if [ -z "$SELECTED_DRIVE" ]; then
  exit
fi

# Open the selected drive in the default file manager
sudo thunar "$SELECTED_DRIVE"

