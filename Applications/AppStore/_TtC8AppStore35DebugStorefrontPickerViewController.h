//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC8AppStore35DebugStorefrontPickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *countryPicker;	// 16 = 0x10
    MISSING_TYPE *languagePicker;	// 24 = 0x18
    MISSING_TYPE *submitButton;	// 32 = 0x20
    MISSING_TYPE *backToUSButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010012381c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100123884
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000010012378c
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000001001236f4
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x00000001001235ec
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000100123594
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000010012358c
- (void)setStorefrontToUS;	// IMP=0x0000000100123360
- (void)setStorefront;	// IMP=0x000000010012331c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001001232f0
- (void)viewDidLoad;	// IMP=0x0000000100122c68
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001225f0

@end

