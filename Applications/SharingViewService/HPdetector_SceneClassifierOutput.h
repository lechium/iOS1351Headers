//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface HPdetector_SceneClassifierOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_HomePodDetected;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100097cfc
@property(retain, nonatomic) MLMultiArray *HomePodDetected; // @synthesize HomePodDetected=_HomePodDetected;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000100097c84
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithHomePodDetected:(id)arg1;	// IMP=0x0000000100097b80

@end

