/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalCancelable.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id block;                                            //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performAfterDelay:(double)arg1 ;
-(void)cancel;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inQueue:(id)arg2 ;
-(void)performAsync;
@end
