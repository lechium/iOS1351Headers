//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDProperty.h"

@class NSData;
@protocol NSSecureCoding;

@interface PDGenericProperty : PDProperty
{
    NSData *_data;	// 16 = 0x10
    id <NSSecureCoding> _value;	// 24 = 0x18
}

+ (id)valueSQLType;	// IMP=0x0000000100138cfc
+ (id)entityName;	// IMP=0x0000000100138a0c
- (void).cxx_destruct;	// IMP=0x0000000100138d08
- (void)bindTo:(id)arg1;	// IMP=0x0000000100138c00
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0000000100138b64
- (id)valueWithExpectedClasses:(id)arg1;	// IMP=0x0000000100138ae0
- (id)valueWithExpectedClass:(Class)arg1;	// IMP=0x0000000100138a78
- (void)setValue:(id)arg1;	// IMP=0x0000000100138a18

@end
