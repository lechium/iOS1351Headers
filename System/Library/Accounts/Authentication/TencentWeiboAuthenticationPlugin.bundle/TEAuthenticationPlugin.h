/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Accounts/Authentication/TencentWeiboAuthenticationPlugin.bundle/TencentWeiboAuthenticationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface TEAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin, NSXPCListenerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)_renewMasterCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_renewClientCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_errorForErrorCode:(id)arg1 ;
-(void)_authenticateAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_validateClientRenewalReturnObject:(id)arg1 ;
-(id)md5:(id)arg1 ;
-(BOOL)_validateAuthenticationReturnObject:(id)arg1 ;
-(BOOL)_duplicateAccountExists:(id)arg1 ;
@end

