//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKDPlugInSignature : NSObject
{
    NSData *_cdhash;	// 8 = 0x8
    NSString *_requirement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001e2c8
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001e144

@end

