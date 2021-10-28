//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBlurEffect.h>

@class UIColor;

@interface FallbackMediaEffect : UIBlurEffect
{
    UIColor *_backgroundColorForReducedTransparency;	// 8 = 0x8
    unsigned long long _brightness;	// 16 = 0x10
}

+ (id)effectWithBrightness:(unsigned long long)arg1;	// IMP=0x0000000100004b68
- (void).cxx_destruct;	// IMP=0x0000000100005a74
@property(nonatomic) unsigned long long brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) UIColor *backgroundColorForReducedTransparency; // @synthesize backgroundColorForReducedTransparency=_backgroundColorForReducedTransparency;
- (void)applyHighLumaSettingsToSettings:(id)arg1;	// IMP=0x0000000100005580
- (void)applyMediumLumaSettingsToSettings:(id)arg1;	// IMP=0x00000001000050cc
- (void)applyLowLumaSettingsToSettings:(id)arg1;	// IMP=0x0000000100004c50
- (id)effectSettings;	// IMP=0x0000000100004bcc

@end
