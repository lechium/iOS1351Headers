//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface GKQuickAction : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
    NSString *_type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_imageURLDictionary;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    NSString *_titleText;	// 48 = 0x30
    NSString *_subText;	// 56 = 0x38
    NSDate *_date;	// 64 = 0x40
    NSString *_gameBundleID;	// 72 = 0x48
    NSString *_launchURL;	// 80 = 0x50
    NSData *_imageData;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010009cb4c
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(retain) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *subText; // @synthesize subText=_subText;
@property(retain) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain) NSDictionary *imageURLDictionary; // @synthesize imageURLDictionary=_imageURLDictionary;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *type; // @synthesize type=_type;
- (id)shortcutItem;	// IMP=0x000000010009de84
- (void)processAction;	// IMP=0x000000010009d9b0
- (void)loadImageDataForDesiredSize:(long long)arg1 scale:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009d8a0
- (id)description;	// IMP=0x000000010009d7c8
- (void)dealloc;	// IMP=0x000000010009d730
- (id)initWithSBSApplicationShortcutItem:(id)arg1;	// IMP=0x000000010009d570
- (id)initWithInvite:(id)arg1;	// IMP=0x000000010009d444
- (id)initWithMatch:(id)arg1;	// IMP=0x000000010009d130
- (id)initWithChallenge:(id)arg1;	// IMP=0x000000010009d090
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009cf70
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010009ce54
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010009cb54

@end
