//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class HSSetupCodeFieldItem, NSArray, NSString, UIStackView, UITextField;
@protocol HSSetupCodeFieldDelegate;

@interface HSSetupCodeField : UIView <UITextFieldDelegate>
{
    id <HSSetupCodeFieldDelegate> _delegate;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    HSSetupCodeFieldItem *_activeItem;	// 24 = 0x18
    double _itemSpacing;	// 32 = 0x20
    UITextField *_hiddenInputField;	// 40 = 0x28
    UIStackView *_codeFieldItemsView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100044d2c
@property(retain, nonatomic) UIStackView *codeFieldItemsView; // @synthesize codeFieldItemsView=_codeFieldItemsView;
@property(retain, nonatomic) UITextField *hiddenInputField; // @synthesize hiddenInputField=_hiddenInputField;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) __weak HSSetupCodeFieldItem *activeItem; // @synthesize activeItem=_activeItem;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <HSSetupCodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateInterfaceForCurrentTraitCollection;	// IMP=0x0000000100044bc0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100044b70
- (void)_activateLast;	// IMP=0x000000010004487c
- (void)_activateNext;	// IMP=0x00000001000445cc
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000001000444e0
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000100044360
- (void)_setupCodeFieldItems;	// IMP=0x0000000100043f24
- (void)fieldTapped:(id)arg1;	// IMP=0x0000000100043eb0
- (void)hideKeypad;	// IMP=0x0000000100043e70
- (void)showKeypad;	// IMP=0x0000000100043e30
- (void)clear;	// IMP=0x0000000100043c28
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) NSString *setupCode;
- (id)init;	// IMP=0x0000000100043694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

