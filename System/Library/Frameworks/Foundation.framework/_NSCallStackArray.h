/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface _NSCallStackArray : NSArray {

	void* _frames;
	unsigned long long _cnt;
	unsigned long long _ignore;
	char** _pcstrs;
	BOOL _wantSyms;

}
+(id)arrayWithFrames:(void*)arg1 count:(unsigned long long)arg2 symbols:(BOOL)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
@end

