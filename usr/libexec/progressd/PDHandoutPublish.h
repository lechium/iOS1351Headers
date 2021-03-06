//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDAbstractClassZoneOperation.h"

@class NSArray;

@interface PDHandoutPublish : PDAbstractClassZoneOperation
{
    NSArray *_handoutGraph;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010010fde8
@property(readonly, nonatomic) NSArray *handoutGraph; // @synthesize handoutGraph=_handoutGraph;
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x000000010010fdd0
- (id)requestData;	// IMP=0x000000010010f728
- (Class)expectedResponseClass;	// IMP=0x000000010010f71c
- (id)acceptContentType;	// IMP=0x000000010010f70c
- (id)requestContentType;	// IMP=0x000000010010f6fc
- (id)endpointIdentifier;	// IMP=0x000000010010f6f0
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x000000010010f6cc
- (id)logSubsystem;	// IMP=0x000000010010f6bc
- (id)initWithDatabase:(id)arg1 handoutGraph:(id)arg2;	// IMP=0x000000010010f610

@end

