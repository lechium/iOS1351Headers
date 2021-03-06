/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNIconCache.h>

@protocol CALNNotificationIconProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface CALNNotificationIconCache : NSObject <CALNIconCache> {

	id<CALNNotificationIconProvider> _notificationIconProvider;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<CALNNotificationIconProvider> notificationIconProvider;              //@synthesize notificationIconProvider=_notificationIconProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)_iconCacheDirectory;
+(id)pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)iconCacheDirectory;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1 ;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2 ;
-(id<CALNNotificationIconProvider>)notificationIconProvider;
-(BOOL)_createCacheDirectoryIfNeeded;
-(id)cachedIconPathForIconIdentifier:(id)arg1 ;
-(id)iconIdentifierForCachedIconPath:(id)arg1 ;
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithNotificationIconProvider:(id)arg1 ;
@end

