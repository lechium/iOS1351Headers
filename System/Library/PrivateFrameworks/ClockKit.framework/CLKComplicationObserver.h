/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface CLKComplicationObserver : NSObject {

	NSHashTable* _wakeSessionObservers;
	NSHashTable* _observers;

}
+(id)sharedObserver;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)complicationListDidChange;
-(void)addWakeSessionObserver:(id)arg1 ;
-(void)removeWakeSessionObserver:(id)arg1 ;
-(void)wakeSessionWillBeginForBundleID:(id)arg1 ;
-(void)wakeSessionWillEndForBundleID:(id)arg1 ;
-(void)reloadOrExtendForBundleID:(id)arg1 ;
@end

