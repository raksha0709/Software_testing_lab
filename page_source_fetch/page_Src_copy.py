from selenium import webdriver
import time
class WebPageFetcher:
    def setUp(self):
        self.driver=webdriver.Chrome()
    def page_fetcher(self):
        try:
           self.driver.get("https://www.btreesystems.com/selenium-with-python-training-in-chennai/")
           time.sleep(2)

           page_source=self.driver.page_source.encode('utf-8')
           with open('results.html','wb') as f:
              f.write(page_source)
        except Exception as e:
            print(f'An error occured:{str(e)}')
    def tearDown(self):
        self.driver.quit()

if __name__=='__main__':
    fetch=WebPageFetcher()
    fetch.setUp()
    fetch.page_fetcher()
    fetch.tearDown()