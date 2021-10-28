/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,retain) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)excludedSyncStores;
-(void)setExcludedSyncStores:(id)arg1 ;
-(void)setSequenceRecord:(HDCloudSyncSequenceRecord *)arg1 ;
@end
