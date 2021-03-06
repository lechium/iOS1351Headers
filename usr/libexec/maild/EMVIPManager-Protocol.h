//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EAEmailAddressSet, EMVIP, NSSet, NSString;

@protocol EMVIPManager <NSObject>
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
@property(readonly, nonatomic) _Bool hasVIPs;
- (void)removeVIPsWithEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)removeVIPsWithIdentifiers:(NSSet *)arg1;
- (void)saveVIPs:(NSSet *)arg1;
- (_Bool)isVIPAddress:(NSString *)arg1;
- (EMVIP *)vipWithIdentifier:(NSString *)arg1;
@end

