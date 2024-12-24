import unittest
from selenium import webdriver
from selenium.webdriver.common.by import By
class Count(unittest.TestCase):
    def setUp(self):
        self.driver=webdriver.Chrome()
        self.driver.get("http://www.google.co.in/")
        self.driver.maximize_window()
    def test_count_elements(self):
        links=self.driver.find_elements(By.TAG_NAME,"a")
        print(f'Total links={len(links)}')
        buttons=self.driver.find_elements(By.TAG_NAME,"button")
        print(f'Total buttons={len(buttons)}')
        input_feild=self.driver.find_elements(By.TAG_NAME,"input")
        print(f'Total input_fields={len(input_feild)}')

    def tearDown(self):
        self.driver.quit()
if __name__=='__main__':
    unittest.main()
