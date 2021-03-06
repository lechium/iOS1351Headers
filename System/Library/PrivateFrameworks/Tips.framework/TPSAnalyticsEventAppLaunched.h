/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {

	BOOL _landingPage;
	NSString* _contentID;
	NSString* _collectionID;
	NSNumber* _launchNumber;
	NSString* _userType;
	NSString* _launchType;

}

@property (nonatomic,readonly) BOOL landingPage;                     //@synthesize landingPage=_landingPage - In the implementation block
@property (nonatomic,retain) NSString * contentID;                   //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * launchNumber;              //@synthesize launchNumber=_launchNumber - In the implementation block
@property (nonatomic,readonly) NSString * userType;                  //@synthesize userType=_userType - In the implementation block
@property (nonatomic,retain) NSString * launchType;                  //@synthesize launchType=_launchType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)userType;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(id)analyticsEventRepresentation;
-(id)initWithContentID:(id)arg1 collectionID:(id)arg2 launchType:(id)arg3 ;
-(BOOL)landingPage;
-(NSNumber *)launchNumber;
-(NSString *)launchType;
-(void)setLaunchType:(NSString *)arg1 ;
@end

