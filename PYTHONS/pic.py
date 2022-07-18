import pygame
pygame.init()
displaywidth = 1350
displayheight = 619
surface = pygame.display.set_mode((displaywidth, displayheight))
pygame.display.set_caption('PRABIN')
displayImage = pygame.image.load(r'prabin.png')
while True :
      surface.fill((255, 255, 255))
      surface.blit(displayImage, (0, 0))

      for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
        
      pygame.display.update()
