import smtplib

from email.mime.text import MIMEText

s = smtplib.SMTP('smtp.live.com')

s.set_debuglevel(1)

msg = MIMEText("""body""")

sender = 'me@example.com'

recipients = ['ghi@hotmail.com', 'def@yahoo.com', 'ghi@gmail.com', 'abc@channelier.com', 'abc@hotmail.com', 'def@hotmail.com', 'abc@gmail.com', 'abc@yahoo.com', 'def@channelier.com','jkl@hotmail.com', 'ghi@yahoo.com', 'def@gmail.com']

msg['Subject'] = "subject line"

msg['From'] = sender

msg['To'] = ", ".join(recipients)

s.sendmail(sender, recipients, msg.as_string())