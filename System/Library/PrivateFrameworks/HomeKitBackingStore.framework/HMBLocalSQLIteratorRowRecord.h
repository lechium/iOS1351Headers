/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@interface HMBLocalSQLIteratorRowRecord : HMBSQLQueryIterator {

	int _zoneRowBindOffset;
	unsigned long long _returning;
	unsigned long long _zoneRow;

}

@property (nonatomic,readonly) unsigned long long returning;              //@synthesize returning=_returning - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) int zoneRowBindOffset;                     //@synthesize zoneRowBindOffset=_zoneRowBindOffset - In the implementation block
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 skip:(BOOL*)arg2 updatedSequence:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(unsigned long long)zoneRow;
-(int)zoneRowBindOffset;
-(unsigned long long)returning;
-(id)initWithSQLContext:(id)arg1 zoneRow:(unsigned long long)arg2 returning:(unsigned long long)arg3 ;
@end
