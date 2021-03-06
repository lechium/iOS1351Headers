/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNCancelable;
@class CNObservable, NSMutableArray, CNObservableContractEnforcement, NSString;

@interface CNPublishingSubject : CNObservable <CNObserver> {

	CNObservable* _observable;
	id<CNCancelable> _upstreamToken;
	NSMutableArray* _observers;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) CNObservable * observable;                                  //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) id<CNCancelable> upstreamToken;                               //@synthesize upstreamToken=_upstreamToken - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(CNObservable *)observable;
-(id)initWithObservable:(id)arg1 ;
-(void)_subscribeToObservableIfNecessary;
-(id)_allObservers;
-(id<CNCancelable>)upstreamToken;
-(void)setUpstreamToken:(id<CNCancelable>)arg1 ;
@end

