import urllib2

def sendFileContent(sURL):
	content = urllib2.urlopen(sURL)
	return content.read()
	
		
#downAndSend("http://url.com/name.exe")
