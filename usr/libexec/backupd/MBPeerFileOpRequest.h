//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBPeerMessagable-Protocol.h"

@class NSDictionary, NSString;

@interface MBPeerFileOpRequest : NSObject <MBPeerMessagable>
{
    NSDictionary *_relativePaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100145e0c
@property(retain, nonatomic) NSDictionary *relativePaths; // @synthesize relativePaths=_relativePaths;
- (id)dictionaryRepresentation;	// IMP=0x0000000100145d4c
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100145c4c
- (id)init;	// IMP=0x0000000100145bf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

