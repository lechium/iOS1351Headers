/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(void)dealloc;
-(FTCServiceMonitor *)monitor;
-(NSMutableSet *)listeners;
-(BOOL)removeListenerID:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
@end
