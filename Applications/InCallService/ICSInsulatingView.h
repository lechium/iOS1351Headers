//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface ICSInsulatingView : UIView
{
    _Bool _forwardsHits;	// 8 = 0x8
    UIView *_insulatedView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000680a4
@property(nonatomic) _Bool forwardsHits; // @synthesize forwardsHits=_forwardsHits;
@property(readonly, nonatomic) UIView *insulatedView; // @synthesize insulatedView=_insulatedView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100067fb8
- (id)initWithFrame:(struct CGRect)arg1 insulatedView:(id)arg2;	// IMP=0x0000000100067e44

@end

