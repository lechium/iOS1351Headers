//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BKHIDEventRecognizerEngine : NSObject
{
    long long _runtimePhase;	// 8 = 0x8
    NSMutableArray *_recognizers;	// 16 = 0x10
    NSMutableArray *_blocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100079d80
@property(retain, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSMutableArray *recognizers; // @synthesize recognizers=_recognizers;
@property(nonatomic) long long runtimePhase; // @synthesize runtimePhase=_runtimePhase;
- (long long)processEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100079bc8
- (void)removeRecognizer:(id)arg1;	// IMP=0x0000000100079b6c
- (void)addRecognizer:(id)arg1 recognitionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010007993c
- (id)init;	// IMP=0x0000000100079900

@end
