//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface User : NSObject
{
    NSString *_biometricsToken;	// 8 = 0x8
    NSString *_DSID;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100008eac
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *biometricsToken; // @synthesize biometricsToken=_biometricsToken;
- (id)description;	// IMP=0x0000000100008e2c
- (id)compile;	// IMP=0x0000000100008cfc
- (id)initWithDSID:(id)arg1 username:(id)arg2 password:(id)arg3 biometricsToken:(id)arg4;	// IMP=0x0000000100008c00
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000089fc

@end

