//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

@interface InstallDocumentDownloadOperation : FinishDownloadStepOperation
{
    _Bool _isSharedMDMDownload;	// 91 = 0x5b
    _Bool _isSharedODRDownload;	// 92 = 0x5c
}

- (id)_sharedContainerPath:(id)arg1;	// IMP=0x00000001001abde8
- (id)_sharedContainerPath;	// IMP=0x00000001001abd80
- (id)_sharedAssetStagingPath:(id)arg1;	// IMP=0x00000001001ab9a0
- (_Bool)_moveSharedAssetFromPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001ab414
- (void)run;	// IMP=0x00000001001a9ab0

@end
