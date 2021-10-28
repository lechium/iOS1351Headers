/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableString;

@interface MSVLyricsXMLElement : NSObject {

	NSString* _elementName;
	NSString* _identifier;
	NSMutableString* _mutableText;

}

@property (nonatomic,copy) NSString * elementName;                       //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableString * mutableText;              //@synthesize mutableText=_mutableText - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)elementName;
-(void)setElementName:(NSString *)arg1 ;
-(NSMutableString *)mutableText;
-(void)setMutableText:(NSMutableString *)arg1 ;
@end
