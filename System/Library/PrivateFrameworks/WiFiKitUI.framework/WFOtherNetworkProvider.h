/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol WFOtherNetworkProvider <WFCredentialsProvider>
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) long long securityMode; 
@property (assign,nonatomic) BOOL joining; 
@property (assign,nonatomic) NSString * activityString; 
@property (nonatomic,readonly) id WAPIIdentity; 
@property (nonatomic,readonly) id WAPIRootCertificate; 
@optional
-(long long)securityMode;
-(void)setJoining:(BOOL)arg1;
-(void)setActivityString:(id)arg1;
-(id)WAPIRootCertificate;
-(id)WAPIIdentity;
-(BOOL)joining;
-(NSString *)activityString;

@required
-(NSString *)SSID;

@end

