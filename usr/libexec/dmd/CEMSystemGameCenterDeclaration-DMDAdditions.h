//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMSystemGameCenterDeclaration.h>

#import "DMDRequestProvidingConfiguration-Protocol.h"

@class NSString;

@interface CEMSystemGameCenterDeclaration (DMDAdditions) <DMDRequestProvidingConfiguration>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x000000010000ad84
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ad74
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ad68
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000acf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
