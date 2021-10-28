/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSDictionary, UIImage;

@interface BCImage : NSObject {

	NSData* _imageData;
	NSString* _identifier;
	NSString* _imageDescription;

}

@property (nonatomic,retain) NSData * imageData;                            //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) UIImage * image; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIImage *)image;
-(NSDictionary *)dictionaryValue;
-(NSData *)imageData;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
@end
