/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, NSDate;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel {

	unsigned long long _entryType;
	NSString* _alarmLabel;
	NSDate* _fireDate;
	NSDate* _snoozeDate;

}

@property (assign,nonatomic) unsigned long long entryType;              //@synthesize entryType=_entryType - In the implementation block
@property (nonatomic,retain) NSString * alarmLabel;                     //@synthesize alarmLabel=_alarmLabel - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                         //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,retain) NSDate * snoozeDate;                       //@synthesize snoozeDate=_snoozeDate - In the implementation block
+(id)companionModel;
-(id)description;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(unsigned long long)entryType;
-(void)setEntryType:(unsigned long long)arg1 ;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newCircularMediumTemplate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setAlarmLabel:(NSString *)arg1 ;
-(id)_newLargeUtilityTemplate;
-(id)_newSignatureCornerTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_activeStateTimeTextProvider;
-(id)_snoozeStateDateTextProvider;
-(id)_modularSmallAlarmInactiveImageProvider;
-(void)_makeAlarmStackTextTimeProvider:(id*)arg1 designatorProvider:(id*)arg2 designatorExists:(BOOL*)arg3 designatorLeads:(BOOL*)arg4 ;
-(id)_circularTemplateForAlarm:(BOOL)arg1 ;
-(id)_largeUtilityInactiveImageProvider;
-(id)_extraLargeAlarmInactiveImageProvider;
-(NSDate *)snoozeDate;
-(id)_activeStateTimeRelativeDateTextProvider;
-(NSString *)alarmLabel;
-(void)setSnoozeDate:(NSDate *)arg1 ;
@end

