//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILongPressGestureRecognizer, WebBookmark;
@protocol BookmarksBarLabelButtonDelegate;

@interface BookmarksBarLabelButton : UIButton
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 8 = 0x8
    _Bool _usesLightControls;	// 16 = 0x10
    WebBookmark *_bookmark;	// 24 = 0x18
    id <BookmarksBarLabelButtonDelegate> _delegate;	// 32 = 0x20
    struct UIEdgeInsets _cursorRegionInset;	// 40 = 0x28
}

+ (id)labelButton;	// IMP=0x00000001000233f4
- (void).cxx_destruct;	// IMP=0x0000000100023fb4
@property(nonatomic) struct UIEdgeInsets cursorRegionInset; // @synthesize cursorRegionInset=_cursorRegionInset;
@property(nonatomic) __weak id <BookmarksBarLabelButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usesLightControls; // @synthesize usesLightControls=_usesLightControls;
@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000100023ee0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100023eac
- (struct CGRect)_bookmarksBarLabelButtonHitRect;	// IMP=0x0000000100023e14
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000100023cd8
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000100023c98
- (void)_openInNewTabs:(id)arg1;	// IMP=0x0000000100023a88
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100023a80
- (void)_handleLongPressGestureRecognizer:(id)arg1;	// IMP=0x00000001000237f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100023494

@end

