//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PAMediaConversionServiceDefaultImageMetadataPolicy.h"

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy
{
}

+ (void)_filterImageProperties:(id)arg1 metadataWithKey:(id)arg2 preserveProperties:(id)arg3;	// IMP=0x0000000100005548
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100005540
+ (id)policyWithAllowLocation:(_Bool)arg1;	// IMP=0x0000000100005434
- (id)processMetadata:(id)arg1;	// IMP=0x00000001000052bc
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000010000521c

@end
