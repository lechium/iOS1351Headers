//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MLDDatabaseIntegrityFault.h"

@class NSString;

@interface MLDUnknownIntegrityFault : MLDDatabaseIntegrityFault
{
    NSString *_faultString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100013dd8
@property(readonly, nonatomic) NSString *faultString; // @synthesize faultString=_faultString;
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;	// IMP=0x0000000100013ccc
- (id)description;	// IMP=0x0000000100013c40
- (id)initWithFaultString:(id)arg1;	// IMP=0x0000000100013bb8

@end
