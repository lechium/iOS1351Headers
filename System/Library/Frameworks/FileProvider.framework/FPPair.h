/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FPPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (nonatomic,retain) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(id)arg1 ;
-(id)second;
-(id)first;
-(void)setFirst:(id)arg1 ;
-(BOOL)isEqualToPair:(id)arg1 ;
@end

