//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMDMMigrator : NSObject
{
}

+ (id)sharedMigrator;	// IMP=0x0000000100005464
- (void)_updateUnlockTokenSecretToClassDIfNeeded;	// IMP=0x000000010000677c
- (void)_updateSkipBackupKeyForNonStoreBooksDirectory;	// IMP=0x00000001000065a4
- (void)_updateNonStoreBooksManifestForSystemGroupContainer;	// IMP=0x0000000100005f84
- (void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)arg1;	// IMP=0x00000001000057ec
- (void)_moveNonStoreManagedBooksToSystemGroupContainer;	// IMP=0x00000001000057a8
- (void)migrateMDMWithContext:(int)arg1;	// IMP=0x00000001000054f0

@end
