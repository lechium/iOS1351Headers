/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLPropertyValue : NSObject {

	BOOL _dirty;
	id _value;

}

@property (nonatomic,retain,readonly) id value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL dirty;                     //@synthesize dirty=_dirty - In the implementation block
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(id)value;
-(BOOL)dirty;
-(id)initWithValue:(id)arg1 dirty:(BOOL)arg2 ;
@end
