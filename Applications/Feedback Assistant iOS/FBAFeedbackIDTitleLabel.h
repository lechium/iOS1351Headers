//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

@class FBAContentItem;

@interface FBAFeedbackIDTitleLabel : UILabel
{
    UILabel *_idLabel;	// 8 = 0x8
    FBAContentItem *_representedItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000d1874
@property(retain, nonatomic) FBAContentItem *representedItem; // @synthesize representedItem=_representedItem;
@property(nonatomic) __weak UILabel *idLabel; // @synthesize idLabel=_idLabel;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000001000d1784
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000d1734
- (void)copyFeedbackIDAndTitle:(id)arg1;	// IMP=0x00000001000d1684
- (void)copyFeedbackID:(id)arg1;	// IMP=0x00000001000d15d4
- (void)showCopyMenu:(id)arg1;	// IMP=0x00000001000d1378
- (id)initWithContentItem:(id)arg1;	// IMP=0x00000001000d11e4

@end
