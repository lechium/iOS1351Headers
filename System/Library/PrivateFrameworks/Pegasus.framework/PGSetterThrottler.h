/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface PGSetterThrottler : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	id _value;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	id _throttledValue;
	BOOL _busy;
	BOOL _pending;

}

@property (nonatomic,retain) id value; 
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)_setValue;
-(id)initWithBlock:(/*^block*/id)arg1 usingQueue:(id)arg2 ;
@end

