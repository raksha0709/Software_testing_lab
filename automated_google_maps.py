from selenium import webdriver
from selenium.webdriver.common.by import By
import time
class GoogleMapsAutomation:
    def setUp(self):
        self.driver=webdriver.Chrome()
    def search_location(self):
        g_link='https://www.google.com/maps'
        ip_link='//*[@id="searchboxinput"]'
        directions_xpath='//*[@id="searchbox-searchbutton"]'

        self.driver.get(g_link)
        time.sleep(2)

        name=str(input("Enter a location"))
        input_loc=self.driver.find_element(By.XPATH,ip_link)
        input_loc.send_keys(name)
        time.sleep(2)
        direc=self.driver.find_element(By.XPATH,directions_xpath)
        direc.click()
        time.sleep(2)
    def tearDown(self):
        self.driver.quit()
if __name__=='__main__':
    t=GoogleMapsAutomation()
    t.setUp()
    t.search_location()
    t.tearDown()
