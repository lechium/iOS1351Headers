//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAGAutoBrightnessManager : NSObject
{
    NSObject<OS_dispatch_queue> *_brightnessQueue;	// 8 = 0x8
    CDUnknownBlockType _cameraBrightnessUpdateBlock;	// 16 = 0x10
    double *_samples;	// 24 = 0x18
    long long _index;	// 32 = 0x20
    double _requestStartTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018bd0
- (void)_cleanup;	// IMP=0x0000000100018b94
- (double)_normalizeCameraBrightness:(double)arg1;	// IMP=0x0000000100018b7c
- (void)sampleCameraBrightnessIfNeeded:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100018364
- (void)requestCameraBrightnessUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017fe8
- (void)dealloc;	// IMP=0x0000000100017f5c
- (id)init;	// IMP=0x0000000100017ef4

@end

