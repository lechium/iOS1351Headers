//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIStackView;

@interface BuddyAppleIDTableCell : UITableViewCell
{
    unsigned long long _columnCount;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIStackView *_rowStackView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100064d50
@property(retain) UIStackView *rowStackView; // @synthesize rowStackView=_rowStackView;
@property(retain) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (id)addService:(id)arg1 description:(id)arg2;	// IMP=0x0000000100064a0c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 columnCount:(unsigned long long)arg3;	// IMP=0x00000001000644d4

@end

