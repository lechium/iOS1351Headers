//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudArtworkImporter.h"

@interface JaliscoArtworkImporter : CloudArtworkImporter
{
}

- (void)_importOriginalScreenshots;	// IMP=0x0000000100029cd0
- (void)_importOriginalItemArtwork;	// IMP=0x000000010002989c
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000295d8
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000292ac
- (void)importAllItemArtworkAndScreenshots;	// IMP=0x0000000100029278
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000100029240

@end
