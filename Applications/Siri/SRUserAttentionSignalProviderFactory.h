//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRUserAttentionSignalProviderFactory : NSObject
{
    double _samplingInterval;	// 8 = 0x8
    double _attentionLossTimeout;	// 16 = 0x10
    unsigned long long _supportedAttentionAwarenessEvents;	// 24 = 0x18
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;	// IMP=0x0000000100005e58
- (unsigned long long)_touchAttentionAwarenessEventMask;	// IMP=0x0000000100005e48
- (unsigned long long)_faceAttentionAwarenessEventMask;	// IMP=0x0000000100005e38
- (id)wakeGestureManager;	// IMP=0x0000000100005e24
- (id)touchAttentionAwarenessClient;	// IMP=0x0000000100005d7c
- (id)faceAttentionAwarenessClient;	// IMP=0x0000000100005cdc
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3;	// IMP=0x0000000100005c80

@end
