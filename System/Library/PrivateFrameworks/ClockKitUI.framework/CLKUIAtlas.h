/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CLKUIAtlas : NSObject {

	Ai _instanceCount;
	NSString* _uuid;
	unsigned long long _status;
	unsigned long long _width;
	unsigned long long _height;
	double _boundTime;
	unsigned long long _memoryCost;

}

@property (assign,nonatomic) unsigned long long status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long instanceCount; 
@property (nonatomic,readonly) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double boundTime;                           //@synthesize boundTime=_boundTime - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCost;              //@synthesize memoryCost=_memoryCost - In the implementation block
@property (readonly) BOOL isPurgable; 
-(NSString *)uuid;
-(unsigned long long)status;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setStatus:(unsigned long long)arg1 ;
-(long long)instanceCount;
-(BOOL)isPurgable;
-(double)boundTime;
-(unsigned long long)memoryCost;
-(id)initWithUuid:(id)arg1 ;
-(void)incrementInstanceCount;
-(void)decrementInstanceCount;
-(id)backing;
-(void)setBoundTime:(double)arg1 ;
-(void)setMemoryCost:(unsigned long long)arg1 ;
@end

