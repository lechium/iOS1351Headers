//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXMTVideoCapturer;

@protocol AXMTVideoCapturerDelegate <NSObject>
- (void)videoCapturerDidDropFrame:(AXMTVideoCapturer *)arg1;
- (void)videoCapturer:(AXMTVideoCapturer *)arg1 didCaptureSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end
