/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>

@class NSDate, NSData, MSPVectorTimestamp, NSString;

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSDate* _modificationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
+(id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2 ;
+(id)recordWithContentsOfRecord:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSData *)contents;
-(NSDate *)modificationDate;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3 ;
-(id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(id)derivedRecordWithModificationDate:(id)arg1 ;
@end

