//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

@class SAUIButton, SRBigButtonView;

@interface SRBigButtonController : SiriUISnippetViewController
{
    SRBigButtonView *_buttonView;	// 8 = 0x8
    SAUIButton *_buttonObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100029be8
- (void)_bigButtonHit:(id)arg1;	// IMP=0x0000000100029b64
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100029b00
- (void)loadView;	// IMP=0x0000000100029874
- (_Bool)usePlatterStyle;	// IMP=0x000000010002986c
- (struct UIEdgeInsets)defaultViewInsets;	// IMP=0x0000000100029858
- (id)snippet;	// IMP=0x0000000100029850
- (void)setAceObject:(id)arg1;	// IMP=0x00000001000297ec
- (void)dealloc;	// IMP=0x0000000100029764

@end
