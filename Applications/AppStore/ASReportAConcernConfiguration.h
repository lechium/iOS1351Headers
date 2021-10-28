//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface ASReportAConcernConfiguration : NSObject <NSCopying>
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_backTitle;	// 24 = 0x18
    NSString *_cancelTitle;	// 32 = 0x20
    NSString *_submitTitle;	// 40 = 0x28
    NSString *_reportConcernExplanation;	// 48 = 0x30
    NSString *_selectReasonTitle;	// 56 = 0x38
    NSString *_selectReasonSubtitle;	// 64 = 0x40
    NSString *_privacyNote;	// 72 = 0x48
    NSArray *_reasons;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010000c098
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectReasonSubtitle; // @synthesize selectReasonSubtitle=_selectReasonSubtitle;
@property(copy, nonatomic) NSString *selectReasonTitle; // @synthesize selectReasonTitle=_selectReasonTitle;
@property(copy, nonatomic) NSString *reportConcernExplanation; // @synthesize reportConcernExplanation=_reportConcernExplanation;
@property(copy, nonatomic) NSString *submitTitle; // @synthesize submitTitle=_submitTitle;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *backTitle; // @synthesize backTitle=_backTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000bd90

@end
