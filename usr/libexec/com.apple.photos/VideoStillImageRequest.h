//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VideoConversionRequest.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface VideoStillImageRequest : VideoConversionRequest
{
    NSData *_imageData;	// 144 = 0x90
}

+ (id)conversionQueueWithPriorityExtension:(id)arg1;	// IMP=0x000000010001a1ac
- (void).cxx_destruct;	// IMP=0x000000010001a198
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
- (void)storeImage;	// IMP=0x0000000100019ea4
- (double)posterFrameScaleFactorForCGImage:(struct CGImage *)arg1;	// IMP=0x0000000100019cbc
- (void)extractStillImage;	// IMP=0x0000000100019210
- (void)performConversion;	// IMP=0x0000000100019190

@end

