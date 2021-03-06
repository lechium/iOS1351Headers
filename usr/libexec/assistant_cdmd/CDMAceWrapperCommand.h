//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDMBaseCommand.h"

@class NSString, SABaseCommand;

@interface CDMAceWrapperCommand : CDMBaseCommand
{
    NSString *_clientId;	// 8 = 0x8
    SABaseCommand *_aceObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003cf94
@property(readonly, nonatomic) SABaseCommand *aceObject; // @synthesize aceObject=_aceObject;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)initWithAceObject:(id)arg1 clientId:(id)arg2;	// IMP=0x000000010003ce50

@end

