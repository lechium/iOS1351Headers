/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AXMImageCaptionModel : NSObject {

	NSString* _preferredModelName;

}
-(void)evaluate:(id)arg1 ;
-(id)_sceneObservationsWithRequestHandler:(id)arg1 error:(id*)arg2 ;
-(id)_stringForTokenIndex:(long long)arg1 tokens:(id)arg2 ;
-(id)_captionWithRequestHandler:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(id)_tokenizerDictionary:(id*)arg1 ;
-(id)_imageFeatureVectorWithRequestHandler:(id)arg1 error:(id*)arg2 ;
-(id)_stringForNextWordTensor:(id)arg1 tokens:(id)arg2 ;
-(id)_captionWithRequestHandler:(id)arg1 modelName:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelName:(id)arg1 ;
-(id)_captionWithRequestHandler:(id)arg1 usingExternalModelAtURL:(id)arg2 error:(id*)arg3 ;
@end

