//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBAFormResponse, FBAQuestion, NSArray, NSNumber;

@interface FBAAnswer : FBAManagedFeedbackObject
{
}

+ (id)keyPathsForValuesAffectingValue;	// IMP=0x00000001000d41b0
+ (unsigned long long)answerTypeFromString:(id)arg1;	// IMP=0x00000001000d3eec
+ (id)emptyLocalAnswerForQuestionID:(id)arg1 inFormResponse:(id)arg2;	// IMP=0x00000001000d3c4c
+ (id)_importByQuestionIDFromJSONArray:(id)arg1 withFormResponseID:(id)arg2 intoContext:(id)arg3;	// IMP=0x00000001000d3410
+ (id)entityName;	// IMP=0x00000001000d30a0
@property(retain) FBAQuestion *question; // @dynamic question;
@property(getter=isOptedOut) _Bool optedOut;
@property(retain) id value;
- (void)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x00000001000d30ac

// Remaining properties
@property(retain) FBAFormResponse *formResponse; // @dynamic formResponse;
@property(retain) NSNumber *primitiveOptedOut; // @dynamic primitiveOptedOut;
@property(retain) NSNumber *questionID; // @dynamic questionID;
@property _Bool resolved; // @dynamic resolved;
@property(copy) NSArray *values; // @dynamic values;

@end

