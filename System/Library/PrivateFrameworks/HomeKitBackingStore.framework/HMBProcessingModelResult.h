/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject {

	HMBModel* _model;
	HMBProcessingOptions* _options;
	NAFuture* _mirrorOutputFuture;

}

@property (readonly) HMBModel * model;                            //@synthesize model=_model - In the implementation block
@property (readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NAFuture * mirrorOutputFuture;               //@synthesize mirrorOutputFuture=_mirrorOutputFuture - In the implementation block
+(id)alloc;
-(HMBProcessingOptions *)options;
-(HMBModel *)model;
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3 ;
-(NAFuture *)mirrorOutputFuture;
@end
