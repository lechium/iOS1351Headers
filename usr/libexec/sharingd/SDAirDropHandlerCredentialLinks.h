//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class SFSharablePassword;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerCredentialLinks : SDAirDropHandler
{
    SFSharablePassword *_credential;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010012d5bc
- (id)credential;	// IMP=0x000000010012d340
- (void)updatePossibleActions;	// IMP=0x000000010012d0a8
- (long long)transferTypes;	// IMP=0x000000010012d070
- (id)suitableContentsDescription;	// IMP=0x000000010012cd7c
- (void)handleAction;	// IMP=0x000000010012cbfc
- (_Bool)canHandleTransfer;	// IMP=0x000000010012c914

@end

