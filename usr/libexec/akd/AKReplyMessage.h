//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_AKMessage.h"

@class NSData, NSError, NSString;

@interface AKReplyMessage : _AKMessage
{
}

- (id)description;	// IMP=0x000000010001ab84
@property(copy, nonatomic) NSData *returnData;
@property(copy, nonatomic) NSError *error;
@property(nonatomic) _Bool didSucceed;
@property(copy, nonatomic) NSString *replyToID;
- (id)init;	// IMP=0x000000010001a878

@end
