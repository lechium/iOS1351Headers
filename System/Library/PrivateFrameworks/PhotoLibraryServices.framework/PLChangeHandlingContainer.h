/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLChangePublisher;
@class PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor, NSURL, NSDictionary;

@interface PLChangeHandlingContainer : NSObject {

	PLChangeNode* _changeNode;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLPersistentHistoryChangeDistributor* _persistentHistoryChangeDistributor;
	NSURL* _libraryURL;

}

@property (copy,readonly) NSURL * libraryURL;                                                //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) BOOL isMergingCoalescedSaveNotification; 
@property (nonatomic,copy,readonly) NSDictionary * allDidSaveObjectIDsUserInfo; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSURL *)libraryURL;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleUnknownMergeEvent;
-(id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4 ;
@end

