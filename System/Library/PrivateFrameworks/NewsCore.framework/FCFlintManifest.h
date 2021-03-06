/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, FCAssetHandle;

@interface FCFlintManifest : NSObject {

	NSString* _identifier;
	NSArray* _fontResourceIDs;
	FCAssetHandle* _mainDocumentAssetHandle;

}

@property (nonatomic,readonly) FCAssetHandle * mainDocumentAssetHandle;              //@synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * fontResourceIDs;                            //@synthesize fontResourceIDs=_fontResourceIDs - In the implementation block
@property (nonatomic,readonly) NSArray * anfDocumentAssetHandles; 
@property (nonatomic,readonly) BOOL isANFDocumentCached; 
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3 ;
-(id)fetchANFDocumentDataProviderWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)anfDocumentAssetHandles;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isANFDocumentCached;
-(NSArray *)fontResourceIDs;
@end

