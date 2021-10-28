//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCSActionPrivate-Protocol.h"

@class LSAppLink, LSApplicationProxy, NSArray, NSDictionary, NSString, NSURL;
@protocol BCSAction, BCSActionDelegate;

@interface BCSShadowAction : NSObject <BCSActionPrivate>
{
    LSApplicationProxy *_applicationProxy;	// 8 = 0x8
    _Bool isInvalidDataAction;	// 16 = 0x10
    _Bool isWiFiAction;	// 17 = 0x11
    id <BCSActionDelegate> delegate;	// 24 = 0x18
    NSString *extraPreviewText;	// 32 = 0x20
    NSString *localizedActionDescription;	// 40 = 0x28
    NSArray *appLinks;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    LSAppLink *_appLink;	// 64 = 0x40
    id <BCSAction> _originalAction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000042a0
@property(readonly, nonatomic) id <BCSAction> originalAction; // @synthesize originalAction=_originalAction;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSArray *appLinks; // @synthesize appLinks;
@property(readonly, nonatomic) _Bool isWiFiAction; // @synthesize isWiFiAction;
@property(readonly, nonatomic) _Bool isInvalidDataAction; // @synthesize isInvalidDataAction;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription; // @synthesize localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText;
@property(nonatomic) __weak id <BCSActionDelegate> delegate; // @synthesize delegate;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
- (void)showActionPicker;	// IMP=0x000000010000420c
- (void)performDefaultAction;	// IMP=0x0000000100004208
- (void)performAction;	// IMP=0x00000001000041a8
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened;
- (id)initWithURL:(id)arg1 appLink:(id)arg2 originalAction:(id)arg3;	// IMP=0x0000000100003eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
