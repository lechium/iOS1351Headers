//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class BSMutableSettings;

@interface BKButtonHapticsClickState : NSObject <NSCopying>
{
    BSMutableSettings *_settings;	// 8 = 0x8
}

+ (void)inspectChangesFromState:(id)arg1 toState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f26c
+ (id)clickStateWithState:(unsigned long long)arg1;	// IMP=0x000000010001f234
- (void).cxx_destruct;	// IMP=0x000000010001f228
@property(retain, nonatomic) BSMutableSettings *settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) double maximumTimeInterval;
@property(nonatomic) double minimumTimeInterval;
@property(readonly, nonatomic) long long hapticClickCount;
@property(readonly, nonatomic) _Bool shouldUseHaptic;
@property(nonatomic) long long assetType;
@property(nonatomic) unsigned long long clickState;
- (id)fastConfigDictionaryForHAButtonHapticType:(long long)arg1;	// IMP=0x000000010001ed7c
- (id)normalConfigDictionaryForHAButtonHapticType:(long long)arg1;	// IMP=0x000000010001ecd0
- (id)slowConfigDictionaryForHAButtonHapticType:(long long)arg1;	// IMP=0x000000010001ec24
- (void)_applyGainForHapticType:(long long)arg1 toConfigDictionary:(id)arg2 clickSpeed:(unsigned long long)arg3;	// IMP=0x000000010001eae8
- (id)_baseConfigDictionary;	// IMP=0x000000010001e9c0
- (_Bool)_shouldUseDoublePressAssetForClickStateType:(unsigned long long)arg1;	// IMP=0x000000010001e9b0
- (_Bool)_shouldUseSplitGainForClickState:(unsigned long long)arg1;	// IMP=0x000000010001e9a4
- (_Bool)_shouldUseHapticForClickState:(unsigned long long)arg1;	// IMP=0x000000010001e980
- (_Bool)_isUpClickStateType:(unsigned long long)arg1;	// IMP=0x000000010001e960
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001e920
- (id)description;	// IMP=0x000000010001e72c
- (id)init;	// IMP=0x000000010001e6dc
- (id)_initWithSettings:(id)arg1;	// IMP=0x000000010001e624

@end

