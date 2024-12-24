from selenium import webdriver
from selenium.webdriver.common.by import By
import time 
class LoginPage:
    def setUp(self):
        self.driver=webdriver.Chrome()
        self.driver.get("https://sahyadri.digital/")
    def login_page(self):
        driver=self.driver
        driver.find_element(By.ID,"student-tab").click()
        time.sleep(2)
        driver.find_element(By.NAME,"admission_no").send_keys("0274/IS/2021")
        time.sleep(4)
        driver.find_element(By.CLASS_NAME,"student_pass").send_keys("rekha2210")
        time.sleep(4)
        driver.find_element(By.ID,"login-student").click()
        time.sleep(1000)
    def tearDown(self):
        self.driver.quit()
if __name__=='__main__':
    test=LoginPage()
    test.setUp()
    test.login_page()
    test.tearDown()