/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSArray* _policies;

}

@property (retain) NSArray * policies;              //@synthesize policies=_policies - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithPolicies:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)policies;
-(id)processMetadata:(id)arg1 ;
-(void)setPolicies:(NSArray *)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

