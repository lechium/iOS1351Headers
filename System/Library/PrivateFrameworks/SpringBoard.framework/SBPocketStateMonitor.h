/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CMPocketStateDelegate.h>

@protocol OS_dispatch_queue;
@class CMPocketStateManager, NSHashTable, NSObject, NSString;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate> {

	CMPocketStateManager* _pocketStateManager;
	long long _pocketState;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) long long pocketState;               //@synthesize pocketState=_pocketState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(long long)pocketState;
-(id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2 ;
@end

