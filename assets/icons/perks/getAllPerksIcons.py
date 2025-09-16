import os
import re
import time
import requests
from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.chrome.service import Service as ChromeService
from selenium.webdriver.chrome.options import Options as ChromeOptions

url = "https://deadbydaylight.fandom.com/wiki/Perks"

chrome_options = ChromeOptions()
chrome_options.add_argument("--headless")
chrome_options.add_argument("--disable-gpu")
chrome_options.add_argument("--no-sandbox")

chromedriver_path = "/usr/bin/chromedriver"
service = ChromeService(executable_path=chromedriver_path)
driver = webdriver.Chrome(service=service, options=chrome_options)

driver.get(url)
time.sleep(5)
soup = BeautifulSoup(driver.page_source, 'html.parser')

wikitable_tab = soup.find_all('table', class_='wikitable sortable jquery-tablesorter')

def extract_icons(wikitable, dir_to_create):
    if wikitable:
        perks_images = wikitable.find_all('img', {'data-src': True})

        pattern = r'(https:\/\/.*?\.png)'

        if not os.path.exists(dir_to_create):
            os.makedirs(dir_to_create)

        for image in perks_images:
            data_src_value = image['data-src']
            match = re.search(pattern, data_src_value)
            if match:
                extracted_url = match.group(0)
                if "IconPerks" in extracted_url:
                    image_name = os.path.basename(extracted_url)
                    destination_path = os.path.join(dir_to_create, image_name)
                    response = requests.get(extracted_url)
                    with open(destination_path, 'wb') as img_file:
                        img_file.write(response.content)
                    print(f"Downloaded : {image_name}")
    else:
        print("An error occurs.")

extract_icons(wikitable_tab[0], "assets/icons/perks/survivors")
time.sleep(2)
extract_icons(wikitable_tab[1], "assets/icons/perks/killers")

driver.quit()