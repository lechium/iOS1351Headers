//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSSystemAccount : NSObject
{
    NSString *_username;	// 8 = 0x8
    NSString *_DSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006da54
@property(readonly, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;	// IMP=0x000000010006d97c
- (id)initWithUsername:(id)arg1 DSID:(id)arg2;	// IMP=0x000000010006d824

@end

