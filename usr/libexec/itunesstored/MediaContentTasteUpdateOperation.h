//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSVMediaContentTasteUpdateResponse;

@interface MediaContentTasteUpdateOperation : ISOperation
{
    NSArray *_contentTasteItemUpdates;	// 96 = 0x60
    SSVMediaContentTasteUpdateResponse *_response;	// 104 = 0x68
    _Bool _shouldInvalidateLocalCache;	// 112 = 0x70
}

+ (void)_storeCachedMediaContentSyncURLResponse:(id)arg1 forAccount:(id)arg2;	// IMP=0x000000010013e0d4
+ (id)_cachedMediaContentSyncURLResponseForAccount:(id)arg1;	// IMP=0x000000010013de40
+ (id)_mediaContentTasteSyncURLResponseCacheFilePathForAccount:(id)arg1;	// IMP=0x000000010013dd48
+ (id)_mediaContentTasteCacheDirectoryPath;	// IMP=0x000000010013dc60
+ (void)removeAllCachedResponses;	// IMP=0x000000010013dbe4
- (void).cxx_destruct;	// IMP=0x000000010013eddc
- (unsigned long long)_revisionIDForURLResponse:(id)arg1;	// IMP=0x000000010013ed90
- (id)_responseWithResponseData:(id)arg1 expirationDate:(id)arg2 revisionID:(unsigned long long)arg3 isCachedResponse:(_Bool)arg4;	// IMP=0x000000010013e974
- (void)_getData:(id *)arg1 forContentTasteItemUpdates:(id)arg2 includedContentTasteItemUpdates:(id *)arg3;	// IMP=0x000000010013e4dc
- (id)_ETagValueWithResponse:(id)arg1;	// IMP=0x000000010013e42c
@property _Bool shouldInvalidateLocalCache; // @synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache;
@property(copy) NSArray *contentTasteItemUpdates; // @synthesize contentTasteItemUpdates=_contentTasteItemUpdates;
@property(readonly) SSVMediaContentTasteUpdateResponse *response; // @synthesize response=_response;
- (void)_savePlaylistGlobalIdLikedStatesToLibrary:(id)arg1;	// IMP=0x000000010013c2cc
- (void)_saveAdamIdLikedStatesToLibrary:(id)arg1;	// IMP=0x0000000100138948
- (void)_setLikedState:(id)arg1 forEntity:(id)arg2;	// IMP=0x000000010013811c
- (void)main;	// IMP=0x0000000100136574

@end
