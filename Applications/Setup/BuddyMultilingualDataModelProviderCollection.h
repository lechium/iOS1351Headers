//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BuddyMultilingualProvider;

@interface BuddyMultilingualDataModelProviderCollection : NSObject
{
    _Bool _expressFlowDidCustomize;	// 8 = 0x8
    _Bool _shouldShowExpress;	// 9 = 0x9
    id <BuddyMultilingualProvider> _languageProvider;	// 16 = 0x10
    id <BuddyMultilingualProvider> _keyboardProvider;	// 24 = 0x18
    id <BuddyMultilingualProvider> _dictationProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000fbb34
@property(nonatomic) _Bool shouldShowExpress; // @synthesize shouldShowExpress=_shouldShowExpress;
@property(nonatomic) _Bool expressFlowDidCustomize; // @synthesize expressFlowDidCustomize=_expressFlowDidCustomize;
@property(retain, nonatomic) id <BuddyMultilingualProvider> dictationProvider; // @synthesize dictationProvider=_dictationProvider;
@property(retain, nonatomic) id <BuddyMultilingualProvider> keyboardProvider; // @synthesize keyboardProvider=_keyboardProvider;
@property(retain, nonatomic) id <BuddyMultilingualProvider> languageProvider; // @synthesize languageProvider=_languageProvider;
- (id)initWithLanguageProvider:(id)arg1 withKeyboardProvider:(id)arg2 withDictationProvider:(id)arg3;	// IMP=0x00000001000fba04

@end

