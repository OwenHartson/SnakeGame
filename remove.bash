rm main
#cd src/
{
    rm *.gch
    echo "Files removed successfuly";
} || {
    echo "Error removing files...";
}