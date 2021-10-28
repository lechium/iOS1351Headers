//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATPointPickerView.h"

#import "SCATGridDelegate-Protocol.h"

@class NSIndexPath, NSString, SCATGridView;

@interface SCATGridPointPickerView : SCATPointPickerView <SCATGridDelegate>
{
    SCATGridView *_grid;	// 8 = 0x8
    NSIndexPath *_currentSelectionPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100068c88
@property(retain, nonatomic) NSIndexPath *currentSelectionPath; // @synthesize currentSelectionPath=_currentSelectionPath;
- (id)centerPointImageForGrid:(id)arg1;	// IMP=0x0000000100068bcc
- (void)layoutSubviews;	// IMP=0x0000000100068b3c
- (void)_updateGridProperties;	// IMP=0x0000000100068914
- (struct CGRect)_availableFrameForCenterPointAtSelectionPath:(id)arg1;	// IMP=0x0000000100068790
- (struct CGPath *)pathForCenterPointAtSelectionPath:(id)arg1;	// IMP=0x00000001000686cc
- (struct CGRect)frameForCenterPointAtSelectionPath:(id)arg1;	// IMP=0x00000001000685f0
- (struct CGRect)frameForSelectionPath:(id)arg1;	// IMP=0x00000001000684ac
@property(nonatomic, getter=isCenterPointVisible) _Bool centerPointVisible;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100068274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
