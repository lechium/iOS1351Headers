/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDateComponents, NSDictionary;

@interface STAllowance : NSObject <NSCopying> {

	BOOL _allowanceEnabled;
	BOOL _shouldAllowEditing;
	NSArray* _bundleIdentifiers;
	NSArray* _webDomains;
	NSArray* _categoryIdentifiers;
	NSString* _identifier;
	unsigned long long _behaviorType;
	NSDateComponents* _time;
	NSDictionary* _timeByDay;

}

@property (copy) NSArray * bundleIdentifiers;                              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (copy) NSArray * webDomains;                                     //@synthesize webDomains=_webDomains - In the implementation block
@property (copy) NSArray * categoryIdentifiers;                            //@synthesize categoryIdentifiers=_categoryIdentifiers - In the implementation block
@property (assign) BOOL allowanceEnabled;                                  //@synthesize allowanceEnabled=_allowanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowEditing;                      //@synthesize shouldAllowEditing=_shouldAllowEditing - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double timeToday; 
@property (assign,nonatomic) unsigned long long behaviorType;              //@synthesize behaviorType=_behaviorType - In the implementation block
@property (copy,readonly) NSString * scheduleText; 
@property (nonatomic,copy) NSDateComponents * time;                        //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDictionary * timeByDay;                       //@synthesize timeByDay=_timeByDay - In the implementation block
+(double)timeIntervalForAllowanceDateComponents:(id)arg1 ;
+(id)dateComponentsForDuration:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSDateComponents *)time;
-(void)setTime:(NSDateComponents *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setBehaviorType:(unsigned long long)arg1 ;
-(unsigned long long)behaviorType;
-(NSArray *)webDomains;
-(void)setWebDomains:(NSArray *)arg1 ;
-(NSArray *)categoryIdentifiers;
-(void)setCategoryIdentifiers:(NSArray *)arg1 ;
-(BOOL)shouldAllowEditing;
-(NSDictionary *)timeByDay;
-(void)setTimeByDay:(NSDictionary *)arg1 ;
-(id)defaultTimeByDay;
-(void)setAllowanceEnabled:(BOOL)arg1 ;
-(BOOL)allowanceEnabled;
-(NSString *)scheduleText;
-(void)setShouldAllowEditing:(BOOL)arg1 ;
-(double)timeToday;
-(id)initWithBlueprint:(id)arg1 ;
-(id)defaultBudgetTime;
@end

