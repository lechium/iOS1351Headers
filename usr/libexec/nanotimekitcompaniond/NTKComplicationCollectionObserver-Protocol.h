//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NTKComplicationCollection;

@protocol NTKComplicationCollectionObserver <NSObject>

@optional
- (void)complicationCollectionDidLoad:(NTKComplicationCollection *)arg1;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didRemoveSampleTemplatesForClient:(NSString *)arg2;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateSampleTemplateForClient:(NSString *)arg2;
@end
