//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface RMActivationEngine : NSObject
{
    NSManagedObjectID *_managementSourceObjectID;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007d80
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004088
- (id)initWithManagementSourceObjectID:(id)arg1 context:(id)arg2;	// IMP=0x0000000100003fe4

@end

