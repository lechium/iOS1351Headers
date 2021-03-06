/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNObservableTakeUntilInputObserverDelegate.h>
#import <libobjc.A.dylib/_CNObservableTakeUntilSignalObserverDelegate.h>

@protocol CNCancelable;
@class CNObservable, NSString;

@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate> {

	BOOL _active;
	CNObservable* _input;
	CNObservable* _signal;
	id<CNCancelable> _inputToken;
	id<CNCancelable> _signalToken;

}

@property (readonly) CNObservable * input;                          //@synthesize input=_input - In the implementation block
@property (readonly) CNObservable * signal;                         //@synthesize signal=_signal - In the implementation block
@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (retain) id<CNCancelable> inputToken;                     //@synthesize inputToken=_inputToken - In the implementation block
@property (retain) id<CNCancelable> signalToken;                    //@synthesize signalToken=_signalToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isActive;
-(void)cancel;
-(CNObservable *)signal;
-(void)setActive:(BOOL)arg1 ;
-(CNObservable *)input;
-(id)subscribe:(id)arg1 ;
-(BOOL)shouldMirrorEvent:(id)arg1 ;
-(id)initWithInput:(id)arg1 signal:(id)arg2 ;
-(void)setSignalToken:(id<CNCancelable>)arg1 ;
-(void)setInputToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)inputToken;
-(id<CNCancelable>)signalToken;
-(void)signalDidGenerateEventWithObserver:(id)arg1 ;
@end

