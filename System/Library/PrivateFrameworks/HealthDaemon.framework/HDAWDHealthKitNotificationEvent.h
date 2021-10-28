/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitAchievement, HDAWDHealthKitActivityCache, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitExperimentalCondition, HDAWDHealthKitNotificationResponseFlags, NSMutableArray, HDAWDHealthKitWeeklySummaryDetail;

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying> {

	SCD_Struct_HD69* _goalTypes;
	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	HDAWDHealthKitAchievement* _achievement;
	HDAWDHealthKitActivityCache* _activityCache;
	int _alertType;
	HDAWDHealthKitConcurrentCalendarItem* _calendarItem;
	HDAWDHealthKitExperimentalCondition* _experimentalCondition;
	HDAWDHealthKitNotificationResponseFlags* _responseFlags;
	int _testAction;
	NSMutableArray* _views;
	HDAWDHealthKitWeeklySummaryDetail* _weeklySummaryDetail;
	BOOL _dndEnabled;
	BOOL _failedPosting;
	SCD_Struct_HD61 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType;                                                            //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                                                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                                        //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasDndEnabled; 
@property (assign,nonatomic) BOOL dndEnabled;                                                          //@synthesize dndEnabled=_dndEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFailedPosting; 
@property (assign,nonatomic) BOOL failedPosting;                                                       //@synthesize failedPosting=_failedPosting - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentalCondition; 
@property (nonatomic,retain) HDAWDHealthKitExperimentalCondition * experimentalCondition;              //@synthesize experimentalCondition=_experimentalCondition - In the implementation block
@property (assign,nonatomic) BOOL hasTestAction; 
@property (assign,nonatomic) int testAction;                                                           //@synthesize testAction=_testAction - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarItem; 
@property (nonatomic,retain) HDAWDHealthKitConcurrentCalendarItem * calendarItem;                      //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * views;                                                   //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityCache; 
@property (nonatomic,retain) HDAWDHealthKitActivityCache * activityCache;                              //@synthesize activityCache=_activityCache - In the implementation block
@property (nonatomic,readonly) BOOL hasAchievement; 
@property (nonatomic,retain) HDAWDHealthKitAchievement * achievement;                                  //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,readonly) BOOL hasWeeklySummaryDetail; 
@property (nonatomic,retain) HDAWDHealthKitWeeklySummaryDetail * weeklySummaryDetail;                  //@synthesize weeklySummaryDetail=_weeklySummaryDetail - In the implementation block
@property (nonatomic,readonly) unsigned long long goalTypesCount; 
@property (nonatomic,readonly) unsigned* goalTypes; 
@property (nonatomic,readonly) BOOL hasResponseFlags; 
@property (nonatomic,retain) HDAWDHealthKitNotificationResponseFlags * responseFlags;                  //@synthesize responseFlags=_responseFlags - In the implementation block
+(Class)viewsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)views;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(HDAWDHealthKitNotificationResponseFlags *)responseFlags;
-(void)setViews:(NSMutableArray *)arg1 ;
-(HDAWDHealthKitConcurrentCalendarItem *)calendarItem;
-(unsigned long long)viewsCount;
-(void)setCalendarItem:(HDAWDHealthKitConcurrentCalendarItem *)arg1 ;
-(HDAWDHealthKitAchievement *)achievement;
-(void)setAchievement:(HDAWDHealthKitAchievement *)arg1 ;
-(void)addViews:(id)arg1 ;
-(void)setExperimentalCondition:(HDAWDHealthKitExperimentalCondition *)arg1 ;
-(void)clearViews;
-(id)viewsAtIndex:(unsigned long long)arg1 ;
-(void)setActivityCache:(HDAWDHealthKitActivityCache *)arg1 ;
-(void)setWeeklySummaryDetail:(HDAWDHealthKitWeeklySummaryDetail *)arg1 ;
-(unsigned long long)goalTypesCount;
-(void)clearGoalTypes;
-(unsigned)goalTypesAtIndex:(unsigned long long)arg1 ;
-(void)addGoalTypes:(unsigned)arg1 ;
-(void)setResponseFlags:(HDAWDHealthKitNotificationResponseFlags *)arg1 ;
-(void)setDndEnabled:(BOOL)arg1 ;
-(void)setHasDndEnabled:(BOOL)arg1 ;
-(BOOL)hasDndEnabled;
-(void)setFailedPosting:(BOOL)arg1 ;
-(void)setHasFailedPosting:(BOOL)arg1 ;
-(BOOL)hasFailedPosting;
-(BOOL)hasExperimentalCondition;
-(int)testAction;
-(void)setTestAction:(int)arg1 ;
-(void)setHasTestAction:(BOOL)arg1 ;
-(BOOL)hasTestAction;
-(id)testActionAsString:(int)arg1 ;
-(int)StringAsTestAction:(id)arg1 ;
-(BOOL)hasCalendarItem;
-(BOOL)hasActivityCache;
-(BOOL)hasAchievement;
-(BOOL)hasWeeklySummaryDetail;
-(unsigned*)goalTypes;
-(void)setGoalTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasResponseFlags;
-(BOOL)dndEnabled;
-(BOOL)failedPosting;
-(HDAWDHealthKitExperimentalCondition *)experimentalCondition;
-(HDAWDHealthKitActivityCache *)activityCache;
-(HDAWDHealthKitWeeklySummaryDetail *)weeklySummaryDetail;
@end
