/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface SXDataRecordStore : NSObject {

	NSArray* _descriptors;
	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
-(NSArray *)records;
-(NSArray *)descriptors;
-(unsigned long long)numberOfRecords;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithRecords:(id)arg1 andDescriptors:(id)arg2 ;
-(id)recordsUsingSortDescriptors:(id)arg1 ;
@end

