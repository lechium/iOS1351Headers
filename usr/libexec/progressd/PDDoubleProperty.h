//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDProperty.h"

@interface PDDoubleProperty : PDProperty
{
    double _value;	// 16 = 0x10
}

+ (id)valueSQLType;	// IMP=0x0000000100138700
+ (id)entityName;	// IMP=0x0000000100138590
@property(nonatomic) double value; // @synthesize value=_value;
- (void)bindTo:(id)arg1;	// IMP=0x000000010013864c
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x000000010013859c

@end

