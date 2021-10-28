//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIPickerView, UIView;

@interface WHASetupRoomPickerViewController : SVSBaseViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UIPickerView *_roomPickerView;	// 40 = 0x28
    UIButton *_chooseButton;	// 48 = 0x30
    _Bool _roomChosen;	// 56 = 0x38
    UIView *_progressView;	// 64 = 0x40
    UIActivityIndicatorView *_progressSpinner;	// 72 = 0x48
    UILabel *_progressLabel;	// 80 = 0x50
    long long _firstSuggestedIndex;	// 88 = 0x58
    NSArray *_rooms;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100096abc
@property(retain, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(nonatomic) long long firstSuggestedIndex; // @synthesize firstSuggestedIndex=_firstSuggestedIndex;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000001000968fc
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000001000968e4
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000001000968dc
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000100096844
- (void)handleChooseButton:(id)arg1;	// IMP=0x0000000100096608
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100096570
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000964b4

@end
