//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CSBeepCancellerDelegate, OS_dispatch_queue;

@interface CSBeepCanceller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> _beepCanceller;	// 16 = 0x10
    struct vector<float, std::__1::allocator<float>> _beepFloatVec;	// 24 = 0x18
    struct vector<float, std::__1::allocator<float>> _floatBuffer;	// 48 = 0x30
    struct vector<short, std::__1::allocator<short>> _shortBuffer;	// 72 = 0x48
    unsigned long long _numTotalInputSamples;	// 96 = 0x60
    unsigned long long _numTotalOutputSamples;	// 104 = 0x68
    id <CSBeepCancellerDelegate> _delegate;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000100074c80
- (void).cxx_destruct;	// IMP=0x0000000100074c18
@property(nonatomic) __weak id <CSBeepCancellerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *metrics;
- (void)flush;	// IMP=0x00000001000747c4
- (void)reset;	// IMP=0x000000010007468c
- (void)willBeep;	// IMP=0x0000000100074570
- (void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000001000742ac
- (id)init;	// IMP=0x0000000100073b70

@end

