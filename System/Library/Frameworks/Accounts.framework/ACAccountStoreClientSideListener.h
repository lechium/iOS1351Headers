/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACAccountStoreProtocol.h>

@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientSideListener;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
-(void)accountDidChange:(id)arg1 forType:(id)arg2 ;
@end

