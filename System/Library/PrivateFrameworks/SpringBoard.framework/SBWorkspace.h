/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@class FBWorkspaceEventQueue, SBWorkspaceTransaction, NSString;

@interface SBWorkspace : NSObject <SBIdleTimerProviding, SBIdleTimerCoordinating> {

	FBWorkspaceEventQueue* _eventQueue;
	SBWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,readonly) FBWorkspaceEventQueue * eventQueue;                       //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) SBWorkspaceTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainWorkspace;
-(id)init;
-(FBWorkspaceEventQueue *)eventQueue;
-(SBWorkspaceTransaction *)currentTransaction;
-(BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(id)createRequestWithOptions:(unsigned long long)arg1 ;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(BOOL)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)executeTransitionRequest:(id)arg1 ;
-(id)initWithEventQueue:(id)arg1 ;
-(BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(/*^block*/id)arg3 ;
-(BOOL)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
@end

