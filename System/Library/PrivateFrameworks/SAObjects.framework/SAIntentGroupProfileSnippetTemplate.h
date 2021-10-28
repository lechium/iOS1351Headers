/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, NSArray;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * imageStyle; 
@property (nonatomic,copy) NSString * imageURI; 
@property (nonatomic,copy) NSArray * labelComponents; 
+(id)profileSnippetTemplate;
+(id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)imageStyle;
-(void)setImageStyle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(NSString *)imageURI;
-(void)setImageURI:(NSString *)arg1 ;
@end
