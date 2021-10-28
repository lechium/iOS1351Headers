/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject {

	NSDate* _entryTimestamp;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSDate * entryTimestamp;              //@synthesize entryTimestamp=_entryTimestamp - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setEntryTimestamp:(NSDate *)arg1 ;
-(NSDate *)entryTimestamp;
@end
