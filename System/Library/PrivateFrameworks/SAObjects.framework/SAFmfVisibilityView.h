/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (nonatomic,copy) NSURL * searchContext; 
@property (assign,nonatomic) BOOL visible; 
+(id)visibilityView;
+(id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(id)encodedClassName;
@end

