//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHBottomBarButton.h"

@class PHBottomBarButtonConfiguration;

@interface PHBottomBarMuteButton : PHBottomBarButton
{
    PHBottomBarButtonConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006891c
@property(retain, nonatomic) PHBottomBarButtonConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateIcon;	// IMP=0x0000000100068858
- (void)updateButtonColor;	// IMP=0x000000010006877c
- (void)updateButtonAnimated:(_Bool)arg1;	// IMP=0x00000001000686cc
- (void)_performSetEnabled:(_Bool)arg1;	// IMP=0x00000001000686bc
- (void)_performSetHighlighted:(_Bool)arg1;	// IMP=0x00000001000686ac
- (void)_performSetSelected:(_Bool)arg1;	// IMP=0x000000010006869c
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000100068604

@end
