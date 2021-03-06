//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SagaCloudSDKAddOperation.h"

@interface SagaCloudSDKAddItemToPlaylistOperation : SagaCloudSDKAddOperation
{
    unsigned long long _playlistPersistentID;	// 32 = 0x20
}

- (id)requestWithDatabaseID:(int)arg1 databaseRevision:(int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x000000010009563c
- (id)initWithConfiguration:(id)arg1 opaqueID:(id)arg2 bundleID:(id)arg3 playlistPersistentID:(long long)arg4;	// IMP=0x0000000100095594
- (id)initWithOpaqueID:(id)arg1 bundleID:(id)arg2 playlistPersistentID:(long long)arg3;	// IMP=0x00000001000954f4

@end

