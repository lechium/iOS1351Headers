//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL, PersistentStoreConfiguration;

@interface PersistentStore : NSObject
{
    PersistentStoreConfiguration *_configuration;	// 8 = 0x8
    NSManagedObjectModel *_model;	// 16 = 0x10
    NSPersistentStoreCoordinator *_storeCoordinator;	// 24 = 0x18
    NSString *_threadContextKey;	// 32 = 0x20
    NSString *_threadCountKey;	// 40 = 0x28
}

- (id)_newLegacyManagedObjectModel;	// IMP=0x00000001000984a0
- (_Bool)_loadStoreCoordinatorWithIntegrityCheck:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000100098374
- (id)_baseFilePath;	// IMP=0x0000000100098334
- (id)managedObjectModel;	// IMP=0x0000000100097ff8
- (_Bool)loadStoreCoordinatorWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100097908
- (_Bool)resetStore:(id *)arg1;	// IMP=0x00000001000975b0
- (_Bool)performLightweightMigration:(id *)arg1;	// IMP=0x0000000100096ea8
@property(readonly) NSURL *modelFileURL;
- (void)endThreadContextSession;	// IMP=0x0000000100096d14
@property(readonly) NSURL *databaseFileURL;
@property(readonly) PersistentStoreConfiguration *configuration;
- (void)checkIntegrityWithInitializationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010009694c
- (id)beginThreadContextSession;	// IMP=0x00000001000967fc
- (void)dealloc;	// IMP=0x0000000100096794
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100096624
- (id)init;	// IMP=0x0000000100096610

@end

