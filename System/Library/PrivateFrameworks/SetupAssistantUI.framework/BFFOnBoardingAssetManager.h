/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BFFOnBoardingAssetManager : NSObject
+(id)sharedManager;
+(id)appropriateAvailableLanguageForCurrentLanguage;
+(BOOL)shouldUseWorldwideAssetForLanguage:(id)arg1 feature:(long long)arg2 ;
+(long long)currentAssetDeviceClass;
+(id)appropriateAvailableLanguageForPreferredLanguages:(id)arg1 regionCode:(id)arg2 ;
+(BOOL)shouldUseWorldwideAssetForPreferredLanguages:(id)arg1 language:(id)arg2 feature:(long long)arg3 ;
+(BOOL)hasWorldwideAsset:(long long)arg1 ;
-(void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveMovieForFeature:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)movieURLForAsset:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retriveAssetForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)assetTypeForCurrentDevice;
-(id)featureKey;
-(id)assetFeatureValueForFeature:(long long)arg1 ;
-(id)assetQueryForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(BOOL)arg3 useCatalog:(BOOL)arg4 ;
-(void)purgeAssets:(id)arg1 ;
-(id)placeholderImageNameForFeature:(long long)arg1 ;
-(id)placeholderImageNameForFeature:(long long)arg1 language:(id)arg2 ;
-(void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeFeatureMoviesWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeFeatureMoviesExceptLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeMovieForFeature:(long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)placeholderImageForFeature:(long long)arg1 ;
@end

