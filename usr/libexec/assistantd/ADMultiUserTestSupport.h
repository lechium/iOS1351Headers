//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADMultiUserTestSupport : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_scoresBySharedID;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x0000000100215780
- (void).cxx_destruct;	// IMP=0x0000000100215b9c
- (id)getDebugVoiceIdScores;	// IMP=0x0000000100215a84
- (void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100215874
- (id)_init;	// IMP=0x000000010021580c

@end

