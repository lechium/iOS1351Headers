/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
@end
