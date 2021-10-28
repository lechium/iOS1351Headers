/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/INIntentResponseObserver.h>

@protocol _MXIntentResponseObserver;
@class NSString;

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver> {

	id<_MXIntentResponseObserver> _observer;

}

@property (assign,nonatomic,__weak) id<_MXIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_MXIntentResponseObserver>)observer;
-(void)setObserver:(id<_MXIntentResponseObserver>)arg1 ;
-(void)stopObserving;
-(id)initWithObserver:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(void)didReceiveError:(id)arg1 ;
@end
