//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ExternalDownloadState : NSObject
{
    NSMutableDictionary *_externalAssetValues;	// 8 = 0x8
    NSMutableDictionary *_externalDownloadValues;	// 16 = 0x10
}

- (void)_setValues:(id)arg1 forEntity:(long long)arg2 dictionary:(id)arg3;	// IMP=0x00000001001b6070
- (void)_setValue:(id)arg1 forEntity:(long long)arg2 property:(id)arg3 dictionary:(id)arg4;	// IMP=0x00000001001b5f84
- (id)_copyValueForEntity:(long long)arg1 property:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000001001b5f00
- (id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x00000001001b5ed4
- (id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2;	// IMP=0x00000001001b5ea8
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x00000001001b5e8c
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;	// IMP=0x00000001001b5e70
- (void)setExternalValuesWithDictionary:(id)arg1 forDownloadID:(long long)arg2;	// IMP=0x00000001001b5e60
- (void)setExternalValuesWithDictionary:(id)arg1 forAssetID:(long long)arg2;	// IMP=0x00000001001b5e50
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x00000001001b5cf4
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x00000001001b5b98
- (void)removeExternalValuesForDownloadID:(long long)arg1;	// IMP=0x00000001001b5b40
- (void)removeExternalValuesForAssetID:(long long)arg1;	// IMP=0x00000001001b5ae8
- (id)externalValuesForDownloadID:(long long)arg1;	// IMP=0x00000001001b5a78
- (id)externalValuesForAssetID:(long long)arg1;	// IMP=0x00000001001b5a08
- (void)dealloc;	// IMP=0x00000001001b59b8
- (id)init;	// IMP=0x00000001001b5954

@end

