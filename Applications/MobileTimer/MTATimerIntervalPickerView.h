//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, UILabel, UIPickerView;
@protocol MTATimerIntervalPickerViewDelegate;

@interface MTATimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_timePicker;	// 8 = 0x8
    UILabel *_hoursLabel;	// 16 = 0x10
    UILabel *_minutesLabel;	// 24 = 0x18
    UILabel *_secondsLabel;	// 32 = 0x20
    id <MTATimerIntervalPickerViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006a20c
@property(nonatomic) __weak id <MTATimerIntervalPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_secondsStringForSeconds:(long long)arg1;	// IMP=0x000000010006a110
- (id)_minutesStringForMinutes:(long long)arg1;	// IMP=0x000000010006a048
- (id)_hoursStringForHour:(long long)arg1;	// IMP=0x0000000100069f80
- (double)selectedDuration;	// IMP=0x0000000100069ef0
- (void)setDuration:(double)arg1;	// IMP=0x0000000100069df4
- (_Bool)isSelectedDurationValid;	// IMP=0x0000000100069d70
- (void)_fadeLabelForComponent:(long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100069a64
- (void)_positionLabel:(id)arg1 forComponent:(long long)arg2;	// IMP=0x00000001000697e4
- (void)_setLabel:(id)arg1 forComponent:(long long)arg2;	// IMP=0x0000000100069784
- (id)_labelForComponent:(long long)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x0000000100069648
- (id)_makeNewComponentLabel;	// IMP=0x000000010006955c
- (void)_updateLabels:(_Bool)arg1;	// IMP=0x000000010006941c
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x0000000100069410
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x00000001000693d4
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000001000692e4
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x0000000100068ff0
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000100068fd0
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000100068fc8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100068ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
