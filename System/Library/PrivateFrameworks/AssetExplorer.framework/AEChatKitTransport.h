/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetExplorer/AEPackageTransport.h>
#import <libobjc.A.dylib/AEPhotosAssetPackageFinalizer.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AEChatKitStatisticsManager;

@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer> {

	NSObject*<OS_dispatch_group> __packagePreparationGroup;
	NSObject*<OS_dispatch_queue> __urlSidetableIsolationQueue;
	NSMutableDictionary* __alternateURLsByIdentifier;
	AEChatKitStatisticsManager* __statisticsManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> _packagePreparationGroup;                 //@synthesize _packagePreparationGroup=__packagePreparationGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _urlSidetableIsolationQueue;              //@synthesize _urlSidetableIsolationQueue=__urlSidetableIsolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _alternateURLsByIdentifier;                      //@synthesize _alternateURLsByIdentifier=__alternateURLsByIdentifier - In the implementation block
@property (nonatomic,readonly) AEChatKitStatisticsManager * _statisticsManager;                       //@synthesize _statisticsManager=__statisticsManager - In the implementation block
@property (assign,nonatomic,__weak) id<AEChatKitTransportDelegate> delegate; 
-(id)init;
-(id)_workQueue;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(void)stagePackages:(id)arg1 ;
-(void)unstagePackageWithIdentifier:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)finalizePackage:(id)arg1 error:(out id*)arg2 ;
-(void)stagePersistedPayloads:(id)arg1 ;
-(id)_persistedURLsFromURLs:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3 ;
-(void)_evictPersistedURLs:(id)arg1 ;
-(id)_preparePackageForCommit:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id*)arg3 ;
-(void)_beginStagingWorkForPackage:(id)arg1 ;
-(id)_chatkitPackageForIdentifer:(id)arg1 ;
-(void)_unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(BOOL)arg2 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(BOOL)arg2 ;
-(id)orderedStagedPayloads;
-(NSObject*<OS_dispatch_group>)_packagePreparationGroup;
-(NSObject*<OS_dispatch_queue>)_urlSidetableIsolationQueue;
-(NSMutableDictionary *)_alternateURLsByIdentifier;
-(AEChatKitStatisticsManager *)_statisticsManager;
@end

