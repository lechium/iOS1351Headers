//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VideoTranscodingRequest.h"

@class PFSinglePassVideoExportItem;

__attribute__((visibility("hidden")))
@interface SinglePassVideoTranscodingRequest : VideoTranscodingRequest
{
    PFSinglePassVideoExportItem *_singlePassExportItem;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100018694
@property(retain) PFSinglePassVideoExportItem *singlePassExportItem; // @synthesize singlePassExportItem=_singlePassExportItem;
- (void)cancelTranscode;	// IMP=0x00000001000184cc
- (float)currentProgress;	// IMP=0x000000010001833c
- (_Bool)hasProgress;	// IMP=0x0000000100018300
- (void)performExport;	// IMP=0x0000000100017c30

@end
