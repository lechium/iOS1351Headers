//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface BYLanguageLocaleCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    double _minimumHeight;	// 16 = 0x10
    UIView *_heightView;	// 24 = 0x18
    NSLayoutConstraint *_heightConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100012eb0
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIView *heightView; // @synthesize heightView=_heightView;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100012684

@end

