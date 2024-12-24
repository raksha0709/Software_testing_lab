from selenium import webdriver 
from selenium.webdriver.common.by import By 
import time 
 
class GoogleFormAutomation: 
    def setUp(self): 
        self.driver = webdriver.Chrome()  
 
    def fill_form(self): 
 
            self.driver.get("https://shorturl.at/SyiBz") 
            time.sleep(2) 
 
            name = "name" 
            name_input = self.driver.find_element(By.XPATH, '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[1]/div/div/div[2]/div/div[1]/div/div[1]/input') 
            name_input.send_keys(name) 
            time.sleep(2) 
             
            usn = "4SF21IS000" 
            age_input = self.driver.find_element(By.XPATH, '//*[@id="mG61Hd"]/div[2]/div/div[2]/div[2]/div/div/div[2]/div/div[1]/div/div[1]/input') 
            age_input.send_keys(usn) 
            time.sleep(2) 
             
            submit = self.driver.find_element(By.XPATH, '//*[@id="mG61Hd"]/div[2]/div/div[3]/div[1]/div[1]/div/span') 
            submit.click() 
 
            time.sleep(2)  
 
 
    def tearDown(self): 
        self.driver.quit() 
 
if __name__ == "__main__": 
    automation = GoogleFormAutomation() 
    automation.setUp() 
    automation.fill_form() 
    automation.tearDown() 