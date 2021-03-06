/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol WFCredentialsProviderContext <WFProviderContext>
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSArray * availableTLSIdentities; 
@property (getter=isEnterprise,nonatomic,readonly) BOOL enterprise; 
@property (getter=isWeakSecurity,nonatomic,readonly) BOOL weakSecurity; 
@property (nonatomic,readonly) long long availableAuthTraits; 
@required
-(NSString *)username;
-(void)gatherCredentials:(/*^block*/id)arg1;
-(BOOL)isEnterprise;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)activatePasswordSharing;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg1;
-(void)launchSettings;
-(BOOL)isPasswordSharingSupported;
-(NSArray *)availableTLSIdentities;
-(BOOL)isWeakSecurity;
-(long long)availableAuthTraits;

@end

