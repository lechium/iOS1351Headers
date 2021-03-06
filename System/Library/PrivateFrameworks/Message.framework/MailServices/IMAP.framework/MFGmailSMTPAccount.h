/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/SMTPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>
#import <libobjc.A.dylib/MFClientTokenAuthProtocol.h>

@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol> {

	GmailAccount* _account;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) GmailAccount * mailAccount;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountTypeIdentifier;
-(id)password;
-(id)hostname;
-(id)username;
-(id)clientToken;
-(BOOL)usesSSL;
-(id)preferredAuthScheme;
-(id)accountForRenewingCredentials;
-(unsigned)portNumber;
-(id)oauth2Token;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(void)setMailAccount:(GmailAccount *)arg1 ;
-(id)errorForResponse:(id)arg1 ;
-(id)_urlFromResponse:(id)arg1 ;
@end

