/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UITextPosition;

@interface _UITextInputStringTokenizerSubrange : NSObject {

	NSString* _substring;
	UITextPosition* _basePosition;
	long long _indexOfBase;
	NSRange _relevantRange;

}

@property (nonatomic,readonly) NSString * substring;                       //@synthesize substring=_substring - In the implementation block
@property (nonatomic,readonly) UITextPosition * basePosition;              //@synthesize basePosition=_basePosition - In the implementation block
@property (assign,nonatomic) long long indexOfBase;                        //@synthesize indexOfBase=_indexOfBase - In the implementation block
@property (assign,nonatomic) NSRange relevantRange;                        //@synthesize relevantRange=_relevantRange - In the implementation block
+(id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2 ;
-(void)dealloc;
-(NSString *)substring;
-(UITextPosition *)basePosition;
-(long long)indexOfBase;
-(void)setIndexOfBase:(long long)arg1 ;
-(NSRange)relevantRange;
-(void)setRelevantRange:(NSRange)arg1 ;
@end

