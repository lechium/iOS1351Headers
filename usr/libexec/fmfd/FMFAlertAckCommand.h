//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFBaseCmd.h"

@class NSString;

@interface FMFAlertAckCommand : FMFBaseCmd
{
    NSString *_alertId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004bfe4
@property(retain, nonatomic) NSString *alertId; // @synthesize alertId=_alertId;
- (id)jsonBodyDictionary;	// IMP=0x000000010004bf30
- (id)pathSuffix;	// IMP=0x000000010004bf24
- (_Bool)responseContainsFullModelUpdate;	// IMP=0x000000010004bf1c
- (_Bool)ignoreResponseErrors;	// IMP=0x000000010004bf14
- (id)initWithAlertId:(id)arg1;	// IMP=0x000000010004be9c

@end

