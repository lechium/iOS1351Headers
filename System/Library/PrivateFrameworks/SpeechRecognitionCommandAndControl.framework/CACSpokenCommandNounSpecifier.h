/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CACSpokenCommandNounSpecifier : NSObject {

	unsigned _type;
	NSArray* _items;

}

@property (nonatomic,readonly) unsigned type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)description;
-(unsigned)type;
-(NSArray *)items;
-(id)initWithType:(unsigned)arg1 items:(id)arg2 ;
-(id)initWithType:(unsigned)arg1 item:(id)arg2 ;
@end

