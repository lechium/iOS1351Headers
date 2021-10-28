//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class SCATModernMenuItem;

@interface SCATModernMenuEditingSheet : SCATModernMenuSheet
{
    _Bool _selectionModeOn;	// 16 = 0x10
    SCATModernMenuItem *_selectionModeToggleItem;	// 24 = 0x18
    SCATModernMenuItem *_selectWordOrNoneItem;	// 32 = 0x20
    struct _NSRange _startingRangeForSelection;	// 40 = 0x28
}

+ (_Bool)isValidForElement:(id)arg1;	// IMP=0x0000000100092328
- (void).cxx_destruct;	// IMP=0x00000001000937a8
@property(retain, nonatomic) SCATModernMenuItem *selectWordOrNoneItem; // @synthesize selectWordOrNoneItem=_selectWordOrNoneItem;
@property(retain, nonatomic) SCATModernMenuItem *selectionModeToggleItem; // @synthesize selectionModeToggleItem=_selectionModeToggleItem;
@property(nonatomic) struct _NSRange startingRangeForSelection; // @synthesize startingRangeForSelection=_startingRangeForSelection;
@property(nonatomic) _Bool selectionModeOn; // @synthesize selectionModeOn=_selectionModeOn;
- (id)_identifierForTextMovementDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2;	// IMP=0x00000001000936e0
- (void)_handleCompletedCutCopyPasteOperationForTextElement:(id)arg1;	// IMP=0x0000000100093668
- (void)_selectWordForTextElement:(id)arg1;	// IMP=0x000000010009359c
- (void)_selectNoneForTextElement:(id)arg1;	// IMP=0x0000000100093510
- (void)_moveCursorForTextElement:(id)arg1 direction:(unsigned long long)arg2 unit:(unsigned long long)arg3;	// IMP=0x00000001000933ac
- (_Bool)_adjustSelectionForTextElement:(id)arg1 direction:(unsigned long long)arg2 unit:(unsigned long long)arg3 selectedRange:(struct _NSRange)arg4 startingRangeForSelection:(struct _NSRange)arg5;	// IMP=0x0000000100093260
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x0000000100092e54
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x0000000100092cb8
- (id)alternateTipElement;	// IMP=0x0000000100092c64
- (long long)preferredTipObject;	// IMP=0x0000000100092c5c
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000923b0
- (_Bool)shouldIncludeBackItem;	// IMP=0x00000001000923a8
- (id)initWithMenu:(id)arg1;	// IMP=0x0000000100092330

@end
