//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDProperty.h"

@interface PDBoolProperty : PDProperty
{
    _Bool _value;	// 16 = 0x10
}

+ (id)valueSQLType;	// IMP=0x00000001001383c8
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001380d8
+ (id)entityName;	// IMP=0x00000001001380cc
@property(nonatomic) _Bool value; // @synthesize value=_value;
- (void)bindTo:(id)arg1;	// IMP=0x0000000100138314
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0000000100138264

@end
