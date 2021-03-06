/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet, NSMapTable, NFUnfairLock;

@interface FCURLRequestScheduler : NSObject {

	NSMutableOrderedSet* _requests;
	NSMapTable* _inFlightURLTasks;
	NFUnfairLock* _lock;

}

@property (nonatomic,retain) NSMutableOrderedSet * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMapTable * inFlightURLTasks;               //@synthesize inFlightURLTasks=_inFlightURLTasks - In the implementation block
@property (nonatomic,retain) NFUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
-(id)init;
-(NFUnfairLock *)lock;
-(NSMutableOrderedSet *)requests;
-(void)setLock:(NFUnfairLock *)arg1 ;
-(void)_cancelRequest:(id)arg1 ;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(void)_serviceRequests;
-(void)_applyPriority:(long long)arg1 toRequest:(id)arg2 ;
-(BOOL)_isLowPriority:(long long)arg1 ;
-(NSMapTable *)inFlightURLTasks;
-(void)_suspendURLTaskForRequest:(id)arg1 ;
-(void)_resumeURLTaskForRequest:(id)arg1 ;
-(id)scheduleURLRequest:(id)arg1 URLSession:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setInFlightURLTasks:(NSMapTable *)arg1 ;
@end

