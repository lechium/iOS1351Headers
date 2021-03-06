/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SilexWeb/SilexWeb-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWConfiguration : NSObject <NSMutableCopying> {

	NSString* _identifier;
	NSString* _storeFront;
	NSLocale* _locale;
	NSString* _contentSizeCategory;
	NSDictionary* _dataSources;
	NSURL* _location;
	CGSize _canvasSize;
	CGRect _contentFrame;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * storeFront;                       //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                         //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSources;                  //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,copy) NSURL * location;                            //@synthesize location=_location - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)storeFront;
-(NSURL *)location;
-(CGRect)contentFrame;
-(NSDictionary *)dataSources;
-(void)setLocation:(NSURL *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setContentFrame:(CGRect)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(void)setStoreFront:(NSString *)arg1 ;
-(id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(CGSize)arg4 contentFrame:(CGRect)arg5 dataSources:(id)arg6 location:(id)arg7 ;
@end

