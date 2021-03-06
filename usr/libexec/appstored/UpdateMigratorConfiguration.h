//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UpdateMigratorConfiguration : NSObject
{
    NSString *_migratorType;	// 8 = 0x8
    NSMutableDictionary *_migratorValues;	// 16 = 0x10
    unsigned long long _attempts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001700b0
@property(readonly, nonatomic) NSString *migratorType; // @synthesize migratorType=_migratorType;
@property(readonly, nonatomic) unsigned long long attempts; // @synthesize attempts=_attempts;
- (void)setMigratorValue:(id)arg1 forConfigurationKey:(id)arg2;	// IMP=0x0000000100170018
- (void)incrementAttempts;	// IMP=0x0000000100170008
- (id)copyMigratorValueForConfigurationKey:(id)arg1;	// IMP=0x000000010016ff90
- (id)copyUserDefaultsRepresentation;	// IMP=0x000000010016feb8
- (id)initWithUserDefaultsRepresentation:(id)arg1;	// IMP=0x000000010016fd54
- (id)initWithMigratorType:(id)arg1;	// IMP=0x000000010016fcd4
- (id)init;	// IMP=0x000000010016fc98

@end

