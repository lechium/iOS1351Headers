//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FairPlayDecryptSession : NSObject
{
    NSData *_dpInfo;	// 8 = 0x8
    void *_decryptSession;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

- (id)identifier;	// IMP=0x00000001001ea84c
- (id)decryptBytes:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001ea57c
- (void)dealloc;	// IMP=0x00000001001ea51c
- (id)initWithDPInfo:(id)arg1;	// IMP=0x00000001001ea338

@end

