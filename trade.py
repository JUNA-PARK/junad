import requests
from datetime import datetime
from bs4 import BeautifulSoup

"""현재 날짜"""
year = datetime.today().year
month = datetime.today().month
day = datetime.today().day

"""웹페이지 크롤링"""
webpage = requests.get(f"https://search.naver.com/search.naver?where=news&sm=tab_jum&query={day}%EC%9D%BC").text
soup = BeautifulSoup(webpage, "html.parser")
links = soup.find_all("a", class_="news_tit")

"""오늘부터 +2일까지의 기사들 파일 입력"""
for page in range(day, day+3):
    f = open(f"C:\\Users\\W45208\\Desktop\\{year}-{month}-{day}.txt", 'w')
    webpage = requests.get(f"https://search.naver.com/search.naver?where=news&sm=tab_jum&query={day}%EC%9D%BC").text
    soup = BeautifulSoup(webpage, "html.parser")
    links = soup.find_all("a", class_="news_tit")
    for a in links:
        href = a.attrs['href']
        title = a.attrs['title']
        print(f"{year}-{month}-{day}, {title},>, {href}")
        f.write(f"{year}-{month}-{day}, {title},>, {href}\n\n")
    day+=1
    f.close()
    print()
