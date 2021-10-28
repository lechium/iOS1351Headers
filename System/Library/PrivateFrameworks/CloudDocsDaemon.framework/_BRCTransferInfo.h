/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BRCProgress, NSMutableDictionary;

@interface _BRCTransferInfo : NSObject {

	BRCProgress* _progress;
	long long sumOfCompletedUnitCountDelta;
	long long sumOfTotalUnitCountDelta;
	NSMutableDictionary* _versionSizes;
	NSMutableDictionary* _childProgresses;
	NSMutableDictionary* _previousUnitCounts;

}

@property (nonatomic,readonly) BRCProgress * progress;                                //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long sumOfCompletedUnitCountDelta; 
@property (assign,nonatomic) long long sumOfTotalUnitCountDelta; 
@property (nonatomic,readonly) NSMutableDictionary * versionSizes;                    //@synthesize versionSizes=_versionSizes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * childProgresses;                 //@synthesize childProgresses=_childProgresses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previousUnitCounts;              //@synthesize previousUnitCounts=_previousUnitCounts - In the implementation block
-(id)init;
-(id)description;
-(BRCProgress *)progress;
-(long long)sumOfCompletedUnitCountDelta;
-(long long)sumOfTotalUnitCountDelta;
-(void)setSumOfCompletedUnitCountDelta:(long long)arg1 ;
-(void)setSumOfTotalUnitCountDelta:(long long)arg1 ;
-(NSMutableDictionary *)versionSizes;
-(void)updateUnitCount;
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(void)verifyFutureProgressIsNotFinished;
-(NSMutableDictionary *)childProgresses;
-(NSMutableDictionary *)previousUnitCounts;
@end
