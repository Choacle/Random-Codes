import cv2  # opencv ekle

import pygame  # pygame ekle
import pygame.camera  # kamerayla calismak icin

pygame.init()  # pygame baslat
pygame.camera.init()  # camera baslat

camera_list = pygame.camera.list_cameras()
cam = pygame.camera.Camera(camera_list[0])
# Linux icin cam = pygame.camera.Camera('/dev/video0')

cam.start()  # kamerayi baslat
display = pygame.display.set_mode(cam.get_size())  # kameranin cozunurlugunde bir pencere olustur

try:
    while True:
        frame = cam.get_image()  # camera bize Surface tipinde bir nesne dondurur
        buffer = pygame.surfarray.array3d(frame)  # biz bu nesneyi numpy arrayi haline getirebiliriz.
        # surfarray Surface <=> Array donusumleri icin kullaniliyor
        # array3d yontemini kullanmamizin sebebi resimlerin uc boyutlu olmasi => uzunluk, genislik ve RGB renkler

        ## bura yapilan isleme gore doldurulacak

        im = pygame.surfarray.make_surface(
            buffer)  # uzerinde degisiklikler yapilmis buffer tekrar Surface haline getiriliyor
        display.blit(im, (0, 0))  # ekrana yazdirmak icin kullanilan bellek alanina goruntuyu "blitliyoruz"
        pygame.display.update()  # guncelleme

        for event in pygame.event.get():
            if event.type == pygame.KEYDOWN:
                sys.exit(0)  ## bir tusa basilirsa programı kapa

except SystemExit, KeyboardInterrupt:
    pygame.quit()  # program kapatildiginda duzgun bir cikis yap