/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {

	BOOL _insetsFound;
	unsigned long long _edgeFlag;
	UIEdgeInsets _insets;

}

@property (assign) UIEdgeInsets insets;                      //@synthesize insets=_insets - In the implementation block
@property (assign) unsigned long long edgeFlag;              //@synthesize edgeFlag=_edgeFlag - In the implementation block
@property (assign) BOOL insetsFound;                         //@synthesize insetsFound=_insetsFound - In the implementation block
-(id)description;
-(id)stringValue;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(void)setEdgeFlag:(unsigned long long)arg1 ;
-(unsigned long long)edgeFlag;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end
