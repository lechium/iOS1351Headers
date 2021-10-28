//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ColorInfo : NSObject
{
    NSString *colorReason;	// 8 = 0x8
    NSMutableArray *gstateStack;	// 16 = 0x10
    NSString *strokeColorspace;	// 24 = 0x18
    NSString *nonStrokeColorspace;	// 32 = 0x20
}

@property(retain) NSString *nonStrokeColorspace; // @synthesize nonStrokeColorspace;
@property(retain) NSString *strokeColorspace; // @synthesize strokeColorspace;
@property(retain) NSMutableArray *gstateStack; // @synthesize gstateStack;
- (void)grestore;	// IMP=0x0000000100010464
- (void)gsave;	// IMP=0x00000001000103d4
@property(retain) NSString *colorReason; // @dynamic colorReason;
- (id)init;	// IMP=0x0000000100010344

@end
