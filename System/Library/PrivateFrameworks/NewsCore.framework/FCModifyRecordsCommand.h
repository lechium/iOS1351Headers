/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCModifyRecordsCommand : FCCommand {

	BOOL _merge;
	/*^block*/id _localRecordsGenerator;
	NSArray* _localRecords;

}

@property (nonatomic,copy) id localRecordsGenerator;                  //@synthesize localRecordsGenerator=_localRecordsGenerator - In the implementation block
@property (nonatomic,copy) NSArray * localRecords;                    //@synthesize localRecords=_localRecords - In the implementation block
@property (assign,nonatomic) BOOL merge;                              //@synthesize merge=_merge - In the implementation block
@property (nonatomic,readonly) NSArray * t_localRecords; 
+(BOOL)supportsSecureCoding;
+(id)desiredKeys;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)merge;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithLocalRecords:(id)arg1 merge:(BOOL)arg2 ;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(id)initWithLocalRecordsGenerator:(/*^block*/id)arg1 merge:(BOOL)arg2 ;
-(NSArray *)localRecords;
-(id)localRecordsGenerator;
-(void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4 ;
-(void)setLocalRecords:(NSArray *)arg1 ;
-(void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)t_localRecords;
-(void)setLocalRecordsGenerator:(id)arg1 ;
-(void)setMerge:(BOOL)arg1 ;
@end

