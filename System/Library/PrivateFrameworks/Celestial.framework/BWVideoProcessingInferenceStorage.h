/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {

	NSMutableDictionary* _metadataDictionaryForRequirement;

}
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(void)setDictionary:(id)arg1 forMetadataRequirement:(id)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
@end
