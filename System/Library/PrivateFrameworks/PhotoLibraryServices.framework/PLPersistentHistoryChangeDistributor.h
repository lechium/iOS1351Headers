/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, NSPersistentHistoryToken;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	PLCoreDataChangeMerger* _changeMerger;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSPersistentHistoryToken* _lastToken;
	int _notifyToken;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2 ;
-(void)startObservingRemoteNotifications;
-(void)_inq_startObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;
-(void)_inq_stopObservingRemoteNotifications;
-(void)distributeNewTransactionsSinceLastToken;
-(id)fetchTransactionsSinceLastToken;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(void)distributeTransactions:(id)arg1 ;
-(id)localEventFromTransactions:(id)arg1 ;
@end
