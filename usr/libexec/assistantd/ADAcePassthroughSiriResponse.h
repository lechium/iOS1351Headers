//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@protocol SAAceCommand;

@interface ADAcePassthroughSiriResponse : AFSiriResponse
{
    id <SAAceCommand> _replyCommand;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001473b0
- (void).cxx_destruct;	// IMP=0x00000001001474ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100147440
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001473b8
- (id)replyCommand;	// IMP=0x00000001001473a0
- (id)initWithRequest:(id)arg1 replyCommand:(id)arg2;	// IMP=0x0000000100147308

@end

