/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVURLAssetLoaderFactory.h>

@protocol SVURLAssetLoaderFactory <NSObject>
@required
-(id)createURLAssetLoaderForVideo:(id)arg1;

@end


@protocol SVURLAssetFactory, SVVideoURLProviderFactory, SVURLAssetOptionsProviding;
@class NSString;

@interface SVURLAssetLoaderFactory : NSObject <SVURLAssetLoaderFactory> {

	id<SVURLAssetFactory> _URLAssetFactory;
	id<SVVideoURLProviderFactory> _URLProviderFactory;
	id<SVURLAssetOptionsProviding> _optionsProvider;

}

@property (nonatomic,readonly) id<SVURLAssetFactory> URLAssetFactory;                         //@synthesize URLAssetFactory=_URLAssetFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoURLProviderFactory> URLProviderFactory;              //@synthesize URLProviderFactory=_URLProviderFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetOptionsProviding> optionsProvider;                //@synthesize optionsProvider=_optionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVURLAssetOptionsProviding>)optionsProvider;
-(id)createURLAssetLoaderForVideo:(id)arg1 ;
-(id<SVVideoURLProviderFactory>)URLProviderFactory;
-(id<SVURLAssetFactory>)URLAssetFactory;
-(id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2 optionsProvider:(id)arg3 ;
@end

