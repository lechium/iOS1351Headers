/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewDescription.h>

@class NSString;

@interface TVURLDescription : TVViewDescription {

	BOOL _centerGrowth;
	NSString* _url;
	double _focusSizeIncrease;
	NSString* _cropCode;
	NSString* _urlFormat;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;              //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,retain) NSString * cropCode;                   //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) NSString * urlFormat;                  //@synthesize urlFormat=_urlFormat - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                     //@synthesize centerGrowth=_centerGrowth - In the implementation block
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)urlFormat;
-(void)setUrlFormat:(NSString *)arg1 ;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(BOOL)centerGrowth;
-(void)setCropCode:(NSString *)arg1 ;
-(NSString *)cropCode;
-(id)initUrlWithProperties:(id)arg1 imageSize:(CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5 ;
@end
