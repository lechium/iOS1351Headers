/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSString, NSNumber;

@interface SAUIAssistantUtteranceView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSNumber * postDialogDelayInMilliseconds; 
@property (nonatomic,copy) NSString * text; 
+(id)assistantUtteranceView;
+(id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)af_text;
-(id)af_speakableText;
-(BOOL)af_isUtterance;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(NSNumber *)postDialogDelayInMilliseconds;
-(void)setPostDialogDelayInMilliseconds:(NSNumber *)arg1 ;
@end
