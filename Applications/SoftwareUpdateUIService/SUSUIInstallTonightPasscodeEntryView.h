//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SUSUIPasscodeEntryView.h"

@class SUAutoInstallOperation;

@interface SUSUIInstallTonightPasscodeEntryView : SUSUIPasscodeEntryView
{
    SUAutoInstallOperation *_installOperation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000062b0
- (id)_bodyTextToModelSpecificLocalizedKey:(id)arg1;	// IMP=0x0000000100006184
- (void)updateStatusText;	// IMP=0x0000000100005f64
- (id)createPasscodeView;	// IMP=0x0000000100005f50
- (void)setInstallTonightOperation:(id)arg1;	// IMP=0x0000000100005ee4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100005e8c

@end
