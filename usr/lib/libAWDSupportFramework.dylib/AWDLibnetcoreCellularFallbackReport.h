/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying> {

	SCD_Struct_AW16* _networkEvents;
	SCD_Struct_AW24* _timeToNetworkEventsMsecs;
	unsigned long long _fallbackTimerMsecs;
	NSMutableArray* _dataUsageSnapshotsAtNetworkEvents;
	int _denyReason;
	NSMutableArray* _primaryInterfaceAttemptStatisticsReports;
	BOOL _fellback;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasFellback; 
@property (assign,nonatomic) BOOL fellback;                                                          //@synthesize fellback=_fellback - In the implementation block
@property (assign,nonatomic) BOOL hasDenyReason; 
@property (assign,nonatomic) int denyReason;                                                         //@synthesize denyReason=_denyReason - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackTimerMsecs; 
@property (assign,nonatomic) unsigned long long fallbackTimerMsecs;                                  //@synthesize fallbackTimerMsecs=_fallbackTimerMsecs - In the implementation block
@property (nonatomic,readonly) unsigned long long networkEventsCount; 
@property (nonatomic,readonly) int* networkEvents; 
@property (nonatomic,readonly) unsigned long long timeToNetworkEventsMsecsCount; 
@property (nonatomic,readonly) unsigned long long* timeToNetworkEventsMsecs; 
@property (nonatomic,retain) NSMutableArray * primaryInterfaceAttemptStatisticsReports;              //@synthesize primaryInterfaceAttemptStatisticsReports=_primaryInterfaceAttemptStatisticsReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataUsageSnapshotsAtNetworkEvents;                     //@synthesize dataUsageSnapshotsAtNetworkEvents=_dataUsageSnapshotsAtNetworkEvents - In the implementation block
+(Class)primaryInterfaceAttemptStatisticsReportsType;
+(Class)dataUsageSnapshotsAtNetworkEventsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFellback:(BOOL)arg1 ;
-(void)setHasFellback:(BOOL)arg1 ;
-(BOOL)hasFellback;
-(int)denyReason;
-(void)setDenyReason:(int)arg1 ;
-(void)setHasDenyReason:(BOOL)arg1 ;
-(BOOL)hasDenyReason;
-(id)denyReasonAsString:(int)arg1 ;
-(int)StringAsDenyReason:(id)arg1 ;
-(void)setFallbackTimerMsecs:(unsigned long long)arg1 ;
-(void)setHasFallbackTimerMsecs:(BOOL)arg1 ;
-(BOOL)hasFallbackTimerMsecs;
-(unsigned long long)networkEventsCount;
-(int*)networkEvents;
-(void)clearNetworkEvents;
-(void)addNetworkEvents:(int)arg1 ;
-(int)networkEventsAtIndex:(unsigned long long)arg1 ;
-(void)setNetworkEvents:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)networkEventsAsString:(int)arg1 ;
-(int)StringAsNetworkEvents:(id)arg1 ;
-(unsigned long long)timeToNetworkEventsMsecsCount;
-(unsigned long long*)timeToNetworkEventsMsecs;
-(void)clearTimeToNetworkEventsMsecs;
-(void)addTimeToNetworkEventsMsecs:(unsigned long long)arg1 ;
-(unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)arg1 ;
-(void)setTimeToNetworkEventsMsecs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)clearPrimaryInterfaceAttemptStatisticsReports;
-(void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg1 ;
-(unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
-(id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)arg1 ;
-(void)clearDataUsageSnapshotsAtNetworkEvents;
-(void)addDataUsageSnapshotsAtNetworkEvents:(id)arg1 ;
-(unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
-(id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)arg1 ;
-(BOOL)fellback;
-(unsigned long long)fallbackTimerMsecs;
-(NSMutableArray *)primaryInterfaceAttemptStatisticsReports;
-(void)setPrimaryInterfaceAttemptStatisticsReports:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataUsageSnapshotsAtNetworkEvents;
-(void)setDataUsageSnapshotsAtNetworkEvents:(NSMutableArray *)arg1 ;
@end

