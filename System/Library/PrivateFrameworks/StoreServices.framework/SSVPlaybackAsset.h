/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject {

	NSDictionary* _assetDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDictionary;              //@synthesize assetDictionary=_assetDictionary - In the implementation block
@property (nonatomic,readonly) NSString * downloadKey; 
@property (nonatomic,readonly) NSString * flavor; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * sinfs; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)URLString;
-(NSString *)downloadKey;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(id)initWithAssetDictionary:(id)arg1 ;
-(NSDictionary *)assetDictionary;
@end
