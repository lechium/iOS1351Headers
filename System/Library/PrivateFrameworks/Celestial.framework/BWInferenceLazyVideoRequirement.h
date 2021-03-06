/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	NSString* _preparedByAttachedMediaKey;
	/*^block*/id _videoFormatProvider;

}

@property (nonatomic,copy,readonly) NSString * preparedByAttachedMediaKey;              //@synthesize preparedByAttachedMediaKey=_preparedByAttachedMediaKey - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(/*^block*/id)arg3 ;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(NSString *)preparedByAttachedMediaKey;
-(id)initWithLazyVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(int)prepareForInputVideoFormat:(id)arg1 ;
@end

