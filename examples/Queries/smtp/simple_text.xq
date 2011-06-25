(:~
 : This example uses the send function of the email/smtp module to send an email containing a simple text message from a gmail account.
 :)
import module namespace smtp = 'http://www.zorba-xquery.com/modules/email/smtp'; 
import schema namespace email = 'http://www.zorba-xquery.com/modules/email/email';
import schema namespace imaps = 'http://www.zorba-xquery.com/modules/email/imap';

(:~
 : This variable contains the information on the account from which the email should be sent.
 :) 
declare variable $local:sender-host-info as element(imaps:hostInfo) := (<imaps:hostInfo><imaps:hostName>smtp.gmail.com:587/tls/novalidate-cert</imaps:hostName><imaps:userName>zorba.smtp.sender</imaps:userName><imaps:password>1openssl!</imaps:password></imaps:hostInfo>); 

(: the send function takes the host info and a xml representation of the email to be sent as arguments, the schema describing the email xml can be found at http://www.zorba-xquery.com/modules/email/email. :) 
smtp:send($local:sender-host-info, 
      <email:message>
        <email:envelope>
          <email:date>2010-11-26T15:50:39-04:01</email:date>
          <email:subject>An important message</email:subject>
          <email:recipient><email:to><email:name>Test Account</email:name><email:email>imaptest@28msec.com</email:email></email:to></email:recipient>
         </email:envelope>
        <email:body>
          <email:content contentType="text/plain" charset="UTF-8" contentTransferEncoding="ENC8BIT">
            Zorba really rocks. 
          </email:content>
        </email:body>
      </email:message>);