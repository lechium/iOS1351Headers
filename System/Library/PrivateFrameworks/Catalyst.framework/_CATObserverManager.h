/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, CATOperation, NSString;

@interface _CATObserverManager : NSObject <CATOperationObserver> {

	NSMutableSet* mObservers;
	int mState;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_source> mProgressSource;
	CATOperation* mOperation;
	CATOperation* mStrongOperation;
	BOOL mIsObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)operationDidStart:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 ;
-(void)notifyObserversOperationDidProgress:(id)arg1 ;
@end
