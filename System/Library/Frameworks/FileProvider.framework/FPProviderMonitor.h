/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface FPProviderMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)providerIDForApplication:(id)arg1 sharedContainerIdentifier:(id)arg2 ;
+(BOOL)isProviderIDForeground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 forProviderID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forProviderID:(id)arg2 ;
-(BOOL)supportsWakesForProviderID:(id)arg1 ;
-(BOOL)wakeProviderID:(id)arg1 forSessionIdentifier:(id)arg2 ;
@end
