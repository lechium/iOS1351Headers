/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXInboxModelDataSource.h>

@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource {

	NSDictionary* _providerSourceDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * providerSourceDictionary;              //@synthesize providerSourceDictionary=_providerSourceDictionary - In the implementation block
-(id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2 ;
-(id)providerSourceForModel:(id)arg1 ;
-(NSDictionary *)providerSourceDictionary;
@end

