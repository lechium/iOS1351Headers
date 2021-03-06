/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATOperation, NSTimer;

@interface CRKTimeoutHarnessOperation : CATOperation {

	CATOperationQueue* _operationQueue;
	CATOperation* _operation;
	double _timeout;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CATOperation * operation;                        //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                            //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(void)cancel;
-(CATOperationQueue *)operationQueue;
-(CATOperation *)operation;
-(void)main;
-(BOOL)isAsynchronous;
-(double)timeout;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)dependentOperationDidFinish:(id)arg1 ;
-(void)timeoutDidFire:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 operation:(id)arg2 timout:(double)arg3 ;
@end

