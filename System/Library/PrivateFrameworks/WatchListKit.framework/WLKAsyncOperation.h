/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@interface WLKAsyncOperation : NSOperation {

	int _state;

}
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end
