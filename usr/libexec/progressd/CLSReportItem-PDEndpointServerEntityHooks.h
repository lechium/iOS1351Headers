//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSReportItem.h>

#import "PDEndpointServerEntityHooks-Protocol.h"

@class NSString;

@interface CLSReportItem (PDEndpointServerEntityHooks) <PDEndpointServerEntityHooks>
+ (void)endpointServer:(id)arg1 willQueryForObjectWithPredicate:(id)arg2;	// IMP=0x00000001000e3e84
- (_Bool)willBeProcessedByEndpointServer:(id)arg1;	// IMP=0x00000001000e3e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

