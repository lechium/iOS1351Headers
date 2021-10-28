//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

#import "SCATModernMenuGestureFreehandItemDelegate-Protocol.h"

@class NSString;
@protocol SCATModernMenuGestureFreehandSheetDelegate;

@interface SCATModernMenuGestureFreehandSheetBase : SCATModernMenuGesturesSheetBase <SCATModernMenuGestureFreehandItemDelegate>
{
    id <SCATModernMenuGestureFreehandSheetDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a0d30
@property(nonatomic) __weak id <SCATModernMenuGestureFreehandSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_menuItemClass;	// IMP=0x00000001000a0cf0
- (void)didChangeOrientation;	// IMP=0x00000001000a0b40
- (id)elementProvider;	// IMP=0x00000001000a097c
- (void)setMenuItems:(id)arg1;	// IMP=0x00000001000a07fc
- (void)menuItem:(id)arg1 didBecomeFocused:(_Bool)arg2;	// IMP=0x00000001000a070c
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000a036c
- (_Bool)delegatesScannerControl;	// IMP=0x00000001000a0364
- (unsigned long long)presentationMode;	// IMP=0x00000001000a035c
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00000001000a0354
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x000000010009ff3c
- (id)_titleForLocalizableString:(id)arg1 state:(_Bool)arg2;	// IMP=0x000000010009fe64
- (id)_imageNameForPrefix:(id)arg1;	// IMP=0x000000010009fda8
- (_Bool)isLandscape;	// IMP=0x000000010009fd54
- (void)pushFreehandSheetOfClass:(Class)arg1;	// IMP=0x000000010009fc6c
- (id)autoPressLiftItems;	// IMP=0x000000010009fa88
- (id)moveToolbarMenuItem;	// IMP=0x000000010009fa08
- (id)touchToggleMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x000000010009f9a4
- (id)bendMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x000000010009f8fc
- (id)rotateMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x000000010009f854
- (id)moveMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x000000010009f7ac
- (id)pathMenuItems;	// IMP=0x000000010009f6b0
- (_Bool)shouldUpdateItemsOnOrientationChange;	// IMP=0x000000010009f6a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
