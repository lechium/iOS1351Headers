//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFNavigationBar.h>

@class UnifiedField;

@interface NavigationBar : _SFNavigationBar
{
}

- (id)newTextField;	// IMP=0x000000010000ce68
@property(readonly, nonatomic) UnifiedField *textField;
- (void)setTextFieldPlaceHolderColor:(id)arg1;	// IMP=0x000000010000cdc8
- (double)placeholderHorizontalInset;	// IMP=0x000000010000cd74
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;	// IMP=0x000000010000ccc0

@end
