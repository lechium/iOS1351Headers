//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LogGenerator : NSObject
{
}

+ (id)generatorFromTechnology:(id)arg1;	// IMP=0x0000000100005cfc
+ (void)updateHistoryInState:(id)arg1;	// IMP=0x0000000100005afc
- (id)getSaveContentsFromState:(id)arg1;	// IMP=0x0000000100005e38
- (id)getStartCommand;	// IMP=0x0000000100005e14
- (id)generateLogUsingState:(id)arg1;	// IMP=0x0000000100005df0
- (void)updateState:(id)arg1 withData:(id)arg2;	// IMP=0x0000000100005de0
- (id)init;	// IMP=0x0000000100005aa4

@end

