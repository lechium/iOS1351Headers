/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTCoreDataPersistentStoreConfiguration.h>

@protocol AVTUILogger, AVTAvatarsDaemon;
@class NSPersistentContainer, NSString;

@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration> {

	NSPersistentContainer* _container;
	id<AVTUILogger> _logger;
	id<AVTAvatarsDaemon> _daemonClient;

}

@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarsDaemon> daemonClient;              //@synthesize daemonClient=_daemonClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createContainerForRemoteConfiguration;
-(NSPersistentContainer *)container;
-(id<AVTUILogger>)logger;
-(id)persistentStoreCoordinator;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(id)storeDescription;
-(id<AVTAvatarsDaemon>)daemonClient;
-(id)initWithDaemonClient:(id)arg1 environment:(id)arg2 ;
@end

