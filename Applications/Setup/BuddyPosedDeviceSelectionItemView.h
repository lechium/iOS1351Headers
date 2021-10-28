//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BuddyPosedDeviceSelectionItemAccessoryView;

@interface BuddyPosedDeviceSelectionItemView : UIView
{
    UIView *_contentContainer;	// 8 = 0x8
    BuddyPosedDeviceSelectionItemAccessoryView *_accessoryView;	// 16 = 0x10
}

+ (id)_createContainerSize:(struct CGRect)arg1 withOverlayImage:(struct CGSize)arg2;	// IMP=0x000000010001abd8
- (void).cxx_destruct;	// IMP=0x000000010001ae1c
@property(retain, nonatomic) BuddyPosedDeviceSelectionItemAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
- (id)title;	// IMP=0x000000010001ad58
@property(nonatomic) _Bool selected;
- (id)initWithContentImage:(id)arg1 selectionSegment:(long long)arg2 accessoryView:(id)arg3;	// IMP=0x000000010001aa0c
- (id)initWithContentView:(id)arg1 selectionSegment:(long long)arg2 accessoryView:(id)arg3;	// IMP=0x000000010001a4a8

@end
