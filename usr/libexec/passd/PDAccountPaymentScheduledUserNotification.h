//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPaymentScheduledUserNotification : PDUserNotification <NSSecureCoding>
{
    unsigned long long _featureIdentifier;	// 88 = 0x58
    NSString *_messageString;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100102930
- (void).cxx_destruct;	// IMP=0x00000001001034d8
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x00000001001034b0
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00000001001033cc
- (_Bool)isValid;	// IMP=0x000000010010334c
- (id)_messageStringForPayment:(id)arg1 account:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x0000000100102acc
- (id)_titleString;	// IMP=0x0000000100102ab4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100102a08
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100102938
- (id)initWithAccount:(id)arg1 payment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x00000001001024b0

@end

