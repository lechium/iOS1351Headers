//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RPCloudMessageContext;

@interface RPBufferedCloudMessage : NSObject
{
    unsigned char _frameType;	// 8 = 0x8
    NSDictionary *_message;	// 16 = 0x10
    RPCloudMessageContext *_msgCtx;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003cfdc
@property(retain, nonatomic) RPCloudMessageContext *msgCtx; // @synthesize msgCtx=_msgCtx;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(nonatomic) unsigned char frameType; // @synthesize frameType=_frameType;

@end

