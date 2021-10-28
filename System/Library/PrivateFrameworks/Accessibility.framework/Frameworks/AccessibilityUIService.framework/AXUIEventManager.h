/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface AXUIEventManager : NSObject {

	BOOL _laserEnabled;
	NSHashTable* _eventHandlers;

}

@property (nonatomic,retain) NSHashTable * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,readonly) BOOL laserEnabled;                      //@synthesize laserEnabled=_laserEnabled - In the implementation block
+(id)sharedEventManager;
-(id)_init;
-(BOOL)laserEnabled;
-(void)registerEventHandler:(id)arg1 ;
-(NSHashTable *)eventHandlers;
-(void)setEventHandlers:(NSHashTable *)arg1 ;
-(BOOL)_handleUIEvent:(id)arg1 ;
-(void)unregisterEventHandler:(id)arg1 ;
@end
