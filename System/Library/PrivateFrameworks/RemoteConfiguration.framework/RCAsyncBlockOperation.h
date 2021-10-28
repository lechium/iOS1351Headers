/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@interface RCAsyncBlockOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
+(id)asyncBlockOperationWithBlock:(/*^block*/id)arg1 ;
+(id)asyncBlockOperationWithMainThreadBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)start;
-(id)block;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
