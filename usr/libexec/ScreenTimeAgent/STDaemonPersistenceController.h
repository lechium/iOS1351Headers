//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STPersistenceController.h>

@interface STDaemonPersistenceController : STPersistenceController
{
    _Bool _hasStoreLoaded;	// 8 = 0x8
}

@property(nonatomic) _Bool hasStoreLoaded; // @synthesize hasStoreLoaded=_hasStoreLoaded;
- (void)_createDataVaultDirectory;	// IMP=0x0000000100013a2c
- (void)_loadLocalPersistentStore;	// IMP=0x00000001000137c0
- (void)resume;	// IMP=0x000000010001378c
- (_Bool)unloadCloudPersistentStoreWithError:(id *)arg1;	// IMP=0x00000001000133e4
- (void)_destroyAndReloadAfterFailureWithStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013058
- (void)_didAddPersistentStoreDescription:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012d2c
- (void)loadPersistentStoreDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012a6c
- (id)newBackgroundContext;	// IMP=0x0000000100012a04
- (id)viewContext;	// IMP=0x00000001000129b0

@end

