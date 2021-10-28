//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSInvalidSATEntriesCleaner : NSObject
{
}

- (void)_cleanupModelFilesAtDir:(id)arg1 forAsset:(id)arg2;	// IMP=0x000000010008358c
- (void)_cleanupInvalidModelsForAsset:(id)arg1;	// IMP=0x0000000100083424
- (id)_cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(_Bool)arg4;	// IMP=0x0000000100082f60
- (id)_cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(_Bool)arg2;	// IMP=0x00000001000825e8
- (id)_cleanupInvalidAudioFiles:(id)arg1 dryRun:(_Bool)arg2;	// IMP=0x0000000100081df4
- (id)_cleanupContentsOfSatFolderWithLanguageCode:(id)arg1 dryRun:(_Bool)arg2;	// IMP=0x00000001000818a0
- (id)_cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x00000001000812e8
- (void)_cleanupImplicitUtteranceCache;	// IMP=0x00000001000811d8
- (id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x0000000100080878
- (void)sanitizeSATFilesWithAsset:(id)arg1;	// IMP=0x0000000100080644
- (id)init;	// IMP=0x00000001000805dc

@end
