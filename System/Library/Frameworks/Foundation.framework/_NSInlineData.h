/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSInlineData : NSData {

	unsigned short _length;

}
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_createDispatchData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
@end
