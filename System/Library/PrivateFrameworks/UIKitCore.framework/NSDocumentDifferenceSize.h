/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSDocumentDifferenceSize : NSObject {

	long long _generationCount;
	long long _changeCount;

}

@property (assign,nonatomic) long long generationCount;              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) long long changeCount;                  //@synthesize changeCount=_changeCount - In the implementation block
-(id)description;
-(long long)generationCount;
-(long long)changeCount;
-(void)setGenerationCount:(long long)arg1 ;
-(void)setChangeCount:(long long)arg1 ;
@end
