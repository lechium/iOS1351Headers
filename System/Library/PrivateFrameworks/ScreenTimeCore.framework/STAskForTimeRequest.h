/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDate, NSUUID, NSDictionary;

@interface STAskForTimeRequest : NSObject <NSSecureCoding> {

	BOOL _oneMoreMinute;
	long long _usageType;
	NSString* _requestedResourceIdentifier;
	NSString* _resourceDisplayName;
	NSNumber* _timeRequested;
	NSDate* _timeStamp;
	NSUUID* _requestIdentifier;
	NSNumber* _requestingUserDSID;
	NSString* _requestingUserDisplayName;

}

@property (assign,nonatomic) BOOL oneMoreMinute;                                         //@synthesize oneMoreMinute=_oneMoreMinute - In the implementation block
@property (nonatomic,copy) NSString * resourceDisplayName;                               //@synthesize resourceDisplayName=_resourceDisplayName - In the implementation block
@property (nonatomic,retain) NSNumber * timeRequested;                                   //@synthesize timeRequested=_timeRequested - In the implementation block
@property (nonatomic,retain) NSDate * timeStamp;                                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,readonly) long long usageType;                                      //@synthesize usageType=_usageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedResourceIdentifier;              //@synthesize requestedResourceIdentifier=_requestedResourceIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                                 //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * requestingUserDSID;                              //@synthesize requestingUserDSID=_requestingUserDSID - In the implementation block
@property (nonatomic,copy) NSString * requestingUserDisplayName;                         //@synthesize requestingUserDisplayName=_requestingUserDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(long long)usageType;
-(NSDictionary *)payload;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2 ;
-(NSString *)requestedResourceIdentifier;
-(NSString *)resourceDisplayName;
-(NSNumber *)timeRequested;
-(BOOL)oneMoreMinute;
-(NSNumber *)requestingUserDSID;
-(NSString *)requestingUserDisplayName;
-(void)setOneMoreMinute:(BOOL)arg1 ;
-(void)setResourceDisplayName:(NSString *)arg1 ;
-(void)setTimeRequested:(NSNumber *)arg1 ;
-(void)setRequestingUserDSID:(NSNumber *)arg1 ;
-(void)setRequestingUserDisplayName:(NSString *)arg1 ;
@end

