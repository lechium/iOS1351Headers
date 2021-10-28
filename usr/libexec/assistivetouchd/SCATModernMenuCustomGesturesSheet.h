//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@class NSMutableArray;
@protocol SCATMenuCustomGestureItemsViewDelegate;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase
{
    NSMutableArray *_gestures;	// 16 = 0x10
    int _type;	// 24 = 0x18
    id <SCATMenuCustomGestureItemsViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a2428
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <SCATMenuCustomGestureItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_loadGestures;	// IMP=0x00000001000a21dc
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000a1fe0
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x00000001000a1a10
- (id)backTitle;	// IMP=0x00000001000a1a04
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000a15c0
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a1530
- (id)initWithType:(int)arg1 menu:(id)arg2;	// IMP=0x00000001000a14dc

@end
