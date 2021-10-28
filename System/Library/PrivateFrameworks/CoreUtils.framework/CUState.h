/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray, NSString;

@interface CUState : NSObject {

	/*^block*/id _eventHandler;
	unsigned long long _index;
	NSPointerArray* _lcaMap;
	NSString* _name;
	CUState* _parent;

}

@property (nonatomic,copy) id eventHandler;                       //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
@end
