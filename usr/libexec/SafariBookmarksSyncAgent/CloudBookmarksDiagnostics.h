//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CloudBookmarkStore, NSMutableDictionary;

@interface CloudBookmarksDiagnostics : NSObject
{
    NSMutableDictionary *_sensitiveStringIdentifiers;	// 8 = 0x8
    CloudBookmarkStore *_bookmarkStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100041f38
@property(readonly, nonatomic) CloudBookmarkStore *bookmarkStore; // @synthesize bookmarkStore=_bookmarkStore;
- (id)_identifierForSensitiveString:(id)arg1;	// IMP=0x0000000100041e60
- (id)_stringForBookmarkType:(long long)arg1;	// IMP=0x0000000100041e44
- (id)_stringForFolderType:(long long)arg1;	// IMP=0x0000000100041e08
- (void)_traverseBookmarksInDatabase:(void *)arg1 parentFolderID:(id)arg2 bookmarksCount:(long long *)arg3 foldersCount:(long long *)arg4 details:(id)arg5;	// IMP=0x00000001000415c0
- (id)_localBookmarksDictionaryFromDatabase:(void *)arg1;	// IMP=0x00000001000413bc
- (id)_changesDictionaryFromDatabase:(void *)arg1;	// IMP=0x0000000100040ba8
- (id)_stringForRemoteMigrationState:(long long)arg1;	// IMP=0x0000000100040b6c
- (void)_collectDiagnosticsDataWithRemoteMigrationInfo:(id)arg1 remoteMigrationInfoError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040694
- (void)collectDiagnosticsDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000405a8
- (id)initWithBookmarkStore:(id)arg1;	// IMP=0x0000000100040520
- (id)init;	// IMP=0x0000000100040508

@end
