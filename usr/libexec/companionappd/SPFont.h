//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSKeyedUnarchiverDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, UIFont;

@interface SPFont : NSObject <NSSecureCoding, NSKeyedUnarchiverDelegate>
{
    UIFont *_font;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002d0dc
- (void).cxx_destruct;	// IMP=0x000000010002d3bc
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002d298
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;	// IMP=0x000000010002d1e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002d150
- (id)initWithFont:(id)arg1;	// IMP=0x000000010002d0e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

