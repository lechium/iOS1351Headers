/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>

@protocol CNScheduler;
@class CNCancelationToken;

@interface _CNGeneratorObservable : CNObservable {

	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextState;
	/*^block*/id _resultSelector;
	/*^block*/id _delay;
	id<CNScheduler> _scheduler;
	CNCancelationToken* _cancelable;

}
-(BOOL)isFinished;
-(BOOL)isCanceled;
-(void)updateState;
-(id)subscribe:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(void)sendResultsToObserver:(id)arg1 ;
-(void)scheduleNextResultForObserver:(id)arg1 ;
-(void)sendCurrentStateToObserver:(id)arg1 ;
@end

