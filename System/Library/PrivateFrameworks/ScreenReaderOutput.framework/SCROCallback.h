/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface SCROCallback : NSObject <NSSecureCoding> {

	int _key;
	id<NSSecureCoding> _object;
	BOOL _isAtomic;

}
+(BOOL)supportsSecureCoding;
-(int)key;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
-(void)setIsAtomic:(BOOL)arg1 ;
@end
