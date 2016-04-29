
function compile()
{
	if [ "$option" = "eCMM" ] || [ "$option" = "ecmm" ] || [ $option = 1 ]
	then
		make .clean_eCMMaster;
		make eCMMaster;
		make .install_eCMMaster;
	elif [ "$option" = "GDC" ] || [ "$option" = "gdc" ] || [ $option = 2 ]
	then
		make .clean_gwdevcontrol; 
		make gwdevcontrol; 
		make .install_gwdevcontrol
	elif [ "$option" = "GWS" ] || [ "$option" = "gws" ] || [ $option = 3 ]
	then
		make .clean_gwservices;
		make gwservices;
		make .install_gwservices;
	elif [ "$option" = "BOOT_LOADER" ] || [ "$option" = "boot_loader" ] || [ $option = 4 ]
	then
		make boot_loader_clean;
		make boot_loader;
		make boot_loader_copy;
	else
		echo -e "\nwrong choice\n"
                exit 0
	fi
}



for (( ; ; ))
do

        echo -e "\nSelect the test you want to perform\n"
        echo -e "\n1.eCMM\n2.GDC\n3.GWS\n4.boot_loader\n5.exit\n"
        read option
        if [ $option = 5 ] || [ "$option" = "exit" ]
        then
                echo -e "\nyou select exit option"
                exit 0
        fi
        compile $option
done

