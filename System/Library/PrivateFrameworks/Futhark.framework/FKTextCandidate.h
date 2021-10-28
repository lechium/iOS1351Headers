/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FKTextCandidate : NSObject {

	float _confidence;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (readonly) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(float)arg2 ;
@end
