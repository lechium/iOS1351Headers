/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SAUILocalImageResource, NSString;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedLabel; 
@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonItem;
+(id)buttonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)position;
-(id<SASTTemplateAction>)action;
-(void)setPosition:(NSString *)arg1 ;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
-(void)setCentered:(BOOL)arg1 ;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(BOOL)centered;
-(SAUIDecoratedText *)decoratedLabel;
-(void)setDecoratedLabel:(SAUIDecoratedText *)arg1 ;
@end

