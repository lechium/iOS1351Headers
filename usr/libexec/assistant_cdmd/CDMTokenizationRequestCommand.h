//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMBaseCommand.h"

@class NSString;

@interface CDMTokenizationRequestCommand : CDMBaseCommand
{
    NSString *_text;	// 8 = 0x8
    NSString *_locale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002a5a0
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)commandName;	// IMP=0x000000010002a54c
- (id)initWithText:(id)arg1 locale:(id)arg2;	// IMP=0x000000010002a498

@end
