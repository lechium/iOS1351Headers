/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject {

	ACAccountStore* _accountStore;
	NSString* _effectiveBundleID;

}

@property (readonly) SUScriptAppleAccount * activeStoreAccount; 
@property (readonly) NSString * effectiveBundleID; 
@property (readonly) SUScriptAppleAccount * primaryAppleAccount; 
@property (readonly) NSString * accessPurposeRead; 
@property (readonly) NSString * accessPurposeReadWrite; 
@property (readonly) NSString * accessPurposeWrite; 
@property (readonly) NSString * accountTypeIdentifierFacebook; 
@property (readonly) NSString * accountTypeIdentifierSinaWeibo; 
@property (readonly) NSString * accountTypeIdentifierTwitter; 
@property (readonly) long long renewResultFailed; 
@property (readonly) long long renewResultRejected; 
@property (readonly) long long renewResultRenewed; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(id)accountsWithAccountType:(id)arg1 ;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(id)_accountStore;
-(id)attributeKeys;
-(SUScriptAppleAccount *)primaryAppleAccount;
-(id)scriptAttributeKeys;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(id)makeClientAccessInfoWithAccountType:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2 ;
-(SUScriptAppleAccount *)activeStoreAccount;
-(NSString *)accessPurposeRead;
-(NSString *)accessPurposeReadWrite;
-(NSString *)accessPurposeWrite;
-(NSString *)accountTypeIdentifierFacebook;
-(NSString *)accountTypeIdentifierSinaWeibo;
-(NSString *)accountTypeIdentifierTwitter;
-(long long)renewResultFailed;
-(long long)renewResultRejected;
-(long long)renewResultRenewed;
@end

