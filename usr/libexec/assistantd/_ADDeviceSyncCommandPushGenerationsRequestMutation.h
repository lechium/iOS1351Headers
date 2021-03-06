//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncCommandPushGenerationsRequestMutating-Protocol.h"

@class ADDeviceSyncCommandPushGenerationsRequest, NSDictionary, NSString;

@interface _ADDeviceSyncCommandPushGenerationsRequestMutation : NSObject <ADDeviceSyncCommandPushGenerationsRequestMutating>
{
    ADDeviceSyncCommandPushGenerationsRequest *_baseModel;	// 8 = 0x8
    NSDictionary *_generationsByDataType;	// 16 = 0x10
    _mutationFlags_ba3f8b0e _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005d3e4
- (id)generate;	// IMP=0x000000010005d330
- (void)setGenerationsByDataType:(id)arg1;	// IMP=0x000000010005d2fc
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000010005d284
- (id)init;	// IMP=0x000000010005d274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

