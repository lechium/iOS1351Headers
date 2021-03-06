/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString, CLLocation;

@interface NTKSunriseTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _showingSunrise;
	BOOL _currentEvent;
	NSDate* _sunriseDate;
	NSDate* _sunsetDate;
	long long _constantSun;
	NSString* _locationText;
	CLLocation* _location;
	NSString* _animationGroup;

}

@property (nonatomic,retain) NSDate * sunriseDate;                   //@synthesize sunriseDate=_sunriseDate - In the implementation block
@property (nonatomic,retain) NSDate * sunsetDate;                    //@synthesize sunsetDate=_sunsetDate - In the implementation block
@property (assign,nonatomic) long long constantSun;                  //@synthesize constantSun=_constantSun - In the implementation block
@property (assign,nonatomic) BOOL showingSunrise;                    //@synthesize showingSunrise=_showingSunrise - In the implementation block
@property (assign,nonatomic) BOOL currentEvent;                      //@synthesize currentEvent=_currentEvent - In the implementation block
@property (nonatomic,retain) NSString * locationText;                //@synthesize locationText=_locationText - In the implementation block
@property (nonatomic,retain) CLLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,retain) NSString * animationGroup;              //@synthesize animationGroup=_animationGroup - In the implementation block
+(id)largeModular:(id)arg1 ;
+(id)smallModular:(id)arg1 ;
+(id)smallUtility:(id)arg1 ;
+(id)circular:(id)arg1 isMedium:(BOOL)arg2 ;
+(id)extraLarge:(id)arg1 ;
+(id)largeUtility:(id)arg1 suppressCountdown:(BOOL)arg2 ;
+(id)_signatureCorner:(id)arg1 ;
+(id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 ;
+(id)_eventTimeAndCountdown:(id)arg1 suppressCountdown:(BOOL)arg2 suppressCommaSeparator:(BOOL)arg3 abbreviated:(BOOL)arg4 ;
-(id)description;
-(CLLocation *)location;
-(BOOL)currentEvent;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSDate *)eventDate;
-(NSString *)locationText;
-(void)setLocationText:(NSString *)arg1 ;
-(void)setCurrentEvent:(BOOL)arg1 ;
-(void)setConstantSun:(long long)arg1 ;
-(long long)constantSun;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(NSString *)animationGroup;
-(void)setAnimationGroup:(NSString *)arg1 ;
-(BOOL)showingSunrise;
-(NSDate *)sunriseDate;
-(NSDate *)sunsetDate;
-(void)setSunriseDate:(NSDate *)arg1 ;
-(void)setSunsetDate:(NSDate *)arg1 ;
-(void)setShowingSunrise:(BOOL)arg1 ;
@end

