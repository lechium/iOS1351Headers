//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VOTElement;
@protocol VOTRotorDelegate;

@interface VOTRotor : NSObject
{
    NSString *_typeKey;	// 8 = 0x8
    struct __CFArray *_currentRotors;	// 16 = 0x10
    long long _currentRotorType;	// 24 = 0x18
    long long _currentSelectionRotorType;	// 32 = 0x20
    NSArray *_customRotorActionCategories;	// 40 = 0x28
    long long _publicCustomRotorIndex;	// 48 = 0x30
    NSMutableArray *_customPublicRotors;	// 56 = 0x38
    long long _customRotorIndex;	// 64 = 0x40
    VOTElement *_currentRotorElement;	// 72 = 0x48
    id <VOTRotorDelegate> _delegate;	// 80 = 0x50
    long long _customActionIndex;	// 88 = 0x58
}

+ (_Bool)rotorIsUsedForSettingAdjustment:(long long)arg1;	// IMP=0x00000001000f8138
+ (id)stringForRotorType:(long long)arg1;	// IMP=0x00000001000f7830
+ (id)rotorTypeForPreferenceString:(id)arg1;	// IMP=0x00000001000f6eb0
+ (long long)rotorTypeForSystemRotorType:(id)arg1;	// IMP=0x00000001000f6a9c
+ (long long)rotorTypeForSearchType:(long long)arg1;	// IMP=0x00000001000f6a3c
+ (id)systemRotorTypeForRotorType:(long long)arg1;	// IMP=0x00000001000f6900
+ (id)systemRotorTypeForSearchType:(long long)arg1;	// IMP=0x00000001000f6754
- (void).cxx_destruct;	// IMP=0x00000001000f81cc
@property(nonatomic) long long customActionIndex; // @synthesize customActionIndex=_customActionIndex;
@property(readonly, nonatomic) long long publicCustomRotorIndex; // @synthesize publicCustomRotorIndex=_publicCustomRotorIndex;
@property(nonatomic) __weak id <VOTRotorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VOTElement *currentRotorElement; // @synthesize currentRotorElement=_currentRotorElement;
@property(readonly, nonatomic) long long customRotorIndex; // @synthesize customRotorIndex=_customRotorIndex;
- (void)setRotorItems:(id)arg1;	// IMP=0x00000001000f80a4
- (id)rotorItems;	// IMP=0x00000001000f801c
- (id)currentRotorString;	// IMP=0x00000001000f7fa8
- (id)currentRotorHint;	// IMP=0x00000001000f7f44
- (_Bool)inMisspelledWordRotor;	// IMP=0x00000001000f7d94
- (id)_currentCustomRotorString;	// IMP=0x00000001000f7c20
- (long long)indexOfRotorItem:(long long)arg1;	// IMP=0x00000001000f6e44
- (void)clearRotorTypes;	// IMP=0x00000001000f6e3c
- (_Bool)verifyNoDuplicatesInRotor;	// IMP=0x00000001000f6da4
- (id)currentVisualRotorString;	// IMP=0x00000001000f6d30
- (void)decrement:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x00000001000f6738
- (void)increment:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x00000001000f671c
- (void)_moveRotor:(_Bool)arg1 didWrap:(_Bool *)arg2 userInitiated:(_Bool)arg3 eventOrigin:(long long)arg4;	// IMP=0x00000001000f6438
- (id)customPublicRotors;	// IMP=0x00000001000f6430
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x00000001000f6424
@property(readonly, nonatomic) long long currentRotorType; // @synthesize currentRotorType=_currentRotorType;
@property(readonly, nonatomic) long long currentSelectionRotorType; // @dynamic currentSelectionRotorType;
- (void)setCurrentRotorType:(long long)arg1 saveToPreferences:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00000001000f60a8
- (void)speakRotorType;	// IMP=0x00000001000f5f04
@property(readonly, nonatomic) long long rotorIndex; // @dynamic rotorIndex;
@property(readonly, nonatomic) long long rotorCount; // @dynamic rotorCount;
- (void)dealloc;	// IMP=0x00000001000f5e64
- (id)init;	// IMP=0x00000001000f5ddc

@end

