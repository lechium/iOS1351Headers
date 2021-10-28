/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary;

@interface NFEventManager : NSObject {

	NSMutableSet* _events;
	NSMutableDictionary* _triggers;

}

@property (nonatomic,readonly) NSMutableSet * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * triggers;              //@synthesize triggers=_triggers - In the implementation block
-(id)init;
-(NSMutableSet *)events;
-(NSMutableDictionary *)triggers;
-(void)attemptTriggersForCurrentEvent:(id)arg1 ;
-(void)triggerOnAnyEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)handleOnceTrigger:(id)arg1 event:(id)arg2 ;
-(void)handleAlwaysTrigger:(id)arg1 event:(id)arg2 ;
-(void)fireEvent:(id)arg1 ;
-(void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnEvent:(id)arg1 block:(/*^block*/id)arg2 ;
@end
