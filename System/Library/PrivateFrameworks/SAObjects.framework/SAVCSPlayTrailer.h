/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,copy) NSString * utsId; 
+(id)playTrailer;
+(id)playTrailerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
@end
