/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSFileCoordinator, NSOperationQueue, NSObject, FPDExtensionManager;

@interface FPDCoordinator : NSObject {

	NSMutableSet* _currentlyAccessedURLs;
	NSFileCoordinator* _fileCoordinator;
	NSOperationQueue* _coordinationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FPDExtensionManager* _extensionManager;

}

@property (nonatomic,__weak,readonly) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)stopAccessingURL:(id)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(void)startAccessingURLForAtomDuration:(id)arg1 ;
-(void)resolveItemOrURL:(id)arg1 recursively:(BOOL)arg2 coordinateIfExport:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)resolveItemOrURL:(id)arg1 recursively:(BOOL)arg2 andCoordinateWithHandler:(/*^block*/id)arg3 ;
-(void)resolveItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 toTargetFolderURL:(id)arg3 targetMaterializeOption:(unsigned long long)arg4 sourceMaterializeOption:(unsigned long long)arg5 handler:(/*^block*/id)arg6 ;
-(id)initWithExtensionManager:(id)arg1 callbackQueue:(id)arg2 ;
-(void)stopAccessingAllURLs;
-(void)coordinateAtURL:(id)arg1 recursively:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolveItem:(id)arg1 recursively:(BOOL)arg2 andCoordinateWithHandler:(/*^block*/id)arg3 ;
-(id)_readingIntentWithURL:(id)arg1 materializeOption:(unsigned long long)arg2 ;
-(void)coordinateForCopyingFromURL:(id)arg1 toURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

