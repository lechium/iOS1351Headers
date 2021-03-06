//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PRXCardContentViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, PRXPickerContentView;

@interface PRXPickerContentViewController : PRXCardContentViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
}

+ (Class)contentViewClass;	// IMP=0x000000010001a468
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x000000010001a3fc
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000010001a3b0
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000010001a3a8
- (void)viewDidLoad;	// IMP=0x000000010001a2b0

// Remaining properties
@property(readonly, nonatomic) PRXPickerContentView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

