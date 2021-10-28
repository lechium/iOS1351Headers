/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class NSSet, CXCallObserver, NSString;

@interface CTCallCenter : NSObject <CXCallObserverDelegate> {

	queue* _queue;
	queue* clientQueue;
	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;
	CXCallObserver* _callKitObserver;

}

@property (retain) CXCallObserver * callKitObserver;                //@synthesize callKitObserver=_callKitObserver - In the implementation block
@property (retain) NSSet * currentCalls; 
@property (nonatomic,copy) id callEventHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)initialize;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)calculateCallStateChanges_sync:(id)arg1 ;
-(CXCallObserver *)callKitObserver;
-(BOOL)getCurrentCallSetFromServer_sync:(id)arg1 ;
-(id)callEventHandler;
-(void)handleCallStatusChange_sync:(id)arg1 ;
-(void)setCallEventHandler:(id)arg1 ;
-(NSSet *)currentCalls;
-(void)setCurrentCalls:(NSSet *)arg1 ;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1 ;
-(void)setCallKitObserver:(CXCallObserver *)arg1 ;
@end
