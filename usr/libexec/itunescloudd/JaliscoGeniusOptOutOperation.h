//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSString;

@interface JaliscoGeniusOptOutOperation : CloudLibraryOperation
{
    NSString *_cuid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006fe20
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
- (void)_sendOptOutWithCUID:(id)arg1;	// IMP=0x000000010006faec
- (void)main;	// IMP=0x000000010006f960
- (id)initWithConfiguration:(id)arg1 CUID:(id)arg2;	// IMP=0x000000010006f8b4
- (id)initWithCUID:(id)arg1;	// IMP=0x000000010006f840

@end
