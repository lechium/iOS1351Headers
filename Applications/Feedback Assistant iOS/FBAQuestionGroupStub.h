//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FBAQuestionGroupStub : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_questionAnswerPairs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010007a238
- (void).cxx_destruct;	// IMP=0x000000010007a528
@property(retain, nonatomic) NSArray *questionAnswerPairs; // @synthesize questionAnswerPairs=_questionAnswerPairs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007a240
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007a180
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100079fac
- (_Bool)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x0000000100079c48
- (id)initWithTitle:(id)arg1 questions:(id)arg2;	// IMP=0x0000000100079b98
- (id)initWithJSONObject:(id)arg1;	// IMP=0x0000000100079afc

@end

