//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCCDProcess;

@interface TCCDAttributionChain : NSObject
{
    _Bool _accessingProcessSpecified;	// 8 = 0x8
    _Bool _accessingProcessIsValid;	// 9 = 0x9
    _Bool _responsibleProcessIsValid;	// 10 = 0xa
    TCCDProcess *_accessingProcess;	// 16 = 0x10
    TCCDProcess *_responsibleProcess;	// 24 = 0x18
    TCCDProcess *_requestingProcess;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003916c
@property(readonly) _Bool responsibleProcessIsValid; // @synthesize responsibleProcessIsValid=_responsibleProcessIsValid;
@property _Bool accessingProcessIsValid; // @synthesize accessingProcessIsValid=_accessingProcessIsValid;
@property _Bool accessingProcessSpecified; // @synthesize accessingProcessSpecified=_accessingProcessSpecified;
@property(retain) TCCDProcess *requestingProcess; // @synthesize requestingProcess=_requestingProcess;
@property(readonly) TCCDProcess *responsibleProcess; // @synthesize responsibleProcess=_responsibleProcess;
@property(readonly) TCCDProcess *accessingProcess; // @synthesize accessingProcess=_accessingProcess;
- (id)description;	// IMP=0x0000000100038ea4
- (id)initWithMessage:(id)arg1;	// IMP=0x00000001000389a0

@end
