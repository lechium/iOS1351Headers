/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GPURawCounterSelect : NSObject {

	unsigned _width;
	NSString* _name;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) unsigned width;                      //@synthesize width=_width - In the implementation block
+(id)selectWithName:(id)arg1 width:(unsigned)arg2 ;
+(id)selectWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 width:(unsigned)arg2 ;
@end
