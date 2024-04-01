import cv2

harcascade = "567 Project\haarcascade_russian_plate_number.xml"  #Russsian Num Plate Recogonizer

cap = cv2.VideoCapture(0)      #Video capturing function

cap.set(3, 640) # width
cap.set(4, 480) # height

min_area = 500
count = 0

while True:
    success, img = cap.read()

    plate_cascade = cv2.CascadeClassifier(harcascade)      #Implementing the har_cascade
    img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)        # Har cascade accepts grey scale image so to convert it to grey scale image

    plates = plate_cascade.detectMultiScale(img_gray, 1.1, 4)   # Detecting the num plate 

    for (x,y,w,h) in plates:                      # coordinates of the num plate 
        area = w * h                             # Area will be acc to the country  

        if area > min_area:
            cv2.rectangle(img, (x,y), (x+w, y+h), (0,255,0), 2)        #Detection boundary- first image passed, then max coordination, color of bounding box, thickness 
            cv2.putText(img, "Number Plate", (x,y-5), cv2.FONT_HERSHEY_COMPLEX_SMALL, 1, (255, 0, 255), 2)   #just shows number plate over number plate

            img_roi = img[y: y+h, x:x+w]       # Crops teh num plate
            cv2.imshow("ROI", img_roi)           # creates a new window in which only num plate is available 


    
    cv2.imshow("Result", img)         # shows result over 


# Above here detection ends 

# This  code saves that image when we press "s"

    if cv2.waitKey(1) & 0xFF == ord('s'):           
        cv2.imwrite("plates/scaned_img_" + str(count) + ".jpg", img_roi)
        cv2.rectangle(img, (0,200), (640,300), (0,255,0), cv2.FILLED)
        cv2.putText(img, "Plate Saved", (150, 265), cv2.FONT_HERSHEY_COMPLEX_SMALL, 2, (0, 0, 255), 2)
        cv2.imshow("Results",img)
        cv2.waitKey(500)
        count += 1
 
# Press ctrl to end the code