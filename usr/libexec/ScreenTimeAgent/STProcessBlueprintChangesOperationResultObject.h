//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CEMPayloadBase, NSArray;

@interface STProcessBlueprintChangesOperationResultObject : NSObject
{
    CEMPayloadBase *_requestToInstall;	// 8 = 0x8
    NSArray *_blueprintPayloads;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002f730
@property(retain, nonatomic) NSArray *blueprintPayloads; // @synthesize blueprintPayloads=_blueprintPayloads;
@property(retain, nonatomic) CEMPayloadBase *requestToInstall; // @synthesize requestToInstall=_requestToInstall;

@end

