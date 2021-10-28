//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation
{
    FinishDownloadMemoryEntity *_download;	// 96 = 0x60
    NSString *_downloadPhase;	// 104 = 0x68
    double _progressFraction;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000100109764
@property(readonly, nonatomic) FinishDownloadMemoryEntity *download; // @synthesize download=_download;
- (id)_newURLOperationWithAsset:(id)arg1;	// IMP=0x000000010010952c
- (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001090a8
- (_Bool)unzipAsset:(id)arg1 unzippedPath:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000100108f08
@property double progressFraction;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSString *downloadPhase;
- (_Bool)rollbackAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001088d0
- (_Bool)removeInstalledAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001082dc
- (_Bool)moveFile:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000100107c14
- (_Bool)moveAsset:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000100107b18
- (_Bool)installAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100107964
- (void)finishWithDownloadResponse:(id)arg1;	// IMP=0x0000000100107868
- (_Bool)downloadAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100107564
- (_Bool)downloadAndInstallAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100106e98
- (id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2;	// IMP=0x0000000100106c20
- (void)addPurchaseManifestItemWithLibraryIdentifier:(id)arg1;	// IMP=0x000000010010694c
- (void)addPurchaseManifestItem;	// IMP=0x000000010010693c
- (id)initWithDownload:(id)arg1;	// IMP=0x00000001001068bc

@end
