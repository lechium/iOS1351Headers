/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKTimedEventStorePurger, NSString;

@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKTimedEventStorePurger* _eventStorePurger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(id)initWithCreationBlock:(/*^block*/id)arg1 ;
@end

