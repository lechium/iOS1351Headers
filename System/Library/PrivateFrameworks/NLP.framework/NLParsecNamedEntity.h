/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol NLParsecNamedEntity <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@required
-(NSString *)name;
-(unsigned char)category;
-(float)score;

@end

