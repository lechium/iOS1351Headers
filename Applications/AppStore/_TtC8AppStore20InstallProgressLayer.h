//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class MISSING_TYPE;

@interface _TtC8AppStore20InstallProgressLayer : CALayer
{
    MISSING_TYPE *stageColor;	// 8 = 0x8
    MISSING_TYPE *originAngle;	// 16 = 0x10
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x000000010008a030
- (void).cxx_destruct;	// IMP=0x000000010008aaa0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008ad00
- (id)initWithLayer:(id)arg1;	// IMP=0x000000010008acac
- (id)init;	// IMP=0x000000010008ab80
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000010008a3f8
- (id)actionForKey:(id)arg1;	// IMP=0x000000010008a2b0

// Remaining properties
@property(nonatomic) double enterProgress; // @dynamic enterProgress;
@property(nonatomic) double exitProgress; // @dynamic exitProgress;
@property(nonatomic) double progress; // @dynamic progress;

@end

