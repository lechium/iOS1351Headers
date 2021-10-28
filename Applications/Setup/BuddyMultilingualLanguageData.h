//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyMultilingualDisplayableViewModel-Protocol.h"

@class NSString;

@interface BuddyMultilingualLanguageData : NSObject <BuddyMultilingualDisplayableViewModel>
{
    _Bool _isDefault;	// 8 = 0x8
    _Bool _showDetailText;	// 9 = 0x9
    NSString *_displayText;	// 16 = 0x10
    NSString *_secondaryDisplayText;	// 24 = 0x18
    NSString *__identifier;	// 32 = 0x20
    unsigned long long _editingOptions;	// 40 = 0x28
}

+ (id)languageShortFormat:(id)arg1;	// IMP=0x000000010006dbc4
+ (id)withLanguage:(id)arg1 defaults:(id)arg2 editingOption:(unsigned long long)arg3;	// IMP=0x000000010006d978
+ (id)withLanguage:(id)arg1 isDefault:(_Bool)arg2 editingOption:(unsigned long long)arg3;	// IMP=0x000000010006d924
+ (id)withLanguageMainDisplayText:(id)arg1 secondaryDisplayText:(id)arg2 identifier:(id)arg3 isDefault:(_Bool)arg4 editingOption:(unsigned long long)arg5;	// IMP=0x000000010006d7e0
- (void).cxx_destruct;	// IMP=0x000000010006dfac
@property(nonatomic) unsigned long long editingOptions; // @synthesize editingOptions=_editingOptions;
@property(copy, nonatomic) NSString *_identifier; // @synthesize _identifier=__identifier;
@property(nonatomic) _Bool showDetailText; // @synthesize showDetailText=_showDetailText;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSString *secondaryDisplayText; // @synthesize secondaryDisplayText=_secondaryDisplayText;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)detailText;	// IMP=0x000000010006ded8
- (id)title;	// IMP=0x000000010006decc
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006dc54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
