/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement {

	NSAttributedString* _cachedAttributedString;

}

@property (nonatomic,copy) NSAttributedString * cachedAttributedString;              //@synthesize cachedAttributedString=_cachedAttributedString - In the implementation block
-(void)dealloc;
-(void)_stylesMarkedDirtyNotification:(id)arg1 ;
-(void)setCachedAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)cachedAttributedString;
@end

