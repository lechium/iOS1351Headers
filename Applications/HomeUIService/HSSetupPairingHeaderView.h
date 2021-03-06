//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFItem, HUGridServiceCell, NSArray;

@interface HSSetupPairingHeaderView : UIView
{
    HFItem *_item;	// 8 = 0x8
    HUGridServiceCell *_serviceCell;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    NSArray *_allConstraints;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000100047478
- (void).cxx_destruct;	// IMP=0x0000000100047ce0
@property(copy, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) HUGridServiceCell *serviceCell; // @synthesize serviceCell=_serviceCell;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)updateConstraints;	// IMP=0x0000000100047480
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x0000000100047430
- (id)initWithItem:(id)arg1;	// IMP=0x0000000100047108
- (id)init;	// IMP=0x00000001000470f8

@end

