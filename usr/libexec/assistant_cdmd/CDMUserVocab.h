//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CDMUserVocab : NSObject
{
    unsigned int _userVocabOptions;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

+ (id)labelSet;	// IMP=0x0000000100035a24
+ (id)_optionLabelMap;	// IMP=0x0000000100035858
+ (id)_labelOptionMap;	// IMP=0x000000010003555c
- (void).cxx_destruct;	// IMP=0x0000000100035b08
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void)addLabel:(id)arg1;	// IMP=0x00000001000353f8
@property(readonly, nonatomic) NSArray *labels;
- (id)initWithText:(id)arg1 label:(id)arg2;	// IMP=0x00000001000350d4
- (unsigned int)userVocabOptions;	// IMP=0x0000000100035ba4
- (id)initWithText:(id)arg1 optionsFlag:(unsigned int)arg2;	// IMP=0x0000000100035b14

@end
