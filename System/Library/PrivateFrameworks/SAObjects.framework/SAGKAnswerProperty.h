/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString, SAUIAppPunchOut, NSNumber;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValueAnnotation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(SAUIAppPunchOut *)punchOut;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(NSString *)valueAnnotation;
-(void)setValueAnnotation:(NSString *)arg1 ;
-(SAUIDecoratedText *)decoratedValueAnnotation;
-(void)setDecoratedValueAnnotation:(SAUIDecoratedText *)arg1 ;
@end

