/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent {

	NSString* _displayType;
	NSNumber* _displayCount;
	NSNumber* _notDisplayedDueToFrequencyControlCount;
	NSString* _experimentID;
	NSString* _experimentCampID;

}

@property (nonatomic,retain) NSString * displayType;                                         //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSNumber * displayCount;                                        //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,retain) NSNumber * notDisplayedDueToFrequencyControlCount;              //@synthesize notDisplayedDueToFrequencyControlCount=_notDisplayedDueToFrequencyControlCount - In the implementation block
@property (nonatomic,retain) NSString * experimentID;                                        //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * experimentCampID;                                    //@synthesize experimentCampID=_experimentCampID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)displayType;
-(void)setDisplayType:(NSString *)arg1 ;
-(void)setDataProvider:(id)arg1 ;
-(NSNumber *)displayCount;
-(id)analyticsEventRepresentation;
-(NSString *)experimentID;
-(NSString *)experimentCampID;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setExperimentCampID:(NSString *)arg1 ;
-(id)initWithDisplayType:(id)arg1 displayCount:(id)arg2 notDisplayedDueToFrequencyControlCount:(id)arg3 ;
-(void)setDisplayCount:(NSNumber *)arg1 ;
-(NSNumber *)notDisplayedDueToFrequencyControlCount;
-(void)setNotDisplayedDueToFrequencyControlCount:(NSNumber *)arg1 ;
@end
