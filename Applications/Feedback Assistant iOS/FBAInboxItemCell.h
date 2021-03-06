//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface FBAInboxItemCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_areaLabel;	// 16 = 0x10
    UILabel *_contentInfoLabel;	// 24 = 0x18
    UILabel *_dateLabel;	// 32 = 0x20
    UIImageView *_unreadImageView;	// 40 = 0x28
    UIImageView *_fauxAccessoryView;	// 48 = 0x30
    UILabel *_closedLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100051e10
@property(nonatomic) __weak UILabel *closedLabel; // @synthesize closedLabel=_closedLabel;
@property(nonatomic) __weak UIImageView *fauxAccessoryView; // @synthesize fauxAccessoryView=_fauxAccessoryView;
@property(nonatomic) __weak UIImageView *unreadImageView; // @synthesize unreadImageView=_unreadImageView;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *contentInfoLabel; // @synthesize contentInfoLabel=_contentInfoLabel;
@property(nonatomic) __weak UILabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithItem:(id)arg1;	// IMP=0x00000001000517fc
- (void)awakeFromNib;	// IMP=0x00000001000516c0

@end

