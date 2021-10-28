/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectorConfiguration : NSObject <NSCopying> {

	unsigned long long _collectionType;
	double _collectionInterval;
	double _collectionLatency;

}

@property (nonatomic,readonly) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) double collectionInterval;                      //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) double collectionLatency;                       //@synthesize collectionLatency=_collectionLatency - In the implementation block
+(id)configurationWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3 ;
+(id)disabledConfiguration;
+(id)configurationWithType:(unsigned long long)arg1 aggregatorConfiguration:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)collectionType;
-(double)collectionInterval;
-(double)collectionLatency;
-(id)mergedConfiguration:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3 ;
@end
